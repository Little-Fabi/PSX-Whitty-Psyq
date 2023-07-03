#ifndef PSXF_GUARD_AUDIO_H
#define PSXF_GUARD_AUDIO_H

#include "psx/psx.h"

//XA enumerations
typedef enum
{
	XA_Menu,   //MENU.XA
	
	XA_1, //1.XA
	XA_2, //2.XA
	XA_3, //3.XA
	XA_4, //4.XA
	XA_5, //5.XA
	XA_6, //6.XA
	XA_7, //7.XA
	XA_8, //8.XA
	XA_9, //9.XA
	
	XA_Max,
} XA_File;

typedef enum
{
	//MENU.XA
	XA_GettinFreaky, //Gettin' Freaky
	XA_GameOver,     //Game Over
    //1.XA
    XA_LoFight,
    XA_Overhead,
    //2.XA
    XA_Ballistic,
    XA_BallisticRemix,
	//3.XA
	XA_Underground,
	XA_LowRise,
	//4.XA
	XA_Hungry,
	XA_LoFightHQ,
	//5.XA
	XA_OverheadHQ,
	XA_BallisticHQ,
	//6.XA
	XA_BallisticBetaMix,
	XA_UndergroundHQ,
	//7.XA
	XA_UndergroundInGameMix,
	XA_LowRiseHQ,
	//8.XA
	XA_HungryHQ,
	XA_Faucet,
	//9.XA
	XA_FaucetHQ,
	
	XA_TrackMax,
} XA_Track;

//Audio functions
u32 Audio_GetLength(XA_Track lengthtrack);
void Audio_Init(void);
void Audio_Quit(void);
void Audio_Reset(void);
void Audio_PlayXA_Track(XA_Track track, u8 volume, u8 channel, boolean loop);
void Audio_SeekXA_Track(XA_Track track);
void Audio_PauseXA(void);
void Audio_ResumeXA(void);
void Audio_StopXA(void);
void Audio_ChannelXA(u8 channel);
s32 Audio_TellXA_Sector(void);
s32 Audio_TellXA_Milli(void);
boolean Audio_PlayingXA(void);
void Audio_WaitPlayXA(void);
void Audio_ProcessXA(void);
void findFreeChannel(void);
u32 Audio_LoadVAGData(u32 *sound, u32 sound_size);
void AudioPlayVAG(int channel, u32 addr);
void Audio_PlaySoundOnChannel(u32 addr, u32 channel, int volume);
void Audio_PlaySound(u32 addr, int volume);
u32 VAG_IsPlaying(u32 channel);
void Audio_ClearAlloc(void);

#endif
