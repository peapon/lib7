// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LIB7_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LIB7_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#ifndef __LIB7_H_
#define __LIB7_H_

#include "Pointers.h"
#define LIB7_EXPORTS

#ifdef LIB7_EXPORTS
#define LIB7_API __declspec(dllexport)
#else
#define LIB7_API __declspec(dllimport)
#endif

#endif