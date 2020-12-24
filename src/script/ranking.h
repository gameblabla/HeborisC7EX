#ifndef RANKING_H
#define RANKING_H

int RankingCheck(int rmode, int rtt, int rsc, int rtime, int rlv, int end);
void RankingConvert(void);
void RankingCreate(int cat, int mode);
void RankingInit(void);
int RankingLoad(void);
void RankingProc2_1(void);
void RankingProc_1(int cat);
void RankingRegist(int rmode, int rtt, int rsc, int rli, int rlv, int rtime, int end, char *rname);
int RankingSave(void);
int RankingView(void);

#endif
