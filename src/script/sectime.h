#ifndef SECTIME_H
#define SECTIME_H

extern int st_version;
extern int 	st_time_game[90];
extern int 	st_end[90];
extern int 	st_lvstop[90];
extern int 	st_others[90];

extern int PlayerdataLoad(void);
extern void PlayerdataSave(void);
extern int ST_RankingCheck(int player, int rmode, int section,int enable_grade);
extern int ST_RankingCheckAll(int player, int rmode, int enable_grade);
extern void ST_RankingInit(void);
extern int ST_RankingLoad(void);
extern void ST_RankingSave(void);
extern void ST_RankingUpdate(int player, int rmode, int end,int enable_grade);
extern void ST_RankingView();
extern int ST_rankingGet(int player,int rmode,int enable_grade);
extern int Stage_RankingCheck(int player, int rmode) ;
extern void viewbestSTtime(int player);
extern void viewbestSTtimes(int player);

#endif
