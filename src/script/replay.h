#ifndef REPLAY_H
#define REPLAY_H

extern int ReplayBgmModeDecide(int pl,int mode,int nv,int dm,int eg);
extern void ReplayDetail(int number);
extern void ReplaySaveCheck(int player, int statnumber);
extern void ReplaySelect(void);
extern void ReplaySelectInitial(void);
extern int ReplaySelectProc(void);
extern int getModeAddRep(void);
extern int getModeAddRep2(int *tmpBuf);
extern int loadReplayData(int pl, int number);
extern int loadReplayData2(int pl, int number);
extern int loadReplay_VS(int number);
extern void saveReplayData(int pl, int number);
extern void saveReplay_VS(int number);

#endif
