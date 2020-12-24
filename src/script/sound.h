#ifndef SOUND_H
#define SOUND_H

extern void StopAllWaves(void);
extern void StopAllBGM(void);
extern void PlaySE(int no);
extern void StopSE(int no);
extern void PlayAllSE();
extern int setstartBGM(int mode, int pl);
extern int setstartBGM_debug(int mode, int pl) ;
extern int BgmModeDecide(int pl,int mode);
extern int ReplaysetstartBGM(int mode, int pl);
extern void bgmFadeout(void);
extern void checkFadeout(int pl);
extern void checkMasterFadeout(int player);
extern void changeBGM(int player);
extern void SoundTestProc(void);

#endif
