//to set ith bit of the number to 1
#include <stdio.h>
int main()
{
int n,i,a;
scanf("%d%d", &n,&i);
printf("n=%d\n ",n);
printf("i=%d\t ", i);
a= 1 << i;
printf("a=%d",a);
printf("new number=%d", n & ~a);
}

