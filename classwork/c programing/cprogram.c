pro  1 :
//first program of c language
#include <stdio.h>

int main()
{
    printf("Hello, welcome to my first program");
    return 0;
}

====================================================================
pro 2 :
//variable declaration,initlizatoin,calling example 
#include<stdio.h>
 void main()
{

    int num;//step 1 : variable declaration
    num = 10;   //step 2 : variable initlizatoin
    printf("num=%d",num);//step 3 : variable calling 
    printf("\n%d+%d=%d",num,num,num+num);
    
}
====================================================================
pro 3 :

#include <stdio.h>
void main()
{

    int num;//variable declaration   
    printf("enter a number : ");
    scanf("%d",&num);
    printf("number =%d",num);

}
====================================================================
pro 4 :

#include<stdio.h>
void main()

{
    int num1;
    int num2;
    int num3; 
    
    printf("enter a number :");
    scanf("%d",&num1);
    
    printf("enter a number :");
    scanf("%d",&num2);
    
    printf("enter a number :");
    scanf("%d",&num3);
      
    printf(" \n %d",num1+num2+num3);

}
====================================================================
pro 5:
#include<stdio.h>
void main()
{
  float marks;
  printf("enter your marks");
  scanf("%f",&marks);

  printf("\n your marks =%f",marks);
}

======================================================================
pro 6:

// accept book price from user and display on console screen
#include<stdio.h>
void main()

{
float book_price;

printf("enter book price : ");
scanf("%f",&book_price);

printf("\n book price = %.2f",book_price);

}
========================================================================
pro 7:

#include<stdio.h>
void main()
{

int a,b;

a=10;
b=5; 
printf("\n a=%d,b=%d",a,b);
a +=b;

printf("\na=%d,b=%d",a,b);

}

========================================================================
pro 8:
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

=====================================================================
pro 10:
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
=================================================================
pro 11:
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
=============================================================================
pro 12:
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
====================================================================
pro 13:
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
=============================================================================
pro 14:
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
==================================================================================
pro 15:
//enter number from user and cheak number is even or odd
#include<stdio.h>
void main()
{
//true means even
int num1;
printf("enter a number :");
scanf("%d",&num1);
printf("%d",num1%2==0);
}
=====================================================================================
pro 16:
//swap 2 number
#include<stdio.h>
void main()
{
    int a,b,c;
    a=10;
    b=20;
    
    printf("a=%d",a);
    printf("\nb=%d",b);
    
    c=a;
    a=b;
    b=c;
    printf("\na=%d",a);
    printf("\nb=%d",b);
}
=================================================================================================
pro 17:
//find even and odd number
#include<stdio.h>
void main()
{
   int num;
   printf("enter a number");
   scanf("%d",&num);
  if(num>0)
  {
    printf("\n %d num is positive",num);  
  }
  else
  {
    printf("\n %d num is negetive",num);  
  }
}
=====================================================================================================
pro 18:
/*
operator presidensy:::
()  []
*  / % (left to right)
+  -   (left to right)
*/
#include<stdio.h>
void main()
{
  int a=10;
  int b=5;
  int c=3;

  int ans=a+b-c;
  printf("\n ans=%d",ans);
   
  ans=a-b+c;
  printf("\n ans=%d",ans);

}
========================================================================================================
pro 19:
//use of else if statement
#include<stdio.h>
void main()
{
int marks;
printf("enter your marks:");
scanf("%d",&marks);

if(marks<=100 && marks>=70)
{
    printf("a grade");
}
else if(marks>=60 && marks<70)
{
    printf("b grade");
}
else if(marks>=50 && marks<60)
{
    printf("c grade");
}
else if(marks>=40 && marks<50)
{
    printf("d grade");
}
else if(marks>=30 && marks<40)
{
    printf("e grade");
}
else 
{
    printf("fail");
}
}
==============================================================
pro 20:
//example of nested if else
#include<stdio.h>
void main()
{
int marks;
printf("enter your value:");
scanf("%d",&marks);
if (marks >=0 && marks<=100)
{
     if( marks>=70)
    {
        printf("a grade");
    }
    else if(marks>=60 && marks<70)
    {
        printf("a grade");
    }
    else if(marks>=50 && marks<60)
    {
        printf("b grade");
    }
    else if(marks>=40 && marks<50)
    {
        printf("c grade");
    }
    else if(marks>=30 && marks<40)
    {
        printf("d grade");
    }
    else 
    {
        printf("fail");
    }
}
else
{
    printf("invaid marks");
}
}
=================================================
pro 21:
#include<stdio.h>
void main()
{
int num1,num2;

printf("enter a number 1:");
scanf("%d",&num1);

printf("enter a number 2:");
scanf("%d",&num2);

if (num1>num2)
{
    printf("num1= %d is grater",num1);
}
else 
{
   printf("num2= %d is grater",num2);
} 

}
===================================================
pro 22:
//example of nested if else
#include<stdio.h>
void main()
{
int num1,num2,num3;

printf("enter a number 1:");
scanf("%d",&num1);

printf("enter a number 2:");
scanf("%d",&num2);

printf("enter a number 3:");
scanf("%d",&num3);

if(num1>num2)
{
    if(num1>num3)
    {
        printf("\nnum1 is greater");
    }
    else 
    {
        printf("\nnum3 is greater");
    }
}
else
{
    if(num2>num3)
    {
        printf("\nnum2 is grater");
    }
    else
    {
        printf("\nnum3 is grater");
    }
}
}
=====================================================================
pro 23:
#include<stdio.h>
void main()
{
int day;
printf("enter a day:");
scanf("%d",&day);

switch(day)
{
    case 1:
    printf("monday");
    break;
    
    case 2:
    printf("tuesday");
    break;
    
    case 3:
    printf("wednesday");
    break;
    
    default:
    printf("invalid day");
}
}
===============================================================================
pro 24:
#include<stdio.h>
void main()
{
char char_value;
printf("enter a char:");
scanf("%c",&char_value);

switch(char_value)
{
    case 'a':
    case 'e':
    case 'o':
    case 'i':
    case 'u':
    printf("a vowel");
    break;
    
    default:
    printf("not a vowel");
}
}
===========================================================================
pro 25:
#include<stdio.h>
void main()
{
	
char char_value;
printf("enter a char:");
scanf("%c",&char_value);

switch(char_value)
{
    case 'a':
    case 'e':
    case 'o':
    case 'i':
    case 'u':
    printf("a vowel");
    break;
    
    default:
    printf("not a vowel");
}

}
============================================================================
pro 26:
#include<stdio.h>
void main()
{
    int i;
    int a,b,ans;
    printf("enter a starting number:");
    scanf("%d",&a);
    
    printf("enter a ending number");
    scanf("%d",&b);
    
    for(i=a;i<=b;i++)
    {
        printf("\n %d",i);
    }
}
==================================================================================
pro 27:
#include<stdio.h>
void main()
{

    int i;
    int n;
    
    
    for(i=1;i<=5;i++)
    {
        printf("enter a number:");
        scanf("%d",&n);
    }
}
=================================================================================
pro 28:
#include<stdio.h>
void main()
{
    int i;
    char char_c;
    
    for(i=1;i<=7;i++)
    {
        printf(" \n enter a character %d :",i);
        scanf("%c",&char_c);
        getchar();
    }
}
==================================================================
pro 29:
#include<stdio.h>
void main()
{
    int i;
    
    i=1;
    while(i<=5)
    {
        printf("\t %d",i);
        i++;
    }
}
===============================================================================
pro 30:
#include<stdio.h>
#include<stdbool.h>
void main()
{
bool flag=true;
int num;

char choice;
while(flag)
{
    printf("enter a number :");
    scanf("%d",&num);
    
    printf("do you want to continue press 'y' for yes press 'n' for no :");
    scanf(" %c",&choice);
    
    {
        if(choice=='y')
        {
            flag = true;
        
        }
        else
        {
            flag = false;
        }
    }
}
}
============================================================================
pro 31:
#include<stdio.h>
#include<stdbool.h>
void main()
{

int num;
int sum=0;
char choice;
bool status=true;

while(status)
{
    printf("enter a number : ");
    scanf("%d",&num);
    
    printf("do you want to continue press y for yes : ");
    scanf(" %c",&choice);
    
    if(choice=='n')
    {
        status=false;
    }
    sum+=num;
}
printf("\n total %d",sum);
}
==================================================
pro 32:
#include<stdio.h>
#include<stdbool.h>
void main()
{
    int f=1;
    int i;
    int num;
    
    printf("enter a number :");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        f *=i;
    }
    printf("\n factorial = %d",f);
}
==================================================
pro 33:
//nested for loop
#include <stdio.h>
int main()
{
  int row;
  int col;
  
  for(row=1;row<=5;row++)
  {
      printf(" \n %d",row);
      for(col=1;col<=3;col++)
      {
          printf("#");
      }
  }
}
==============================================
pro 34:
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<30;i++)
    {
        if(i==25)
        {
            break;
        }
        if(i%2==0)
        {
      printf(" \n %d ",i);
    }
    }
}
===============================================
pro 35:
#include<stdio.h>
int main()
{
    int choice=3;
    do{
        printf("1.withdraw \n");
        printf("2.cheak balaence \n");
        printf("3.exit");
        printf("choose an option ");
        scanf("%d",&choice);
    }
    while(choice<3 && choice>0);
}
==================================================
pro 36:
#include <stdio.h>

int main()
{
    int choice = 0;

    while(choice != 3)
    {
        printf("Enter a number : ");
        scanf("%d", &choice);

        printf("%d\n", choice);
    }

    return 0;
}
===================================================================
pro 37:
#include <stdio.h>

int main()
{
    int row,col;
    for(row=1;row<5;row++)
    {
     for(col=1;col<=row;col++)
     {
         printf("*");
     }
     printf("\n");
    }
    for(row=5;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
========================================================================
pro 38:
#include <stdio.h>

int main()
{
    int i=6;
    do
    {
        printf("\n %d",i);
        i++;
    }while(i<=5);
    
}
==========================================================================
pro 39:
#include<stdio.h>
//step 1 : function declaration

void myfun();//function declaration
void main()
{
    printf("\n this is function example\n");
    //step 3:function calling
    myfun(); 
}
// step 2 : function define
void myfun()
{
    printf("\nhello");
    printf("example of function ");
}
===============================================================
pro 40:
#include <stdio.h>

void add();
void mul();
void division();
void sub();

int main()
{
    int choice;

    printf("\n menu ::");
    printf("\n press 1 for addition");
    printf("\n press 2 for multiplication");
    printf("\n press 3 for division");
    printf("\n press 4 for subtraction");

    printf("\n enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: add(); break;
        case 2: mul(); break;
        case 3: division(); break;
        case 4: sub(); break;
        default: printf("invalid choice");
    }

    return 0;
}

void add()
{
    int num1,num2;
    printf("enter number 1 :");
    scanf("%d",&num1);
    printf("enter number 2 :");
    scanf("%d",&num2);
    printf("\n ans=%d",num1+num2);
}

void mul()
{
    int num1,num2;
    printf("enter number 1 :");
    scanf("%d",&num1);
    printf("enter number 2 :");
    scanf("%d",&num2);
    printf("\n ans=%d",num1*num2);
}

void division()
{
    int num1,num2;
    printf("enter number 1 :");
    scanf("%d",&num1);
    printf("enter number 2 :");
    scanf("%d",&num2);
    printf("\n ans=%d",num1/num2);
}

void sub()
{
    int num1,num2;
    printf("enter number 1 :");
    scanf("%d",&num1);
    printf("enter number 2 :");
    scanf("%d",&num2);
    printf("\n ans=%d",num1-num2);
}

==================================================================
pro 41:
#include<stdio.h>
#include<stdbool.h>
void votting();
void even_odd();
void po_ne();
void main()
{
    bool t=true;
    char ch;
    int choice;
    printf("\n\n----------------<MENU>-----------------\n\n");
    printf("\nPress 1 for check entered user is eligible for voting or not.");
    printf("\nPress 2 for chek entered number is even or odd.");
    printf("\nPress 3 for chek entered number is positive or negative.");
    while(t)
    {
        
        printf("\n\nfor continue press (y) or press (n):");
        scanf(" %c",&ch);
     
     if (ch=='n'||ch=='N')
     {
         break;
     }
     else if(ch=='y'||ch=='Y')
     {
         t=true;
     }
     else
     {
         printf("!!!!!press right character!!!!!");continue;
     }
    
        printf("\n\nEnter a choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            votting();break;
            case 2:
            even_odd();break;
            case 3:
            po_ne();break;
            
            
        }
    }
    
}
void votting()
{
    int vo;
    printf("\nEnter a age:");
    scanf("%d",&vo);
    if(vo>=18)
    {
        printf("****Eligible****");
    }
    else
    {
        printf("_____Not Eligible____");
    }
}
void even_odd()
{
    int ev;
    printf("\nEnter a number:");
    scanf("%d",&ev);
    if(ev%2==0)
    {
        printf("****Even number****");
    }
    else
    {
        printf("____odd number____");
    }
}
void po_ne()
{
    int pn;
    printf("\nEnter a number:");
    scanf("%d",&pn);
    if(pn>0)
    {
        printf("****Positive number****");
        
    }
    else
    {
        printf("____negative number____");
    }
}
====================================================================
pro 42:
#include <stdio.h>
void add(int num1,int num2);
int main()
{
    int n1,n2;
    
printf("enter number 1 :");
   scanf("%d",&n1);
    
    printf("enter number 2 :");
   scanf("%d",&n2);
   
   add(n1,n2);
}

void add(int num1,int num2)
{
    int ans;
    printf("\n ans=%d",num1+num2);
}
===========================================================
pro 43:
// function with return value
#include <stdio.h>
int sum()
{
    int num1,num2;
    int ans;
    printf("enter a number 1 :");
    scanf("%d",&num1);
    printf("enter a number 2 :");
    scanf("%d",&num2);
    ans=num1+num2;
    return ans;
}
int main()
{
    int res;
    res=sum();
    printf("\n res=%d",res);
}
==== ========================================================
pro 44:
// function with return value and function with perameters
#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
  int num1,num2,ans;
  printf("enter number 1 :");
  scanf("%d",&num1);
  printf("enter number 2 :");
  scanf("%d",&num2);
  
  ans=sum(num1,num2);
  printf("\n ans =%d",ans);
}
=======================================================
pro 45:
#include <stdio.h>
int findf(int num)
{
   int f=1,i;
   for(i=1;i<=num;i++)
   {
       f*=i;
   }
   return f;
}
int main()
{
 int number; 
 int res;
 
 printf("enter a number which you want to find factorial :");
 scanf("%d",&number);
 
 res=findf(number);
 printf("\n res = %d",res);
}
===========================================================
pro 46:
#include <stdio.h>
// function for sum with pera
int sum(int size)
{
    int a[size]={};
    int sum=0;
    for(int i=0;i<size;++i){
        printf("Enter a %d value :- ",i);
        scanf(" %d",&a[i]);
    }
    
    for(int i=0; i<size; ++i)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int size=0;
    
    printf("Enter your Array Size :- ");
    scanf("%d",&size);
    
    printf("Sum is = %d",sum(size));

    printf("\nSum is = %d",sum(size));

    return 0;
}
===============================================================
pro 47:
#include <stdio.h>
// function for sum with pera
int sum(int arr[],int size)
{
    int sum=0;
    
    for(int i=0; i<size;++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size=0;
    
    printf("Enter your Array Size :- ");
    scanf("%d",&size);
    
    int arr[size]={};
    
    for(int i=0;i<size;++i)
    {
        printf("Enter a %d value :- ",i);
        scanf(" %d",&arr[i]);
    }
    
    printf("Sum is = %d",sum(arr,size));
    //printf("\nSum is = %d",sum(size));

    return 0;

}
==============================================================
/*
5

 0  1  1  2  3
 f=0
 s=1
 temp=f+s;
 f=s;
 s=temp;
*/
use of fibonacci series (logic)