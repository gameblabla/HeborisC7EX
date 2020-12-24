#ifndef VIEW_H
#define VIEW_H

extern void disableShadowTimer(int player);
extern void drawBigBlockFast(int bx1, int by1, int kind, int rotate, int color, int bright, int offset, int flash, int player, int use3D);
extern void drawBigBlockNew(int bx1, int by1, int kind, int rotate, int color, int bright, int offset, int flash, int player, int use3D);
extern void drawBlock(int bx1, int by1, int kind, int rotate, int color, int bright, int offset, int flash, int player, int use3D);
extern void drawBlockFast(int bx1, int by1, int kind, int rotate, int color, int bright, int offset, int flash, int player, int use3D);
extern void drawCBlock(int player, int color, int bright, int offset, int flash, int not3D);
extern void drawTLSBlock(int player, int bottom);
extern void drawhBlock(int bx1, int by1, int kind, int color, int r, int player, int rotate, int use3D);
extern int getBigBlock_add(int player);
extern int getBlockPlaneNo(int player, int color);
extern void getSTime(int time);
extern void getTime(int time);
extern void hiddenProc(int player);
extern int isScore(int player);
extern void pinchCheck(int player);
extern void pinchCheck2(int player);
extern void printBIGFont(int fontX, int fontY, const char *fontStr, int fontColor);
extern void printFont(int fontX, int fontY, const char *fontStr, int fontColor);
extern void printFontEx(int fontX, int fontY, const char *fontStr, int fontColor);
extern void printSMALLFont(int fontX, int fontY, const char *fontStr, int fontColor);
extern void printSMALLFontEX(int fontX, int fontY, const char *fontStr, int fontColor);
extern void printTinyFont(int fontX, int fontY, const char *fontStr);
extern void showControl(void);
extern void viewBack(void);
extern void viewField(void);
extern void viewFldBackground(void);
extern void viewFldFrame(int uponly,int i);
extern void viewLineInfo(void);
extern void viewPreview(void);
extern void viewScore(void);
extern void viewScoreSmall(void);
extern void viewTime(void);

#endif
