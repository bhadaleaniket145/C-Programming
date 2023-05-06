#include<stdio.h>

#include "ppa.h.c"
int main()
{
   struct Demo obj;

    printf("Inside main\n");

    printf("Rate of intrest is %f\n", ROI);

    printf("Fees of logic Building batch : %d\n", FEES);

    printf("Size of demo structure : %d\n", sizeof(obj));


    return 0;
}