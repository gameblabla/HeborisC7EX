#ifndef CONFIG_H
#define CONFIG_H

extern int	restart;
extern int colorMode;
extern int lastmaxPlay;	// ÝèÏXOÌAvC·éÅål	0:VOä@1:cCä
extern int lasttopframe;

void ConfigMenu();
void GameOption();
int LoadConfig(void);
int SaveConfig(void);

#endif
