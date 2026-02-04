there are mainly 2 types of array :

1 :one diamational array :

1d array 

[]

2 : multi diamational array:

2d array,3d array 

[][];[][][]
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
ex 1:
#include <stdio.h>
int main()
{

   int a[2][3]={
       {10,20,30},
       {40,50,60}
       
   };
   
    printf("\n %d",a[0][0]); 
    return 0;
} 
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  
ex2:
#include <stdio.h>

int main()
{
   int a[2][3]={
       {10,20,30},
       {40,50,60}
       
   };
   
    int row,col;
    
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("\n%d",a[row][col]);
        }
        printf("\n");
    }
    return 0;
}
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
ex3 :
#include <stdio.h>

int main()
{
  int a[2][3];
  int row,col;
  
  for(row=0;row<2;row++)
  {
      for(col=0;col<3;col++)
      {
          printf("enter elementn[%d][%d]:",row+1,col+1);
          scanf("%d",&a[row][col]);
      }
      printf("\n------------------\n");
  }
  return 0;
}  
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
/*
ascending array:
or 
sorting array:

e.g. a[5]={20,3,4,5,64}

small to big 

a[5]={3,4,5,20,64}
--------->
0th position > 1st position

if
tem=a[0]
a[0]=a[1]
a[1]=a[0]
*/
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
ex 4:
//most imp program
#include <stdio.h>
int main()
{
  int a[5]={23,4,7,2,9};
  int i,j,tem;
  
  for(i=0;i<5;i++)
  {
      for(j=i+1;j<5;j++)
      {
          if(a[i]>a[j])
          {
              tem=a[i];
              a[i]=a[j];
              a[j]=tem;
          }
      }
  }
  for(i=0;i<5;i++)
  {
      printf("\n%d",a[i]);
  }
  return 0;
} 
-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
ex5:
//most imp program
#include <stdio.h>
int main()
{
  char str[10]="india";
  int i,j;
  
  for(i=0;i<5;i++)
  {
      for(j=0;j<=i;j++)
      {
          printf("%c",str[j]);
      }
      printf("\n");
  }
  
  return 0;
}