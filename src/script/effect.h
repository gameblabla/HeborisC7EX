#ifndef EFFECT_H
#define EFFECT_H

extern void effect(int player);
extern void objectAllCrear(int no);
extern void objectClear(void);
extern void objectClearPl(int player);
extern void objectComboClearPl(int player);
extern void objectCreate(int p, int s, int x, int y, int v, int w, int j, int c);
extern void objectCreate2(int p, int s, int x, int y, int v, int w, int j, int c);
extern void objectExecute(void);
extern void objectGetmedal(int no);
extern void objectHanabi(int no);
extern void objectItemWarning(int no);
extern void objectNagareboshiC(int no);
extern void objectNagareboshiP(int no);
extern void objectPopBlock(int no);
extern void objectStatBlock(int no);
extern void objectStatBlock2(int no);
extern void objectStatLine(int no);
extern void objectdelfield(int no);
extern void objectitem_erase(int no);
extern void objectplatina_erase(int no);

#endif
