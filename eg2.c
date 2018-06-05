// to extract ith bit of a number
#include <stdio.h>
int main()
{
int n,i;
scanf("%d%d", &n,&i);
printf("n=%d\n ",n);
printf("i=%d\t ", i);

printf("%d th position value = %d\n",i, (n >> i) & 1);
}

