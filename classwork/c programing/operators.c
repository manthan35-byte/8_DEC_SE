pro 1:
//example of arithmatic operators
#include<stdio.h>
void main()
{
int a,b;
a=10;
b=5; 

printf("%d + %d =%d",a,b,a+b);
printf(" \n%d - %d =%d",a,b,a-b);
printf(" \n%d * %d =%d",a,b,a*b);
printf(" \n%d / %d =%d",a,b,a/b);
printf(" \n%d %% %d =%d",a,b,a%b);
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 2:
// example of relational operators 
#include<stdio.h>
void main()
{
int num1,num2;
num1=20;
num2=35;

int result=num1>num2;
printf("%d",result);

result=num1<num2;
printf("\n%d",result);

result=num1==num2;
printf("\n%d",result);

result=num1!=num2;
printf("\n%d",result);
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 3:
//example of logical operator
#include<stdio.h>
void main()
{
int num1,num2,num3;
num1=20;
num2=35;
num3=40;

int result=(num1>num2) && (num2>num1);
printf("%d",result);

result=(num3>num2) && (num2>num1);
printf("\n%d",result);

result=(num3>num2) || (num2<num1);
printf("\n%d",result);
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 4:
//example of increment operator
#include<stdio.h>
void main()
{
int x=10;
//postfix
printf("x=%d",x);
printf("\nx++=%d",++x);//example of postfix
//prifix
printf("\nx=%d",x);
printf("\n++x=%d",++x);//example of prefix
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 5:
//example of dencrement operator
#include<stdio.h>
void main()
{
int x=10;
printf("x=%d",x);
printf("\nx--=%d",x--);//example of postfix
printf("\nx=%d",x);
printf("\n--x=%d",--x);//example of prefix
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 6:
//ex of conditional operator
#include<stdio.h>
void main()
{
int num1,num2;
num1=20;
num2=40;
//        exp1         exp2   exp3
int max= (num1>num2) ? num1 : num2;
printf("\nmax=%d",max);
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 8:
