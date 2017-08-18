<<<<<<< HEAD
#include<stdio.h>
int main()
{
int a;
printf("Enter the number:"):
scanf("%d",&a);
if((a%2)==0)
printf("The entered number is even");
else
printf("The entered number is odd");
return 0;
}
=======
#include<stdio.h>
int main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if((a%2)==0)
printf("The entered number is even");
else if((a%2)!=0)
printf("The entered number is odd");
else
printf("Invalid");
return 0;
}
>>>>>>> 68f45a32fcc139d53d26f4519655fc684bc557fa
