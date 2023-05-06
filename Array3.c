#include<stdio.h>
int main()
{
    char arr[] = {'a','b','c','d'};
    char *p = arr;
    char *q = &(arr[0]);
    char *r = &(arr[3]);

    printf("%c\n",*p);   
    printf("%c\n",*q);
    printf("%c\n",*r);

    return 0;
}