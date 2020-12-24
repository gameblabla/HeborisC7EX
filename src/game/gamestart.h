#ifndef		__GAMESTART_H__
#define		__GAMESTART_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <stdbool.h>

#include "ars.h"
#include "classic.h"
#include "classic_D.h"
#include "config.h"
#include "cpu.h"
#include "effect.h"
#include "flexdraw.h"
#include "grade.h"
#include "mission.h"
#include "practice.h"
#include "ranking.h"
#include "ranking2.h"
#include "ranking3.h"
#include "readdef.h"
#include "replay.h"
#include "sectime.h"
#include "sound.h"
#include "staffroll.h"
#include "tomoyo.h"
#include "view.h"
#include "world.h"

#include "ygs2kfunc.h"

#define		STRING_MAX		200
#define		str				char*
#define		loop			while ( loopFlag )
#define		halt			spriteTime()
#define		ctime			cgametime
#define		stime			sgametime
#define		wait1			gamewait1
#define		wait2			gamewait2
#define		wait3			gamewait3
#define		waitt			gamewaitt

#include "speed.h"
#include "mission_info.h"



extern int		bgmteisiflg;			//bgm teisi
extern int		count;					// O[oJE^ (t[PÊA65535ÜÅ)
extern int		backno;					//1`12 Êí	61 Îíp
extern int		stat_game[2], statc[10 * 2];	// »ÝÌXe[^XÆp[^ no + pl * 5
extern int		sc[2], lv[2], li[2];	// XRAAxAC
extern int		time_game[2], timeOn[2];		// Q[Jn©çÌoßÔ (1/60bPÊ)ALø?
extern int		next[2 * 3];			// nextÌªÉüÁÄ¢éubN #1.60i
extern int		fld[10 * 22 * 2];		// tB[hÌóÔ  x + y * 10 + pl * 210
extern int		blk[2];					// ¡¿Ä­éubN
extern int		bx[2], by[2], rt[2];	// ubNÌÀW
extern int		bs[2], bk[2];			// ubNÌ©RºÆ­ÁÂ«Ì^C
extern int		mp[2], mpc[2];			// OñÌpbhÌüÍàeÆÔ
extern int		mps[2 * 2];				// X^[gÌmpÆmpcivCL^pj
extern int		erase[22 * 2];			// Á³êéubN
extern int		obj[100], objx[100], objy[100], objv[100], objw[100], objj[100], objc[100], obja[100];
extern int		lc[2], sp[2];			// xAbvÜÅÌJE^ÆºXs[h
extern int		upLines[2];				// ã¸µÄµÜ¤C
extern int		wait1[2], wait2[2];		// Åè¨EÁÅÌÒ¿Ô
extern int		wait3[2], waitt[2];		// Ýu©çÅèÜÅÌ^CE¡­ßÔ
extern int		nextb[1400 * 2];		// ÌubN(Îíp) player²Æ#1.60c7m1
extern int		nextc[2];				// É~éubNJE^
extern int		hole[2];					// ÎíÌÆ«ÌÌÊu
extern int		nextwork[7 * 2];		// É~ÁÄ­éubNÌ_uh~p
extern int		hold[2];				// holdÌ~m
extern int		dhold[2];				// holdÂsÂ
extern int		dhold2[2];
extern int		sw, sh;					// snapshotp XN[E³
extern int		ssc ;				// ssJE^
extern int		tc[2];					// tgmV[YJE^
extern int		tr[2];					// tgmRank
extern int		start[2];				// Q[Jnx
extern int		kickc[2];				// °RèÌJE^
extern int		kickc2[2];				// ARSp°RèJE^iÚnóÔÌñ]ñÍ¦È¢j#1.60c7q2ex
extern int		ending[2];
extern int		onRecord[2];
extern int		edrec[2];
extern int		capc;		// JE^
extern int		oncap;		// æ¾tO
extern int		capKey;	// Jn/I¹L[
extern int		capi;		// æ¾Ôu(t[PÊ)
extern int		capx;		// æ¾ÌæÌ¶ãXÀW
extern int		capy;		// ¶ãYÀW
extern int		capw;		// 
extern int		caph;		// ³
extern int		shirase[2];
extern int		p_shirase[2];	// 1¾ÆPRACTICE[hÅà20x²ÆÉSHIRASEÌ¹èãªèð·é
extern int		p_bgmlv;	// PRACTICEÅ¬·BGMÔ
extern int		sdrop[2];
extern int		qdrop[2];
extern int		cmbpts[2];
extern int		startlvTbl[56];
extern int		slv[2],tlv[2];
extern int		bgmlv;					// »ÝÌBGMiK(0:playwave(50)
extern int		fadelv[2];					// tF[hXCb`tF[hx
extern int		bgmfadestart[50];
extern int		Replaybgmfadestart[48];
extern int		ori_bgmfadestart[16];
extern int		color_tbl_max;
extern int		color_tbl[40];
extern int		tame1,	// hoge ¶EÌüêÁÏÈµÅ¬Ú®·éÜÅÌÔ
					tame2,	// hoge ¬Ú®Ì¬³(­È¢ÙÇ¬¢)B
					tame3,	// hoge ªÌãºÅ
					tame4;	// hoge ªÌãºÅ
extern int		mp2[2], mpc2[2];	// hoge OñÌpbhÌüÍàeÆÔ(ãºL[o[W)
extern char	waitname[25][128];	// Ýè¼
extern int		syutugen[25],	// ubNªÅè³êÄ©çAÌubNªo»·éÜÅÌÔ
					syoukyo[25],	// ubNªêñµÁ½Æ«ÌÁÅÌÒ¿Ô
					settyaku[25],	// ubNªnÊÉBµÄ©çAÚ³êéÜÅÌÔB99É·éÆ³À
					yokotame[25],	// ¡­ßÉKvÈÔ
					hiddenlv[25],	// HIDDEN LV(8ÜÅ)
					fps[25],	// FPS
					waitkey[25],	// V[gJbgL[
					blind[25],
					p_bgmload[25];//BGM
extern int		speed[25];	// ubNÌºXs[h
extern int		p_shirase_line;			// SHIRASEÅ½C¹èãªé©
extern int		p_shirase_interval;	// SHIRASEÅ½xÉ¹èãªé©
extern int		p_shirase_start_level;	// SHIRASEÅÌ¹èãªèJnx
extern int		uplinetype;		// ¹èãªè^Cv(0:SHIRASE(ftHg), 1:TGM+)
extern int		upLineNo[2];		// ¹èãªèCNo
extern int		upLineNoMax;	// ¹èãªètB[hÌC
extern int		upFld[256];			// ¹èãªètB[hzñ(ãÀÍ¡ÌÆ±ë128C)
extern int		p_backno;		// PRACTICEÌwi
extern int		debug;			// fobOtO
extern int		p_over1000;		// PRACTICEÅÌ[ ]ubN
extern int		hide_fps;			// 1ÅFPSðo³È¢
extern int		hide_wait;			// 1ÅWAITðo³È¢
extern int		hide_score;			// 1ÅXRAÆC\¦ðo³È¢
extern int		show_result;		// 1ÅÊ\¦ðo·
extern int		fldsizew[2], fldsizeh[2];	// tB[hTCY¡c ftHg 10 * 20
extern int		IsBig[2];					// Big[htO
extern int		startLvback[2];	// IðJnxÌÞðpBêL¯
extern int		flag;				// 1É·éÆ^CgÉßé
extern int		overcount;
extern int		combo[2], hebocombo[2], pinch[2];
extern int		winr, winc, winu, wink;
extern int		vslevel[2], hidden[2], hiddentm[2];
extern int		hiddeny[2], hiddenti[2], hiddenc[2];
extern int		rksc[40], rkbl[40], rktime_game[40], rklv[40], rkfl[40];	// LOp
extern int		noredraw, fast;
extern int		csr, cnt, enable[80], category, rankingmode;
extern int		replayData[60 * 60 * 20 * 2];	// vCÛ¶pf[^ (Åå20ªÜÅ)
extern int		saveBuf[50000];			// Z[upobt@
extern int		playback;			// vC©?
extern int		demo;				// f[h©?
extern int		demotime;			// f\¦ñ(-1ÝèÈÌÍÅÌfÅrMi[[hð\¦·é½ß)
extern int		setupBak[27];			// ZbeBOàeÌobNAbvp
extern int		pause_game[2], hnext[2];		// |[YµÄé©[¢!?@hnextÍnextÅ¡©¦Äé
extern int		gameMode[2];			// »ÝÌQ[[h 0:BEGINNER 1:MASTER 2:20G 3:DEVIL 4:VERSUS 5:PRACTICE 6:TOMOYO 7:ACE 8:MISSION
extern int		limit[8];	// c¶¬p
extern int		level_shirase_start;	// ¹è ªèÌJnx
extern int		raise_shirase_lines;	// ¹èãªèi
extern int		raise_shirase_interval;	// ¹èãªèÔu
extern int		next_adjust;		// 0É·éÆèÉ©FAAÎªé
extern int		p_next_adjust;
extern int		bravo;				// 1¾ÆSÁµGtFNg è
extern int		showctrl;			// 1ÈçvCÈOÅàìóµ\¦
extern int		rotate_snd;			// 1Åñ]¹ è

			// #1.60c7f9ÇÁÏ
extern int		down_flag[2];			// 0:Oñ«ðgÁÄÈ¢or«ð£µ½ 1:Oñ«ðgÁ½

			// #1.60c7g3ÇÁÏ
extern char	nextb_list[4096];		// cXg(heboris.ini)
extern char	nextdengen_list[4096];	// d¹p^[Xg(heboris.ini)
extern char	nextfp_list[4096];		//FPd¹p^[

			// #1.60c7g5ÇÁÏ
			// GMðF(999ÉÈÁ½) XRA12600013ª30b(48600)Èàgmflag1¬§Ïgmflag2¬§Ï

			// ¸iðXRA
extern int		gscore[18];
			// iÊÌ\¦¼(geade1,3Åg¤)
extern const str		gname[20];
			// fr[hÅÌiÊÌ\¦¼
extern const str		dgname[17];

			// iÊ¼ C7T5(geade2,4Åg¤)
extern const str		gname2[35];
			// àIÉg¤Ï
extern int		grade[2];			// »ÝÌiÊ(0:9 27:M 32:GM)
extern int		gmflag1[2];			// x300ËüÉuiÊ1v Èã u4ª15b(15300)vÈàÅ1ÉÈé
extern int		gmflag2[2];			// x500ËüÉuiÊS4vÈã u7ª30b(27000)vÈàÅ1ÉÈé
extern int		gmflag1_e[2];		// gmflag1Ì»èðµ½©Ç¤©ÌtO
extern int		gmflag2_e[2];		// gmflag2Ì»èðµ½©Ç¤©ÌtO
extern int		gmflag3[2];			//
extern int		gmflag3_e[2];			//

			// #1.60c7g7ÇÁÏ
extern int		timelimit_devil;	// ««è^C(devil)
extern int		timelimit_master;	// ««è^C(master)
extern int		timelimit_20G;		// ««è^C(20G)
extern int		timelimit[2];			// »ÝÌ««è^C
extern int		mpc3[2];			// OñÌpbhÌüÍÔ
extern int		mpc4[2];			// OñÌpbhÌüÍÔ

			// #1.60c7h2ÇÁÏ
extern int		repversw;			// o[WÌvCf[^ðÄ¶·é½ßÌXCb`

			// #1.60c7h3ÇÁÏ
extern int		deadtype;		// SAj (0=º©çubNÁ 1=DF»)

extern int		limit15;		// 15ªÈãvC·éÆ´¬ (0=³ø 1=Lø)
										// (vCÉÛ¶³êÜ·)

			// #1.60c7h8ÇÁÏ
			//int		flag_over1000[3 * 2];	// NEXTÌo»LV
extern int		breaktype;			// òÑUéGtFNgÌíÞ 0:TGM 1:TAP/TI
			// int		wblock;
extern int		shadow_heboris;		// VhE[

			// #1.60c7i1ÇÁÏ
extern int		enable_hold_frame;	// HOLDµ½É©FÌgð0=\¦µÈ¢ 1=\¦·é
extern int		enable_grade[2];		// iÊFè 0=Èµ 1= è
extern int		hold_used[2];			// HOLDðgÁ½©tO 0:Ü¾gÁÄÈ¢ 1:ñ 2:QñÚÈ~

			// #1.60c7i2ÇÁÏ
extern int		bdowncnt[2];			// ~mð°³¹½ñ
extern int		st_bdowncnt[2];			// STLOpibdowncntÆáÁÄèúIÉZbgª©©éj
extern int		tlsrange;			// PRACTICEÅÌTLSÌÍÍ 0:OFF 1:100ÜÅ 2:ALWAYS
extern int		gmflag_r[2];			// [NAÅGMÉÈé Ìæ¤ÈàÌ
extern int		semigmflag_r[2];		// ©¦é[NAp

			// #1.60c7i6ÇÁÏ
extern int		giveup_func;		// ÌÄQ[µ½Ì®ì(0=QÁÒ¿ 1=[hZNg 2=^Cg)
extern int		giveup_safety;		// 0=ÇñÈóµÅàÌÄQ[Â\ 1=|[Y¾¯ÌÄQ[Â\.
extern int		mini_select;		// SOLO MODEðTIME TRIALêpÉ·éÝè(0=³ø 1=Lø)

			// #1.60c7i8ÇÁÏ
extern int		IsBigStart[2];	// BIGÅnß½©Ç¤©ÌtO(DEVILÌoOñðp)

			// #1.60c7i9ÇÁÏ
extern int		skip_viewscore;		// XRAE^C\¦ÈÇÌðÀsµÈ¢
extern int		skip_viewbg;		// wið\¦µÈ¢
extern int		skip_obj;			// SÄÌoðµÈ¢
extern int		hide_hidden;		// HIDDEN LV\¦ðB·

			// #1.60c7j1ÇÁÏ
			//int		time_gmflag1 = 15300;		// x300ËüÌGMð^C
			//int		time_gmflag2 = 27000;		// x500ËüÌGMð^C
			//int		time_grandmaster = 48600;	// x999B¬ÌGMð^C(810*60)
			//int		grade_gmflag1 = 8;			// x300ËüÌGMðiÊ
			//int		grade_gmflag2 = 12;			// x500ËüÌGMðiÊ

			// #1.60g7j2ÇÁÏ
extern int		mirror;					// ¾ð\¦·éÝè(0=³ø 1=Lø)
extern int		domirror;				// mirrorªLøÌA¾ð\¦·étO

			// #1.60c7j5ÇÁÏ
extern int		p_hold;				// úHOLDubN(-1=Èµ 0=Ô, 1=ò, 2=©, 3=Î, 4=, 5=Â, 6=)
extern int		bakhold ;				// Ýè³êÄ¢éHOLDubN
extern int		p_nextpass;				// cèL³
extern int		pass_flg[2];		// cètO(A±üÍh~p)
extern int		fmirror;				// tB[h~[ðg¤©
extern int		p_fmirror_interval;		// tB[h~[Ôu
extern int		p_fmirror_timer;		// tB[h~[^C}[(~[»É©©éÔ)
extern int		rollroll;				// [[ðg¤©
extern int		p_rollroll_interval;	// [[Ôu
extern int		p_rollroll_timer ;		// [[^C}[(ñ]·éÜÅÌÔ)
extern int		p_xray_interval;		// X-RAYÔu
extern int		p_xray_frame ;			// X-RAYüút[
extern int		isrollroll[2];		// »ÝÌcª[[©
extern int		xray;					// X-RAYðg¤©
extern int		isxray[2];			// »ÝX-RAYóÔ©
extern int		xray_counter[2];	// X-RAYpJE^
extern int		color_counter[2];	// COLORpJE^
extern int		fcolor;					// COLORðg¤©
extern int		iscolor[2];		// »ÝCOLORóÔ©
extern int		shadow_timer;			// VhE^C}[ðg¤©
extern int		p_shadow_timer;		// VhE^C}[(ubNªÁ¦éÜÅÌÔ)
extern int		fldt[10 * 22 * 2];			// tB[h^C}[
extern int		fldbuf[10 * 22 * 2];		// tB[hobt@(~[ÌoÉgp)
extern int		fldtbuf[10 * 22 * 2];		// tB[h^C}[obt@(~[ÌoÉgp)
extern int		ready_start;			// readyJn
extern int		ready_end ;				// readyI¹
extern int		go_start;				// goJn
extern int		go_end;				// goI¹

			// 961ÇÁÏ
extern int		skill[2];		// 4iÁµñ(15ñÉCu, Ag, Au, Rg(?) medal)
extern int		start_flag[2];	// JnxªãªçÈ¢æ¤É·é×ÌFlag

			// #1.60c7j7ÇÁÏ
extern int		lap_time_game[100 * 2];			// HeboLv 3-78, TGMLv 50-1300
extern int		split_time_game[100 * 2];		// HeboLv 3-78, TGMLv 50-1300
extern int		st_record_interval_tgm;	// 50TGMLvÉ^CXV¨±êÌ10{É^CXV
extern int		st_record_interval_heb;	//  3HebLvÉ^CXV
extern int		hide_st_record;			// 1ÅL^^Cð©¹È¢

			// #1.60c7j8ÇÁÏ
extern int		big_block_type;				// BIGÌìubN`æû@(0=ÊíubN~4 1=2{gå)
extern int		st_record_force_viewright;	// 1ÅL^^CðVOäÅàE¤Éo·

			// #1.60c7j9ÇÁÏ
extern int		shadow_timer_type;			// VhE^C}[ÌíÞ (0=pbÆÁ¦é 1=XÉÁ¦é)
extern int		shadow_timer_flag[2];			// VhE^C}[©Ç¤©

			// #1.60c7k4ÇÁÏ
extern int		allclear[2];					// SÁµµ½ñ

			// #1.60c7k7ÇÁÏ
extern int		p_ending;					// PRACTICEÅÌGfBO
									// (0=ÊívC 1=BEGINNER[ 2=©¦[ 3=Á¦[ 4=DEVIL[)
extern int		p_goaltype;			//I¹û@;ÈµAxACAubNA^C
extern int		p_goaltypenum;		//ãÅß½I¹û@ªÇÌÌlÉÈÁ½çIíè©
extern int		p_goaltypenumlist[10];

			// #1.60c7k9ÇÁÏ
			//int		limit15_tt = 1;					// ^CgCAÅÌxh~ÌL³(0=Èµ 1= è)

extern int		dead_blockframe;			// ñ¾Æ«gðÁ·©(0=Á³È¢ 1=Á·)

			// #1.60c7l1ÇÁÏ
extern int		objp[100];						// jóGtFNgpvC[Ô

			// #1.60c7l2ÇÁÏ [obNAbv]
extern int		b_wait1[2];		// Åè¨
extern int		b_wait2[2];		//ÁÅÌÒ¿Ô
extern int		b_wait3[2];		//Ýu©çÅèÜÅÌ^C
extern int		b_waitt[2];		//¡­ßÔ
extern int		b_sp[2];
extern int		b_nextc[2];		// [obNAbv] ºXs[h,NEXT

			// #1.60c7l5ÇÁÏ
extern int		stage[2];	// Xe[WÔ
extern int		sclear[2];	// Xe[WNAµ½©

extern int		stime_game[2];	// Xe[W^C
extern int		ltime_game[2];	// ~bg^C
extern int		ctime_game[2];	// NA^C

			// #1.60c7l7ÇÁÏ
extern int		isfmirror[2];		// »ÝÌÊª~[©
extern int		rollroll_flag[2];	// »ÝÌÊª[[©
extern int		xray_flag[2];		// »ÝÌÊªX-RAY©#1.60c7p9ex2
extern int		color_flag[2];		// »ÝÌÊªCOLOR©#1.60c7p9ex2
extern int		rest_pblock[2];		// cèv`iubN

extern int		s_ready_start;			// tomoyo readyJn
extern int		s_ready_end;			// tomoyo readyI¹
extern int		s_go_start;			// tomoyo goJn
extern int		s_go_end;				// tomoyo goI¹

extern int		dummy;	// Ýèt@Cªó¾Æ23sÚÅ­¶·éäÌG[ðñð·é½ßÌ_~[Ï

			// #1.60c7l8ÇÁÏ
extern int		start_stage[2];		// X^[gÌXe[WÔ
extern int		skipKey;				// Xe[WXLbvL[

			// #1.60c7l9ÇÁÏ
extern int		start_nextc[2];		// X^[gÌNEXTC
extern int		stage_nextc[2];		// Xe[WX^[gÌNEXTC
extern int		randommode[2];		// _[h

			// #1.607m3ÇÁÏ
extern int		clearnum[2];	//XLbv¹¸ÉNAµ½
extern int		clearp[2];		//NA¦

			// #1.60c7m5ÇÁÏ
extern int		t_noborder[2];		// TOMOYO[hÌ«ØèÈµ[h 0=³ø 1=Lø

			// #1.60c7m6ÇÁÏ
extern int		BigMove[2];					// BIGÌÚ®PÊ 0=2}XPÊÚ® 1=1}XPÊÚ®
extern int		bigtype;				// ªÌiniÝèp

			// #1.60c7m7ÇÁÏ
extern int		comboM[2];

			// #1.60c7m8ÇÁÏ
extern int		combo2[2];					// 1ñÁµðÜÜÈ¢R{

			// #1.60c7m9ÇÁÏ
extern int		medaltype;				// _ÌGÌíÞ
extern int		world_drop_snd;			// [h[ÅÌÚn¹ÌL³(0=Èµ 1= è 2=¦ºÈO è)
extern int		super_breakeffect;		// TOMOYOÈOÅàSubNÉjóGtFNgð\¦·é

extern int		c_cblk[2];					// ìeg~mÌFiìj
extern int		c_cblk_r[2];				// ìeg~mÌFiu¢½ãj
extern int		c_nblk[6 * 2];				// NEXT~mÌF
extern int		c_hblk[2];					// HOLD~mÌF

			// #1.60c7n1ÇÁÏ
extern int		vs_match;				// Îíñ
extern int		vs_win[2];			// Á½ñ
extern int		fldi[10 * 22 * 2];			// tB[hACe
												// 1ÂÅàACeðÁ·ÆA¼ÌACeÍSÄÁ¦Ü·B
												// 0=Èµ 1=MIRROR 2=ROLL ROLL 3=DEATH BLOCK
extern int		item[2];					// »ÝÌACe
extern int		item_name[2];				// tB[hEãÉ\¦·éACe¼
extern int		item_g[2];					// ACeQ[W
extern int		fldibuf[10 * 22 * 2];		// tB[hACeobt@(~[ÌoÉgp)
extern int		item_t[2];					// ACeÌøÊÔ
extern int		item_interval;			// ACeªo»·éÔu
extern int		item_rollroll[2];			// ACeÅ[[­¶©
extern int		item_monochrome[2];			// ACeÅ[]­¶©

			// #1.60c7n2ÇÁÏ
extern int		monochrome_mode[2];		// mN[h0
extern int		p_monochrome_mode;		// 0:Ê 1:mN 2:[]
extern int		hide_tomoyo_totaltime;	// TOMOYOÅTOTAL TIMEðB·
			// #1.60c7n3ÇÁÏ
extern int		laststage[2];		//XgXe[Wúl
extern int		rescue[2];			//REJE^[
extern int		REflag[2];			//s`ÉÈéÆ1JEg·éÆ0É

extern int		pinch2[2];


			// #1.60c7n6ÇÁÏ
extern int		tspin_c[2];			// T-SPIN!cè\¦t[
extern int		tspin_flag[2];		// T-SPINÌ Ý½¢ÈàÌ
										// subNªÚnµ½óÔÅñ]·éÆ1ÉÈèAÚ®·éÆ0ÉÈé
										// 1ÌóÔÅCÁµ·éÆuT-SPIN!vÆ\¦

			// #1.60c7n7ÇÁÏ
extern int		disable_hold;	// HOLDÖ~Ýè
extern int		disable_irs;	// æsñ]Ö~Ýè
extern int		max_fps;		// PRACTICE[hÌFPS

			// #1.60c7n8ÇÁÏ
extern int		replay_save[2];		// vCÉZ[uÂ\©Ç¤©
extern int		time2[2];			// TOMOYOvCpvC^C

			// #1.60c7o1ÇÁÏ
extern int		sgrade[2];			//  iÊ §É»è
extern int		min_sgrade;		// ±ÌiÊ©ç iÊð\¦

			// #1.60c7o2ÇÁÏ
extern int		cp_x[2];				// ÅPèÌXÀW
extern int		cp_rt[2];				// ÅPèÌubNÌü«
extern int		cp_input[10 * 2];		// Rs[^ÌüÍóµ
extern int		cpu_flag[2];			// ìµÄ¢éÌªRs[^©Ç¤©

			// #1.60c7o3ÇÁÏ
extern int		cp_hold[2];					// Rs[^ªHOLD·éÆ«Í1
extern int		cp_player_1p;			// Rs[^ªì·é©(1P)
extern int		cp_player_2p;			// Rs[^ªì·é©(2P)

			// #1.60c7o4ÇÁÏ
extern int		cp_type;				// Rs[^Ì«i 0=ÆÉ©­CðÁ· 1=2CÈãÁ¦éÆ«¾¯
extern int		cp_rot_c[2];

			// #1.60c7o5ÇÁÏ
extern int		tmp_maxPlay;	// vClÌobNAbv VOäÅÎí·éÆ«Égp
extern int		block_rframe;	// ubNÌüèÉ¢lp`ð\¦

			// Èºhogepb`æè
extern int		sevolume;	//øÊ¹Ì{[B0ªWA-10000Å³¹B
extern int		se;			//øÊ¹ð¬·©Ç¤©B(0Èç¬³È¢)
extern int		bgm;		//BGMð¬·©Ç¤©B(0Èç¬³È¢)

			// #1.60c7o6ÇÁÏ
extern int		endtime_game[2];		// X^bt[oßÔ

			// #1.60c7o7ÇÁÏ
extern int		t_training[2];	// TOMOYO[hð1ÊÀèÅVÔ©Ç¤©

			// #1.60c7p1ÇÁÏ
extern int		up_flag[2];			// 0:OñªðgÁÄÈ¢orªð£µ½ 1:OñªðgÁ½
extern int		p_stage;		// PRACTICEÅg¤Xe[W(0:Èµ 1-27:TOMOYOXe[W 28-99:PRACTICEXe[W)

			// #1.60c7p2ÇÁÏ
extern int		bgfadesw;		// witF[hXCb` 0:Êí 1:tF[hAEg 2:tF[hC
extern int		bgfadelv;		// witF[hx 0-256ÜÅ
extern int		enable_bgfade;	// witF[hð 0=gíÈ¢ 1=g¤
extern int		bgfade_cnt;	// witF[hÌ¬³ ªå«¢ÙÇ¬

			// #1.60c7p3ÇÁÏ
			//int		bgfade_type = 38;	// witF[hÌíÞ

			// #1.60c7p4ÇÁÏ
extern int		english;		// For English Users

			// #1.60c7p8ÇÁÏ
extern int		bgmvolume;		// BGMÌ{[ 0ªWA-10000Å³¹
extern int		bg_max;				// wiÌÅå

			// #1.60c7p9exÇÁÏ
extern int		xray_bgblack;		// X-RAYÉwið^ÁÉ·é
extern int		xray_drawblockframe;// X-RAYÉubNÌgüð`­
extern int		color_bgblack;		// COLORÉwið^ÁÉ·é

			// #1.60c7q1exÇÁÏ
extern int		stp[2];		//STv`i_Â
extern int		stg[2];		//STà_Â
extern int		sts[2];		//STâ_Â
extern int		stb[2];		//STº_Â

			// #1.60c7q2exÇÁÏ
extern int		disable_wallkick;	// 1É·éÆÇRè³ø

			// #1.60c7q5ÇÁÏ
extern int		item_nblk[6 * 2];
extern int		item_coming[2];
extern int		item_waiting[2];

extern int		hanabi_waiting[2];	// ­¶Ò¿ÔÎ
extern int		hanabi_frame[2];	// ­¶·éÜÅÌt[

extern int		noitem;			// 1É·éÆACeª³µÉÈèÜ·VERSUS MODE
extern int		no_hanabi;		// 1É·éÆCðÁµÄàÔÎª\¦³êÈ­ÈèÜ·BEGINNER MODE

			// #1.60c7q6ÇÁÏ
extern int		r_irs;			// 1É·éÆÔÌIRSðTGMî»i°RèÈµj

			// #1.60c7q7ÇÁÏ
extern int		st_new[20 * 2];		// ¶ãÌZNV^C\¦ÌFðÏ¦éÆ«Ég¤
extern int		max_fps_2;		// ÅåFPS

			// #1.60c7q8ÇÁÏ
extern int		timelimit2_devil;	// LV1000««è^C(devil)
extern int		timelimit2[2];			// »ÝÌLV1000««è^C

			// #1.60c7r2ÇÁÏ
extern int		big_rise;			// BIGÉ¹èãªè2{

			// #1.60c7r2+ÇÁÏ
extern int		anothermode[2];		// AiU[[h
extern int		timelimitw_devil;	// [h««è^C(devil)
extern int		timelimitw[2];			// »ÝÌ[h««è^C

			// #1.60c7r4ÇÁÏ
extern int		vsmodesl;		//vs[hZNg
extern int		disrise;		//£èãªèÈµ
extern int		sptmp[2];		//VS[h¬xev[g

			// #1.60c7r5ÇÁÏ
extern int		vs_goal;		// VS[h S[xi0=Èµj
extern int		vs_time;		// VS[h §ÀÔi0=³§Àj
extern int		breakti;		// breaktype = 1ÌÆ«ÌjóGtFNgÌíÞ
extern int		wintype;

			// #1.60c7r7ÇÁÏ
extern int		world_i_rot;	// [h[ÌI^~mÌñ]â³^Cv 0=¶EÎÌ^Cv 1=ñ¶EÎÌ^Cv

			// #1.60c7r8ÇÁÏ
extern int		c_mission;		// »ÝÌ~bVÔ
extern int		c_norm[2];			// »ÝB¬µÄ¢ém}
extern int		mission_file;	// t@CÔ

extern int		mission_type[40];	// âèÌíÞ
extern int		mission_norm[40];	// âèÌm}
extern int		mission_time_game[40];	// âèÌ§ÀÔ
extern int		mission_end[40];	// 0=NA·éÆÌâèÖ 1=NA·éÆGfBO 2=Åãð_uÁµÈOÅGfBO
extern int		mission_lv[40];		// º¬xx
extern int		mission_bgm[40];	// BGM

			// #1.60c7r9ÇÁÏ
extern int		cycle[4];			// TCNp
extern int		mission_erase[40];	// ã©çÁ·éC

			// #1.60c7s2ÇÁÏ
extern int		mission_opt_1[40];	// ~bVÉæÁÄÙÈéÇÁîñ
extern int		mission_opt_2[40];
extern int		mission_opt_3[40];
			//int		mission_opt_4[30];

extern int		target_cleared[200];	// ^[QbgÌXe[Wo»ÏÝtOi¯¶ÊªÜ½oéÌðh®j

extern int		eraser_lines[4];	// CCT[ÌCÊu
extern int		eraser_cleared[4];	// ùÉÁµ½©Ç¤©ÌtO
extern int		eraser_now_pattern;	// CCT[Ì»ÝÌp^[

extern int		spawn_y_type;	// o»Êu^CviS»èàÏíèÜ·j

			// #1.60c7s3ÇÁÏ
extern int		tls_view;		// TLS 0=©® 1=íÉLø 2=íÉ³ø

			// #1.60c7s4ÇÁÏ
extern int		clear_mission;		// NAµ½~bV
extern int		eraser_now_lines;	// »ÝæÊàÉ¶ÝµÄ¢éCCT[ÌCÌ

extern int		ybigtype;		// BIGÌcÚ®PÊ 0=2}XPÊÚ® 1=1}XPÊÚ®

			// #1.60c7s5ÇÁÏ
extern int		over1000_block[2];
extern int		over1000_start;		// []ÌJnx

			// #1.60c7s6ÇÁÏ
extern int		upLineT[2];				// ¹èãªè^Cv
extern int		tspin_type;			// T-SPINÌ»èû@

			// #1.60c7s6ÇÁÏ
extern int		hanabi_combo[2];		//HANABIR{â³pL¯æ
extern int		hanabi_flag;			//HANABIðêñÌñÁÉÂ«êñÌ­¶ÌÝ
extern int		hanabi_total[2];		//HANABIvl
extern int		endingcnt[2];			//GfBOÌÔÎÈè·¬éÌð~ßé

			//int		player;
extern int		tomoyo_hanabi[2];		//TOMOYO[hpHANABIJE^

extern int		last_tspin[2];			//T-SpinÉæéCÁµ
extern int		b_to_b_flag[2];			//Back to BacktO
extern int		b_to_b_c[2];
extern int		b2bcheck;			//backtobackð`FbN·é©(ini)H

extern int		itemappear_c[2];			//ACeo»ÌQ[WtbVÔ

extern int		platinaerase_cnt[2];	//v`iubNÁTEhðÂç·ñ
extern int		ext_s[2];				//ÔÁÌoi\¦jp
extern int		timeextend_snd_cnt[2];	//ÔÁÌoiSEjp

extern int		fmirror_cnt[2];			//tB[h~[pJE^[

extern int		staffroll_y_ex[2];		//ðxpX^bt[yÀW
extern int		tomoyo_opt[2];			//TOMOYO[hJnXe[WÈÇ

extern int		nmlroll_bgmloop;	//Ê[ÌBGMð[v³¹é
extern int		bgnroll_bgmloop;	//BEGINNER[ÌBGMð[v³¹é

			extern int		top_frame;			//ãt[i0=TI 1=ACEj

extern int		heboGB[2];				//missionÌI[hX^CÅgp

extern int		isrotatelock[2];		//ñ]¶
extern int		isholdlock[2];			//HOLD¶
extern int		istimestop[2];			//Ôâ~
extern int		ishidenext[2];			//NEXTBµ
extern int		ismagnetblock[2];		//}Olbg
extern int		isLRreverse[2];			//¶Et]
extern int		isUDreverse[2];			//ãºt]
extern int		isboost[2];				//u[Xgt@CA
extern int		isfever[2];				//tB[o[
extern int		isremote[2];			//[gRg[
extern int		isdark[2];				//_[N
extern int		istrance[2];			//gXtH[
extern int		isdouble[2];			//_u
extern int		ismiss[2];			//miss
extern int		isfakenext[2];			//fakenext

extern int		stopmirror_flag[2];		//Îíp~[ðI¹·étO

extern int		item_timer[2];			//À«ACeÌ^C}[

extern int		isUPdelfield[2];		//ªDEL FIELD
extern int		isDWdelfield[2];		//«DEL FIELD
extern int		isdeleven[2];			//  DEL EVEN
extern int		isreflect[2];			//REFLECT
extern int		isallclear[2];			//ALLCLEAR

			// iÊ|Cgª1Â¸éÜÅÌÔ
extern int		glimit[33];

extern int		gpoint[2];			// »ÝÌiÊ|Cg
extern int		gtime_game[2];			// iÊ|Cg¸­^C}[
extern int		gflash[2];			// iÊªãªÁ½É\¦ðõç¹éÉgp

extern int		vsbg;	//ÎíÉêpÌwiðgpi0=c¹¸ÉA1ÔÚðgp 1=êpÌ¨ðgpj

extern int		use_item[2];	//gp·éACe 0Å_

extern int		p_erase_c[11];	//PRACTICEp ÁCJEg
extern int		p_heboGBlv;		//PRACTICEp HeboGB

extern int		isblind[2];		//uChON/OFF§ä
extern int		blind_flag[2];	//uChÌL³

extern int		p_blind;

extern int		block_spectrum;	//ubNÌci0=OFF 1=ONj
			// #1.60c7t7ÇÁÏ
extern int		p_setting;			//practicepÌFAVORITESÌíÞp_setting
extern int		def_p_sp;			//ftHgÌpracticepÌFAVORITESÌíÞ
extern int		skip_fwait;			//practicepÌFAVORITESÌ\¦§À

extern int		skillg[2];		//gradeup2Ég¤skill
extern int		skillbai[2];		//skillgup2Åè³êé{¦
extern int		endlines[2];		//[ÉÁµ½ñ
extern int		gup_down[2];		//cool:1Æregret:0

extern int		start_mission;		//JnÌ~bVÔ

extern int		randseed[2];		//V[h vC[²Æ
extern int		first_seed[2];		//ÅÌV[h

extern int		title_acnt;
extern int		title_mov_f;
extern int		mov_inter;

extern int		max_hnext[2];
extern int		death_plus[2];

			// wi[r[
extern int		back_acnt;			// »ÝÌt[
extern int		back_mov_f[13];			// ÅåR}i0É·éÆÃ~æj
extern int		back_mov_inter[13];		// 1R}ð\¦·ét[

			// #1.60c7t9ÇÁÏ
extern int		time99[2];			// xXgbvÔ
extern int		timeN[2];			// ubNðìµÄ¢éÔ(0-98)
extern int		ave_laptime3[2];	//ZNVÌ½ÏÚ®Ô
extern int		gup3rank[2];			//N0-2
extern int		gup3sp_adjust[2];		//NÉ í¹ÄXs[h²®
extern int		qualityflag[2];			//2ñÈãoÈ¢æ¤É
extern int		skillflag[2];
extern int		tr2[2];					//ÂÏ¬x
extern int		border_rank[2];			//
extern int		border_time_game[20];
extern int		border_time59[20];
extern int		border_time48[20];
extern int		grade2[2];			//19iÏ·
extern int		textguide;			//eLXgKCh

extern int		min_speed[2];
extern int		isthunder[2];
extern int		thunder;
extern int		thunder_timer;

extern int		enable_minspeed;		//TOMOYOÅá¬xðLøÉ·é

extern int		tomoyo_rise_fld[10 * 20 * 2];	//TOMOYOp¹èãªètB[h Åå20i
extern int		tomoyo_rise[2];					//¹èãªèON/OFF¹èãªèÔu
extern int		tomoyo_rise_t[2];
extern int		hnext_flag[2];
extern int		hnext_timer[2];
extern int		tomoyo_waits[2];
extern int		tomoyo_domirror[2];
extern int		tomoyo_ehfinal_c[2];

extern int		ndelay[2];
extern int		navigation;
extern int		navigation_time_game[2];
extern int		navigation_limittime;
extern int		navigation_limitLv;
extern int		hold_snd;

extern int		nanamedown;
extern int		hide_tomoyoinf;
extern int		erasecnt[2];

extern int		item_mode[2];	// ACe[h
extern int		hebo_plus[2];	// TGM+

extern int		fastmirror;	// ~[ÌtB[hñ]ð¬»@vÔÍ¯¶

extern int		beginner_rollbgm;	//rMi[Ì[BGMÏX (0=êp 1=bgm02 2=Êí[)
			// #C7U0.5EXÇÁÏ
extern int		rankingrule;
extern int		ranking_type;				//LO\¦^Cv

extern int		medal_ac[2];				// ac_ÌF
extern int		medal_sk[2];				// sk_ÌF
extern int		medal_co[2];				// co_ÌF
extern int		medal_re[2];				// re_ÌF
extern int		medal_st[2];				// st_ÌF(ã©çSÄÜÆßÄ)
extern int		end_f[2];				// ®SNAtO

extern int		disable_ehlast_gimmick;

extern int		lasernum[2];			//[U[Ì{
extern int		laserpos[4 * 2];		//[U[ÌÊu
extern int		rapid_c[2];				//{^AÅi[U[ÌÁÉgpj
extern int		dolaser[2];				//ubNÚ®ÈOÌ[U[­ËtO
extern int		do16t[2];				//ubNÚ®ÈOÌ16ttO

extern int		nega_pos[10 * 2];		//lKtB[hÖA
extern int		donega[2];

extern int		shotgunpos[22 * 2];		//VbgKÖA
extern int		doshotgun[2];

extern int		doexchg[2];				//tB[hð·
extern int		docopyfld[2];				//Rs[

extern int		rt_nblk[6 * 2];			// NEXTubNÌü«iROTATE LOCKÉgpj

extern int		isbanana[2];			//SHUFFLE FIELDÖA
extern int		banana_pos[10 * 2];
extern int		banana_c[2];

extern int		enable_randexam;	//1É·éÆêèÌm¦ÅiÊ±­¶
extern int		examination[2];			//±H0:Èµ1:¸i±@2:~i±
extern int		exam_grade[2];			//±iÊ
extern int		purupuru[2];			//tB[hÌvv
extern int		exam_range[8];

extern int		ace_irs;			//ACE®IRS 1ÍACE 2ÍJX^

extern int		stage_skip_mpc[2];	//·µ
extern int		hebop_interval[2];	//HEBO+¹èãªè´o
			/* STLOÉg¤Ï */
extern int		stage_time_game[30 * 2];	//Xe[W²ÆÌ^C
extern int		lvstop_time_game[20 * 2];	//xXgbv^C
extern int		st_other[30 * 2];		//Æµ½ubN

extern int		harddrop[2];
extern int		versus_rot[2];

extern int		tr_20g[2];
extern int		dorulet[2];

extern int		Isbesttime;		//xXg^Cð©¹é©

			// ACE[hBGMtF[hAEge[u
extern int		ace_bgmfadestart[4 * 4];
			// ACE[hBGMØèÖ¦p
extern int		ace_bgmlist[3 * 4];
extern int		ace_bgmchange[2];

			// READY¨GOoÌíÞ@i0=HEBO 1=TIj
extern int		ready_go_style;

extern int		ti_ready_start;		// Êí readyJn
extern int		ti_ready_end;		// Êí readyI¹
extern int		ti_go_start;		// Êí goJn
extern int		ti_go_end;		// Êí goI¹

extern int		ti_s_ready_start;		// TOMOYO readyJn
extern int		ti_s_ready_end;		// TOMOYO readyI¹
extern int		ti_s_go_start;		// TOMOYO goJn
extern int		ti_s_go_end;			// TOMOYO goI¹

extern int		r_start[2];
extern int		r_end[2];
extern int		g_start[2];
extern int		g_end[2];

extern int		bk_D[2];		// D.R.Sp@ºüêÉæéÅèÔ
extern int		p_item_mode;
extern int		are_skipflag[2];

extern int		def_vs_goal;

extern int		hanabi_int[2];		//[ÌÔÎÅ¿ã°Ôu

extern int		isFreefall[2];	// t[tH[
extern int		Ff_rerise[2];	// ªÌÁãÄ¹èã°C
extern int		isLmovfield[2];	// ©MOV FIELD
extern int		isRmovfield[2];	// ¨MOV FIELD
extern int		do180field[2];	// 180tB[h

extern int		ofs_x[2];		// ªÌop
extern int		ofs_y[2];
extern int		ofs_x2[2];
extern int		ofs_y2[2];
extern int		stp_point[2];		//STv`il¾Ì½ßÌ|Cg

extern int		m_roll_blockframe ;	//©¦Á¦[ÅubNÌgð\¦iÁ¦Íêuj1ÅON
extern int		kickc3[2];

extern int		fldu[10 * 22 * 2];	// ¹èãªètB[hi¹èãªéubNÌ`óðL¯j
extern int		fldubuf[10 * 22 * 2];
extern int		upLines_waiting[2];
extern int		regretcancel[2];
extern int		def_vs_uplinetype;

extern int		devil_minus[2];

extern int		devil_randrise;	// DEVIL(DOOM)Ì¹èãªèÔuðZNV²ÆÌ_É·é 1=ON
extern int		devil_nextrise[2];

extern int		bgmload[20];	//wèµ½BGMðÇÝÞ©
extern int		exam_ranking;	//±ÌLOo^L³

extern int		novice_mode[2];		//novice[h
extern int		novice_flag[2];		//noviceÌACetO

extern int		FP_bonus[2];
extern int		FP_bonus_c[2];

extern int		FP_next[4];

extern int		disable_giji3D;	//ubNÌ§Ì\¦³øÝèi0=SÄ\¦@1=BIGÌTLSÌÝ³ø@2=TLSÌÝ³ø@3=tB[hãÌubNÌÝLø@4=SÄ³øj
extern int		alpha_tls;		//TLSð¼§¾É·é©i0=Ã¢s§¾@1=BIGÌÝÃ¢s§¾A¼Í¼§¾@2=¼§¾j
extern int		bo[2];
extern int		fastroll[2];		//¬X^bt[p
extern int		fpbas_mode[2];		//FPî{[hfpbas_mode

extern int		std_opt[2];		//STD[h
extern int		flds[10 * 22 * 2];		// XNEFAptB[hÌóÔ  x + y * 10 + pl * 210
extern int		fldsbuf[10 * 22 * 2];		// XNEFAptB[hÌóÔ  x + y * 10 + pl * 210

extern int		squaremode[2];			//lpp
extern int		itemhistory[2*5];		//ACeð
extern int		item_pro[50];		//ACeo»¦iinioÝèj
extern int		p_nextblock;		// ûKpcè
extern int		squarecnt[2];		//XNEFAJEg
extern int		ori_opt[2];			//I[hIvV
extern int		admit_grade[2];			//FèiÊ
extern int		grade_his[2*5];			//iÊð
extern int		grade_pasttime_game[2];		//±©çÇê¾¯oÁ½©H
extern int		scrate[2];				//ori[hpR{XRA[g
extern int		timelimitm_devil;	// devilm««è^C
extern int		timelimitm[2];			// »ÝÌdevilm««è^C

extern int		timelimitmw_devil;	// devilm««è^C//[h
extern int		timelimitmw[2];			// »ÝÌdevilm««è^C

extern int		item_num;		//ACeÌÂ	playerinitialÅú»ðs¤æ¤É·é±Æ

extern int medal_info;		//_ÉÖ·éîñð\¦ 0=µÈ¢ 1=·é
extern int timelimit_doom_E;	//devil-DOOMV«Øè^C-Easy(ACE-SRSAACE-ARSADS-World)
extern int timelimit_doom_N;	//						  -Normal(HeborisATi-WorldAACE-ARS2)
extern int timelimit_doom_H;	//						  -Hard(Ti-ARSAD.R.SASRS-X)

extern int dispLinfo;

extern int relaymode[2];
extern int first_rot[2];
extern int relaydata[9 * 2];
extern int relayround[2];

extern int vs_style[2];	// ÎíÌX^C@0=NORMAL@1=ATTACK@2=DEFENCE@3=ITEM
extern int item_inter[2];	// vC[ÌACeo»ÔuiX^CÅÔuªÏíé½ßj

extern int vs_round;	//½EhÚ©
extern int winpoint;	//ÆÈé|Cg
extern int vs_points[2];	//»ÝÌ|Cg
extern int misstimer[2];	//ACeuXJvpÌitem_t

extern int repdata[20 * 2];

extern int fade_seed;

extern int se_play[50];

			// C++pÝè
extern int cpp_texpow2;
extern int cpp_texdxt;
extern int cpp_texfilter;

			// ¶ñè
extern const str		version;
extern const str		RankString;

			/* è */
extern int		item_pronum;		//item_proÌv@Ê|¾©çè®ÅvZ
extern int		fldisno;
extern int		fldigsno;
extern int		fldihardno;

extern bool	loopFlag;
extern char	*string[STRING_MAX];


/* Functions */

extern int Admitgradecheck(int player);
extern void GiziSRand(int player);
extern void LevelUp(int player);
extern void LoadBackground(const char *nameStr, int p1, int p2);
extern void LoadGraphics(const char *nameStr, int p1, int p2);
extern void LoadTitle();
extern void UpLineBlock(int player);
extern void UpLineBlockJudge(int player);
extern int UpLineShirase(int player);
extern int abs_YGS2K(int i);
extern void backupSetups();
extern int blockBigEraseJudge(int player);
extern int blockEraseJudge(int player);
extern int blockEraseJudgeFf(int player,int mode);
extern void calcScore(int player, int lines);
extern void checkEnding(int player, int tcbuf);
extern int checkFieldTop(int player);
extern int checkFieldTop2(int player,int x);
extern int checkGameOver(int player);
extern void checkSecretGrade(int player);
extern int checkSquare(int player, int x, int y, int gold);
extern void doDemoMode(void);
extern int doGiveup();
extern void doHold(int player, int ihs);
extern void doIRS(int player);
extern void doIRS2(int player);
extern void doIRS2plus(int player);
extern void enterMissionMode(int player);
extern void enterPracticeMode(int player);
extern void enterSoloMode(int player);
extern void enterVersusMode(int player);
extern void eraseItem(int player, int type);
extern int fldMirrorProc(int player);
extern void gameAllInit(void);
extern void gameMain(void);
extern int getFieldBlock(int player, int bx1, int by1, int opt);
extern int getFieldBlock2(int player, int bx1, int by1);
extern int getFieldBlock3(int player, int bx1, int by1);
extern int getFieldBlockS(int player, int bx1, int by1);
extern int getModeAdd(int player);
extern int getPressState(int player, int key); // pbh{^èÄÎ #1.60c
extern int getPushState(int player, int key); // pbh{^èÄÎ #1.60c
extern void grayoutAllBlock(int player);
extern void grayoutLackedBlock(int player, int no);
extern void guidelineNextInit(int player);
extern void increment_time(int player);
extern void initialize(void);
extern int isComboMode(int player);
extern int isTLS(int player);
extern int isTSpin(int player);
extern int isWRule(int player);
extern int judgeBigBlock(int player, int bx1, int by1, int kind, int rotate);
extern int judgeBlock(int player, int bx1, int by1, int kind, int rotate);
extern void lastProc(void);
extern void loadBG(int players,int vsmode);
extern void loadBGM(void);
extern void loadGraphics(int players);
extern void loadWaves(void);
extern int makeSquare(int player);
extern void padRepeat(int player);
extern void padRepeat2(int player); // hoge ãºüÍo[W
extern void playerExecute(void);
extern void playerInitial(int player);
extern int rand_game(int max,int player);
extern void recFaultTime(int player);
extern void recSectionTime(int player);
extern void recStageTime(int player);
extern void removeBigBlock(int player, int bx1, int by1, int kind, int rotate);
extern void removeBlock(int player, int bx1, int by1, int kind, int rotate);
extern void restoreSetups();
extern void scanItem(int player);
extern void setBigBlock(int player, int bx1, int by1, int kind, int rotate);
extern void setBlock(int player, int bx1, int by1, int kind, int rotate);
extern void setBlockSpawnPosition(int player);
extern void setGameOver(int player);
extern void setNextBlockColors(int player, int first);
extern void setStartLevel(int pl); // eí¬xÝè[h (loadReplay©çàp) #1.60c3
extern void spriteTime();
extern void stat180field(int player);
extern void statBanana(int player);
extern void statBlock(int player);
extern void statBlockSutter(int player);
extern void statDelField(int player);
extern void statDelfromUpper(int player);
extern void statEnding(int player);
extern void statErase(int player);
extern void statEraseBlock(int player);
extern void statExamination(int player);
extern void statExchangefield(int player);
extern void statFreefall(int player);
extern void statGameOver(int player);
extern void statGameOver2(int player);
extern void statItemRulet(int player);
extern void statJoinwait(int player);
extern void statLaser(int player);
extern void statMove(int player);
extern void statMovfield(int player);
extern void statNameEntry(int player);
extern void statNegafield(int player);
extern void statNothing(int player);
extern void statReady(int player);
extern void statRelayselect(int player);
extern void statReplaySave(int player);
extern void statResult(int player);
extern void statSelectMode(int player);
extern void statSelectStandardSp(int player);
extern void statSelectStartLv(int player);
extern void statShotgun(int player);
extern void statVersusSelect(int player);
extern void statVersusWait(int player);
extern void statusClear(int player);
extern void testmenu(void);
extern void tgmNextInit(int player);
extern void title(void);
extern void versusInit(int player);
extern void winner();
extern void winner2();

extern void gameMain ( void );

#endif
