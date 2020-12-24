#ifndef YOMOYO_H
#define TOMOYO_H

extern void tomoyoInitial(int player);
extern void statTomoyoNextStage(int player);
extern void tomoyoCheckStageClear(int player);

extern int getPlatinumBlock(int player);
extern void statTomoyoEditor(int player);
extern void statTomoyoSelect(int player);
extern void statTomoyoResult(int player);
extern void statTomoyoSelect_FP(int player) ;
extern void randPlatinum(int player, int tgtnum);

extern void loadTomoyoStage(int player, int number);
extern void saveTomoyoStage(int player, int number);

#endif
