#ifndef SPEED_H
#define SPEED_H

		//lðÏ¦éÍK¸repverswðXVµ»Ìt@CðcµÄu¢Ä­¾³¢
		// Beginner[hxAbve[u
extern int		lvTableBeg[101];

		// Ver39ÜÅÌBeginner[hxAbve[u
extern int		lvTableBeg39[101];

		// Heboris Master[hO¼xAbve[u
extern int		lvTable[31];

		// TGM Master[hO¼xAbve[u #1.60c3
extern int lvTableTgm[51];

		// ver20ÜÅ TGM Master[hO¼xAbve[u #1.60c3
extern int lvTableTgm20[51];
extern int		orimasterlvTable[31];

		// Beginner[húl
extern int	wait1_Beginner;		// Åè¨
extern int	wait2_Beginner;		// ubNÁ
extern int	wait3_Beginner;		// Ún¨Åè
extern int	waitt_Beginner;		// ¡­ß

		// Master[húl
extern int	wait1_master_half;		// Åè¨
extern int	wait2_master_half;		// ubNÁ
extern int	wait3_master_half ;		// Ún¨Åè
extern int	waitt_master_half ;		// ¡­ß

		// 20G[húl
extern int	wait1_20G_half ;		// Åè¨
extern int	wait2_20G_half ;		// ubNÁ
extern int	wait3_20G_half ;		// Ún¨Åè
extern int	waitt_20G_half ;		// ¡­ß

		// MasterE20G[hã¼xAbve[u
extern int		wait1_master_tbl[28];
extern int		wait2_master_tbl[28];
extern int		wait3_master_tbl[28];
extern int		waitt_master_tbl[28];

		// 53ÜÅÌMasterE20G[hã¼xAbve[u
extern int		wait1_master_tbl53[28];
extern int		wait2_master_tbl53[28];
extern int		wait3_master_tbl53[28];
extern int		waitt_master_tbl53[28];

		// 34ÜÅÌMasterE20G[hã¼xAbve[u
extern int		wait1_master_tbl34[28];
extern int		wait2_master_tbl34[28];
extern int		wait3_master_tbl34[28];
extern int		waitt_master_tbl34[28];

		// 28ÜÅMasterE20G[hã¼xAbve[u
extern int		wait1_master_tbl28[28];
extern int		wait2_master_tbl28[28];
extern int		wait3_master_tbl28[28];
extern int		waitt_master_tbl28[28];

		// Devil-DOOM[hxAbve[u
extern int		wait1_doom_tbl[14];
extern int		wait2_doom_tbl[14];
extern int		wait3_doom_tbl[14];
extern int		waitt_doom_tbl[14];
		// Ver61ÈOÌxAbve[u
extern int		wait1_doom_tbl61[14];
extern int		wait2_doom_tbl61[14];
extern int		wait3_doom_tbl61[14];
extern int		waitt_doom_tbl61[14];

		// Ver59ÈOÌxAbve[u  ¬xðSHIRASEÉ@C7U1.7
extern int		wait1_devil_tbl[14];
extern int		wait2_devil_tbl[14];
extern int		wait3_devil_tbl[14];
extern int		waitt_devil_tbl[14];

		// DEVIL[h¹èãªè(devil_randrise = 1 Ì)p
extern int		devil_rise_min[14];
extern int		devil_rise_max[14] ;

		// ver32ÈOÌDevil[hxAbve[u
extern int		wait1_devil_tbl32[14];
extern int		wait2_devil_tbl32[14];
extern int		wait3_devil_tbl32[14];
extern int		waitt_devil_tbl32[14];

		// ver17ÈOÌDevil[hxAbve[u
extern int		wait1_devil_tbl17[14];
extern int		wait2_devil_tbl17[14];
extern int		wait3_devil_tbl17[14];
extern int		waitt_devil_tbl17[14];

		// ver18ÌDevil[hxAbve[u
extern int		wait1_devil_tbl18[14];
extern int		wait2_devil_tbl18[14];
extern int		wait3_devil_tbl18[14];
extern int		waitt_devil_tbl18[14];

		// Devil}CiX[hxAbve[u
extern int		wait1_devil_m_tbl[14];
extern int		wait2_devil_m_tbl[14];
extern int		wait3_devil_m_tbl[14];
extern int		waitt_devil_m_tbl[14];

extern int		wait1_orimaster_tbl[11];
extern int		wait2_orimaster_tbl[11];
extern int		wait3_orimaster_tbl[11];
extern int		waitt_orimaster_tbl[11];

extern int		wait1_oridevil_tbl[11];
extern int		wait2_oridevil_tbl[11];
extern int		wait3_oridevil_tbl[11];
extern int		waitt_oridevil_tbl[11];


		// Beginner[h[p(TIME TRIAL, Level 200)
extern int	speed_beginner_roll ;	// º¬x(1200 = 20G)
extern int	wait1_beginner_roll ;	// Åè¨
extern int	wait2_beginner_roll ;	// ubNÁ
extern int	wait3_beginner_roll ;	// Ún¨Åè
extern int	waitt_beginner_roll ;	// ¡­ß

		//MasterE20G[h[p(TIME TRIAL, Level 999)
extern int	speed_master_roll ;	// º¬x(1200 = 20G)

		// iÊ4ÝèÌMASTER&20G[
extern int	wait1_master_rollG4 ;	// Åè¨
extern int	wait2_master_rollG4 ;	// ubNÁ
extern int	wait3_master_rollG4 ;	// Ún¨Åè
extern int	waitt_master_rollG4;	// ¡­ß

		// iÊ2E3ÝèÌMASTER&20G[
extern int	wait1_master_roll ;		// Åè¨
extern int	wait2_master_roll ;		// ubNÁ
extern int	wait3_master_roll;		// Ún¨Åè
extern int	waitt_master_roll ;		// ¡­ß

		// Ver38ÈOÌMASTER&20G[
extern int	wait1_master_roll38;	// Åè¨
extern int	wait2_master_roll38;	// ubNÁ
extern int	wait3_master_roll38;	// Ún¨Åè
extern int	waitt_master_roll38;	// ¡­ß

		// DEVIL[h[p(TIME TRIAL, Level 1300)
extern int	speed_devil_roll;	// º¬x(1200 = 20G)

extern int	wait1_devil_roll;		// Åè¨
extern int	wait2_devil_roll;		// ubNÁ
extern int	wait3_devil_roll;		// Ún¨Åè
extern int	waitt_devil_roll;		// ¡­ß

		// Ver56ÈOÌDEVIL[
extern int	wait1_devil_roll56;		// Åè¨
extern int	wait2_devil_roll56;		// ubNÁ
extern int	wait3_devil_roll56;	// Ún¨Åè
extern int	waitt_devil_roll56;		// ¡­ß

		// Ver38ÈOÌDEVIL[
extern int	wait1_devil_roll38;		// Åè¨
extern int	wait2_devil_roll38;		// ubNÁ
extern int	wait3_devil_roll38;	// Ún¨Åè
extern int	waitt_devil_roll38;		// ¡­ß

		// Ver17ÈOÌDEVIL[
extern int	wait1_devil_roll17;		// Åè¨
extern int	wait2_devil_roll17;		// ubNÁ
extern int	wait3_devil_roll17;	// Ún¨Åè
extern int	waitt_devil_roll17;		// ¡­ß


		// xh~[hp
extern int	speed_limit15;		// º¬x(1200 = 20G)
extern int	wait1_limit15;			// Åè¨
extern int	wait2_limit15;			// ubNÁ
extern int	wait3_limit15;			// Ún¨Åè

		// TOMOYO[hxAbve[u #1.60c7m1
extern int lvTabletomoyo[31];

		// Ver25æèOÌTOMOYO[hxAbve[u #1.60c7m1
extern int lvTabletomoyo24[31];
		// TOMOYO[hxAbve[u #1.60c7u6
extern int lvTabletomoyohebo[20];

		// Ver26ÈOÌTOMOYO[hWAITl #1.60c7m1
extern int	wait1_tomoyo26 ;		// Åè¨
extern int	wait2_tomoyo26 ;		// ubNÁ
extern int	wait3_tomoyo26 ;		// Ún¨Åè
extern int	waitt_tomoyo26 ;		// ¡­ß

		// TOMOYO[hWAITl
extern int	wait1_tomoyo ;		// Åè¨
extern int	wait2_tomoyo ;		// ubNÁ
extern int	wait3_tomoyo ;		// Ún¨Åè
extern int	waitt_tomoyo ;		// ¡­ß

		// VERSUS[h #1.60c7p5
extern int	speed_versus ;		// º¬x(1200 = 20G)
extern int	wait1_versus ;		// Åè¨
extern int	wait2_versus ;		// ubNÁ
extern int	wait3_versus ;		// Ún¨Åè
extern int	waitt_versus ;		// ¡­ß

		// ACE[hxAbve[u
extern int		lvTableAce[15];
		// Ver55ÈOÌACExAbve[u
extern int		lvTableAce55[15];

		// ACEAiU[[hxAbve[u
extern int		lvTableAcea[15];

		// ACE[h§ÀÔ
extern int		timeLimitAce[15];
		// ACEAiU[[h§ÀÔ
extern int		timeLimitAcea[15];
		// ACEw[h§ÀÔ
extern int		timeLimitAcea2[20];

		// ACE[hWAITl
extern int	wait1_Ace;		// Åè¨
extern int	wait2_Ace;		// ubNÁ
extern int	wait3_Ace;		// Ún¨Åè
extern int	waitt_Ace;		// ¡­ß

		// ACEAiU[[hxAbve[u
extern int		wait1_Acea_tbl[15];
extern int		wait2_Acea_tbl[15];
extern int		wait3_Acea_tbl[15];
extern int		waitt_Acea_tbl[15];

		// 35ÈOÌACEAiU[[hxAbve[u
extern int		wait1_Acea_tbl35[15];
extern int		wait2_Acea_tbl35[15];
extern int		wait3_Acea_tbl35[15];
extern int		waitt_Acea_tbl35[15];

		// nCXs[hPxAbve[u
extern int		lvTableHiSpeed1[15];
extern int	wait1_HiSpeed1;		// Åè¨
extern int	wait2_HiSpeed1;		// ubNÁ
extern int	wait3_HiSpeed1;		// Ún¨Åè
extern int	waitt_HiSpeed1;		// ¡­ß

		// nCXs[hQxAbve[u
extern int	wait1_HiSpeed2;	// Åè¨
extern int	wait2_HiSpeed2 ;		// ubNÁ
extern int	wait3_HiSpeed2;		// Ún¨Åè
extern int	waitt_HiSpeed2 ;		// ¡­ß

		// I[hX^CxAbve[u
extern int		lvTableHeboGB[15];
extern int	wait1_HeboGB;
extern int	wait2_HeboGB;
extern int		wait3_HeboGB_tbl[15];
extern int		waitt_HeboGB_tbl[15];

#endif
