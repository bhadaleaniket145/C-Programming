#include<stdio.h>
int main()
{    
const float f = 3.14f;
const float  *const p = &f;

printf("%f\n",f);   
printf("%f\n", *p);

return 0;
}