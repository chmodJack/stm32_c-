#ifndef __CONFIG_H__
#define __CONFIG_H__

typedef char I8;
typedef short I16;
//typedef long I32;
typedef int I32;
typedef long long I64;

typedef unsigned char U8;
typedef unsigned short U16;
//typedef unsigned long U32;
typedef unsigned int U32;
typedef unsigned long long U64;

typedef volatile unsigned char VU8;
typedef volatile unsigned short VU16;
//typedef volatile unsigned long VU32;
typedef volatile unsigned int VU32;
typedef volatile unsigned long long VU64;

typedef unsigned int Size_t;

#define SIZE_ARR(x) ((sizeof(x))/(sizeof(x[0])))

#endif//__CONFIG_H__
