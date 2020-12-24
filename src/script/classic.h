#ifndef CLASSIC_H
#define CLASSIC_H
extern int	blkDataX[7 * 4 * 4];
extern int	blkDataY[7 * 4 * 4];
extern int	ccol[7];

int judgeBigBlockRotate(int player, int bx1, int by1, int kind, int rotate);
int judgeBlockRotate(int player, int bx1, int by1, int kind, int rotate);
void statCMove(int player);
#endif
