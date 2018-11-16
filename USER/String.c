#include"String.h"
Size_t Strlen(U8* s1)
{
	Size_t temp=0;
	while(*s1++)
		temp++;
	return temp;
}
U8* Strcpy(U8* s1,U8* s2)
{
	U8* bak=s1;
	while((*s1++)=(*s2++));
	return bak;
}
U8* Strcat(U8* s1,U8* s2)
{
	U8* bak=s1;
	while(*s1)
		s1++;
	Strcpy(s1,s2);
	return bak;
}
I8 Strcmp(U8* s1,U8* s2)
{
	while(*s1==*s2)
	{
		if(*s1=='\0')
			return 0;
		s1++;
		s2++;
	}
	return (*s1>*s2)?1:-1;
}
U8* Strchr(U8* s1,U8 c1)
{
	while(*s1)
	{
		if(*s1==c1)
			return s1;
		else
			s1++;
	}
	return (U8*)0;
}
U8* Strstr(U8* s1,U8* s2)
{
	Size_t n=(Strlen(s1)-Strlen(s2)+1);
	for(Size_t i=0;i<n;i++)
	{
		if(*(s1+i)==*s2)
		{
			if(Strcmp(s1+i,s2)>=0)
				return s1+i;
		}
	}
	return (U8*)0;
}
