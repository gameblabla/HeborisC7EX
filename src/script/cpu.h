#ifndef CPU_H
#define CPU_H

extern int cp_fld[10 * 22 * 2];	// ¼ztB[h x + y * 10
extern int cp_erase[22 * 2];

extern int blockHowManyFilledFromLeft(int player, int y);
extern int cpuBlockHowManyFilled(int player, int y);
extern void cpuCheckBestSpot(int player);
extern int cpuCheckFloating(int player, int x, int y);
extern int cpuCheckFloatingE(int player, int x, int y);
extern int cpuCheckLeftRight(int player, int x, int y);
extern void cpuCopyField(int player);
extern void cpuDrop(int player);
extern void cpuMove(int player);
extern int cpu_HowManyNeedIblock(int player);
extern int cpu_blockEraseJudge(int player);
extern int cpu_checkFieldTop(int player,int x);
extern int cpu_checkHoleStart(int player,int x);
extern int cpu_judgeBigBlock(int player, int bx1, int by1, int kind, int rotate);
extern int cpu_judgeBlock(int player, int bx1, int by1, int kind, int rotate);
	int cpu_setBigBlock(int player, int bx1, int by1, int kind, int rotate);
extern  int cpu_setBlock(int player, int bx1, int by1, int kind, int rotate);

#endif
