#include<stdio.h>
int main()
{
int i,n;
long fact=1;
printf("enter the number to find the factorial of a number");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial=%d",fact);
return 0;
}
