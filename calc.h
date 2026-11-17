#ifndef _CALC_H
#define _CALC_H
void calc(int a, char c, int b, int *sum, int *r);
#endif

/*
compile:
cd "c:\Users\Ndrs\vscode\csi\test\" ; if ($?) { clang -Wall calc-main.c calc-calc.c -o calc-main } ; if ($?) { .\calc-main }
*/