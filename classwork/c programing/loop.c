pro 1:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 2:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 3:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 4:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 5:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 6:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 7:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 8:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 9:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 10:
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
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -
pro 11:
