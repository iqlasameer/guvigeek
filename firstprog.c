#include<stdio.h>
int main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a>0)
printf("The entered number is positive");
else if(a<0)
printf("The entered number is negative");
else if(a==0)
printf("The entered number is zero");
return 0;
}
