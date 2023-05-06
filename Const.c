#include<stdio.h>
int main()
{    
const int no =11;
int const  *const p = &no;

printf("%d\n",no);   
printf("%d\n",p);

return 0;
}