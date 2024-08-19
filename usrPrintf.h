#ifndef USR_PRINTF_H_
#define USR_PRINTF_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
// #ifndef __YUKKSJF_
// #define __YUKKSJF_
// // typedef char *va_list;
// #endif                /* _VALIST */
// typedef int acpi_native_int;
// #define  _AUPBND                (sizeof (acpi_native_int) - 1)                               // 入栈4字节对齐
// #define  _ADNBND                (sizeof (acpi_native_int) - 1)                               // 出栈4字节对齐
// #define _bnd(X, bnd)            (((sizeof (X)) + (bnd)) & (~(bnd)))                          // 4字节对齐
// #define va_arg(ap, T)           (*(T *)(((ap) += (_bnd (T, _AUPBND))) - (_bnd (T,_ADNBND)))) // 按照4字节对齐取下一个可变参数,并且更新参数指针
// #define va_end(ap)              (void) 0                                                     // 与va_start成对,避免有些编译器告警
// #define va_start(ap, A)         (void) ((ap) = (((char *) &(A)) + (_bnd (A,_AUPBND))))       // 第一个可变形参指针
#define BUFF_LENGTH 1024

void logPrint(const char *fileName, const char *funcName, const int lineNum,const char *fmt, ...);
int usr_print(const char *fmt, ...);
#define LOG_PRINT(...) \
         logPrint(__FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)
#endif
