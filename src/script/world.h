#ifndef WORLD_H
#define WORLD_H

extern int	blkWDataX[7 * 4 * 4];
extern int	blkWDataY[7 * 4 * 4];
extern int	wcol[7];

extern int co(int a, int b, int c);
extern void statWMove(int player, int kickm, int kickr);

#endif
