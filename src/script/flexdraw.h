#ifndef FLEXDRAW_H
#define FLEXDRAW_H

extern int zoomRate;

extern void BlendExBlt(int pno, int dx, int dy, int ar, int ag, int ab, int br, int bg, int bb);
extern void BlendExBltR(int pno, int dx, int dy, int ar, int ag, int ab, int br, int bg, int bb, int scx, int scy);
extern void BlendExBltRect(int pno, int dx, int dy, int sx, int sy, int hx, int hy, int ar, int ag, int ab, int br, int bg, int bb);
extern void BlendExBltRectR(int pno, int dx, int dy, int sx, int sy, int hx, int hy, int ar, int ag, int ab, int br, int bg, int bb, int scx, int scy);
extern void ExBlendBlt(int pno, int dx, int dy, int ar, int ag, int ab, int br, int bg, int bb);
extern void ExBlendBltRect(int pno, int dx, int dy, int sx, int sy, int hx, int hy, int ar, int ag, int ab, int br, int bg, int bb);
extern void ExBlt(int pno, int dx, int dy);
extern void ExBltFast(int pno, int dx, int dy);
extern void ExBltFastR(int pno, int dx, int dy, int scx, int scy);
extern void ExBltFastRect(int pno, int dx, int dy, int sx, int sy, int hx, int hy);
extern void ExBltFastRectR(int pno, int dx, int dy, int sx, int sy, int hx, int hy, int scx, int scy);
extern void ExBltR(int pno, int dx, int dy, int scx, int scy);
extern void ExBltRect(int pno, int dx, int dy, int sx, int sy, int hx, int hy);
extern void ExBltRectR(int pno, int dx, int dy, int sx, int sy, int hx, int hy, int scx, int scy);
extern void ExCreateSurface(int pno, int x, int y);
extern void ExTextHeight(int n, int size);
extern void ExTextLayerOn(int n, int x, int y);
extern void ExTextMove(int n, int x, int y);
extern void ExTextSize(int n, int size);
extern int getDrawRate();
extern void setDrawRate(int size);

#endif
