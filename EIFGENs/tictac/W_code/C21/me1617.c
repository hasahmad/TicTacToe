/*
 * Code for class MESSAGE_STATUS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1617_16346(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16347(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16348(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16349(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16350(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16351(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16352(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16353(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16354(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16355(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16356(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16365(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16402(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1617_16403(EIF_REFERENCE);
extern void F1617_16357(EIF_REFERENCE);
extern void F1617_16404(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1617_16405(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1617_16406(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1617_16578(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1617(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MESSAGE_STATUS}.make */
void F1617_16346 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1616, Current, 0, 0, 22295);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1616, Current, 22295);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11907, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11897, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11944, 0xF80000E7, 0); /* status_right */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11944, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {MESSAGE_STATUS}.msg_ok */
EIF_TYPED_VALUE F1617_16347 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11897,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_name_same */
EIF_TYPED_VALUE F1617_16348 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11898,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_name_start */
EIF_TYPED_VALUE F1617_16349 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11899,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_invalid_turn */
EIF_TYPED_VALUE F1617_16350 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11900,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_invalid_player */
EIF_TYPED_VALUE F1617_16351 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11901,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_btn_taken */
EIF_TYPED_VALUE F1617_16352 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11902,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_winner */
EIF_TYPED_VALUE F1617_16353 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11903,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_finish_game */
EIF_TYPED_VALUE F1617_16354 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11904,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_game_finished */
EIF_TYPED_VALUE F1617_16355 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11905,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.err_game_tie */
EIF_TYPED_VALUE F1617_16356 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11906,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.msg_new_game */
EIF_TYPED_VALUE F1617_16365 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11915,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.msg_play_again_start_new */
EIF_TYPED_VALUE F1617_16366 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11916,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.status */
EIF_TYPED_VALUE F1617_16402 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11943,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.status_right */
EIF_TYPED_VALUE F1617_16403 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11944,Dtype(Current)));
	return r;
}


/* {MESSAGE_STATUS}.init_msgs */
void F1617_16357 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "init_msgs";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1616, Current, 0, 0, 22306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1616, Current, 22306);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11897, 0xF80000E7, 0); /* msg_ok */
	tr1 = RTMS_EX_H("ok",2,28523);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11897, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11898, 0xF80000E7, 0); /* err_name_same */
	tr1 = RTMS_EX_H("names of players must be different",34,1941906292);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11898, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11899, 0xF80000E7, 0); /* err_name_start */
	tr1 = RTMS_EX_H("name must start with A-Z or a-z",31,1801695610);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11899, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11900, 0xF80000E7, 0); /* err_invalid_turn */
	tr1 = RTMS_EX_H("not this player\'s turn",22,1755299182);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11900, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11901, 0xF80000E7, 0); /* err_invalid_player */
	tr1 = RTMS_EX_H("no such player",14,463366258);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11901, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11902, 0xF80000E7, 0); /* err_btn_taken */
	tr1 = RTMS_EX_H("button already taken",20,1758592622);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11902, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11903, 0xF80000E7, 0); /* err_winner */
	tr1 = RTMS_EX_H("there is a winner",17,531042418);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11903, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11904, 0xF80000E7, 0); /* err_finish_game */
	tr1 = RTMS_EX_H("finish this game first",22,344522100);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11904, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 11905, 0xF80000E7, 0); /* err_game_finished */
	tr1 = RTMS_EX_H("game is finished",16,1855160164);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11905, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 11906, 0xF80000E7, 0); /* err_game_tie */
	tr1 = RTMS_EX_H("game ended in a tie",19,1256181605);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11906, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 11915, 0xF80000E7, 0); /* msg_new_game */
	tr1 = RTMS_EX_H("start new game",14,636804197);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11915, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 11916, 0xF80000E7, 0); /* msg_play_again_start_new */
	tr1 = RTMS_EX_H("play again or start new game",28,1466391397);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11916, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {MESSAGE_STATUS}.set_status */
void F1617_16404 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_status";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1616, Current, 0, 1, 22317);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1616, Current, 22317);
	RTCC(arg1, 1616, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 11943, 0xF80000E7, 0); /* status */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(11943, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MESSAGE_STATUS}.set_status_right */
void F1617_16405 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_status_right";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1616, Current, 0, 1, 22318);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1616, Current, 22318);
	RTCC(arg1, 1616, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 11944, 0xF80000E7, 0); /* status_right */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(11944, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MESSAGE_STATUS}.update_status */
void F1617_16406 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_status";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1616, Current, 0, 1, 22319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1616, Current, 22319);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0L:
			RTHOOK(2);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11897, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 1L:
			RTHOOK(3);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11898, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 2L:
			RTHOOK(4);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11899, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 3L:
			RTHOOK(5);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11900, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 4L:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 5L:
			RTHOOK(7);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11902, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 6L:
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11903, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 7L:
			RTHOOK(9);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11904, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 8L:
			RTHOOK(10);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11905, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 9L:
			RTHOOK(11);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11906, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 10L:
			RTHOOK(12);
			RTDBGAA(Current, dtype, 11944, 0xF80000E7, 0); /* status_right */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11944, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAA(Current, dtype, 11944, 0xF80000E7, 0); /* status_right */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11916, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11944, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
		default:
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11943, 0xF80000E7, 0); /* status */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11897, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11943, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {MESSAGE_STATUS}.update_plays_next */
void F1617_16578 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_plays_next";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1616, Current, 0, 1, 22422);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1616, Current, 22422);
	RTCC(arg1, 1616, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 11944, 0xF80000E7, 0); /* status_right */
	tr1 = RTMS_EX_H(" plays next",11,1950824820);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4634, "plus", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11944, Dtype(Current))) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

void EIF_Minit1617 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
