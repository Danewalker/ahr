///////////////////////////////////////// 		 
//                                     //		 
//           MAKE SOUNDS               //		 
//                                     //		 
//    Do not change, current file      //		 
//  Was generated by 'MakeSounds.bat'  //		 
//                                     //		 
/////////////////////////////////////////		 
												 
												 
#ifndef __SoundsTable__								 
#define __SoundsTable__								 
												 
												 
enum											 
{												 
SOUND_BULLET, // 1							  	
SOUND_DIE, // 2							  	
NUM_SOUNDS 								 
};												 
												 
												 
#define SOUND_BULLET "bullet.wav"		  								
#define SOUND_DIE "die.wav"		  								
		  								 		 		
enum											 
{												 
MUSIC_GAME, // 1							  	
MUSIC_TITLE, // 2							  	
NUM_MUSICS 								 
};												
		  										
#define MUSIC_GAME "game.mp3"		  								  	
#define MUSIC_TITLE "title.mp3"		  								  	

extern const char * const MUSIC_FILE[];					 
extern const char * const SOUND_FILE[];					 
												 
												 
#endif // __SoundsTable__					 
