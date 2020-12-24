#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "include.h"
#include "gamestart.h"

bool PollEvent(); // イベント処理

int main(int argc, char* argv[])
{
#ifdef HOME_SAVE
	char home_path[256], config_path[256], data_path[256], mission_path[256], stage_path[256], demo_path[256], replay_path[256];
	snprintf(home_path, sizeof(home_path), "%s/.heboris", getenv("HOME"));
	snprintf(config_path, sizeof(config_path), "%s/config", home_path);
	snprintf(data_path, sizeof(data_path), "%s/data", config_path);
	snprintf(mission_path, sizeof(mission_path), "%s/mission", config_path);
	snprintf(stage_path, sizeof(stage_path), "%s/stage", config_path);
	
	snprintf(demo_path, sizeof(demo_path), "%s/demo", home_path);
	snprintf(replay_path, sizeof(replay_path), "%s/replay", home_path);

	if (access( home_path, F_OK ) == -1) mkdir(home_path, 0755);
	if (access( config_path, F_OK ) == -1) mkdir(config_path, 0755);
	if (access( data_path, F_OK ) == -1) mkdir(data_path, 0755);
	if (access( mission_path, F_OK ) == -1) mkdir(mission_path, 0755);
	if (access( stage_path, F_OK ) == -1) mkdir(stage_path, 0755);
	if (access( demo_path, F_OK ) == -1) mkdir(demo_path, 0755);
	if (access( replay_path, F_OK ) == -1) mkdir(replay_path, 0755);
#endif
	/* SDLの初期化 */
	if ( SDL_Init(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK) < 0 )
	{
		fprintf(stderr, "Couldn't initialize SDL: %s\n", SDL_GetError());
		return 1;
	}
	SDL_ShowCursor(0);
	/* サウンドの初期化 */
	Mix_OpenAudio(44100, AUDIO_S16SYS, 2, 1024);
	Mix_AllocateChannels(32);

	gameMain();

	Mix_CloseAudio();

	SDL_Quit();

	return 0;
}
