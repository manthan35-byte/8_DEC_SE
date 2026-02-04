pro 1:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 2:
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

-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 3:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
pro 4:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 5:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 5:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 6:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 7:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 8:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 8:

-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -