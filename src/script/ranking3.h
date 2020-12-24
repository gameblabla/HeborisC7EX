#ifndef RANKING3_H
#define RANKING3_H

extern void RankingAlloc3();
extern int RankingCheck3(int rmode, int rex,int rrots, int rdata, int rtime, int rclear);
extern int RankingGet3(int rmode, int rrots,int rex);
extern void RankingInit3();
extern int RankingLoad3();
extern void RankingProc2_3();
extern void RankingProc_3(int cat,int pages2);
extern void RankingRegist3(int rmode, int rex,int rrots, int rdata, int rtime, int rclear, int rother, char *rname, int rank, int rac, int rst, int rsk, int rco ,int rre);
extern void RankingSave3();
extern void RankingView3();
extern void free_rkname();
extern void getModeNameEx3( int mode, int number );
extern void getRuleNameEx3( int rule, int number );
extern void viewbesttime3(int player,int x,int y,int type);
extern void viewbesttimes3(int player,int x,int y,int type);
extern int viewgrade(int player);

#endif
