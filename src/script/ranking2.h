#ifndef RANKING2_H
#define RANKING2_H

extern int ARSSRSch(int rots);
extern void RankingAlloc();
extern int RankingCheck2(int rmode, int rrots, int rdata, int rtime, int rclear);
extern int RankingGet(int rmode, int rrots);
extern int RankingGet2(int rmode,int rtype, int rrots,int player);
extern void RankingInit2();
extern int RankingLoad2();
extern void RankingProc2_2();
extern void RankingProc_2(int cat);
extern void RankingRegist2(int rmode, int rrots, int rdata, int rtime, int rclear, int rother, char *rname, int rank, int rac, int rst, int rsk, int rco ,int rre);
extern void RankingSave2();
extern void RankingView2();
extern void free_rk2name();
extern void getModeNameEx( int mode, int number );
extern void getRuleNameEx( int rule, int number );
extern void viewbesttime(int player);
extern void viewbesttimes(int player);

#endif
