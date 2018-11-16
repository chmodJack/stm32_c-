#ifndef __STRING_H__
#define __STRING_H__

#ifdef __cplusplus
 extern "C" {
#endif 

#include"Config.h"

extern Size_t Strlen(U8* s1);
extern U8* Strcpy(U8* s1,U8* s2);
extern U8* Strcat(U8* s1,U8* s2);
extern I8  Strcmp(U8* s1,U8* s2);
extern U8* Strchr(U8* s1,U8 c1);
extern U8* Strstr(U8* s1,U8* s2);

#ifdef __cplusplus
}
#endif 
	 
#endif//__STRING_H__
