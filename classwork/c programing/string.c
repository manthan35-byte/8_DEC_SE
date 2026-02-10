pro 1:
#include<stdio.h>
int main()
{
	int i;
    char name[6]={'h','e','l','l','o','\0'};
    printf("%s\n",name);
    //   OR
    for( i=0;i<6;i++)
    {
    	//for print single character
        printf("\n%c",name[i]);
    }
    return 0;
}
=====================================================
pro 2:
/*
use of strlen() 
for find leanth of string
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char name[]="manthan";
    printf("%s size is=%d",name,strlen(name));
}
==============================================
pro 3:
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("enter a name:");
    gets(name);
    printf("\n%s size is=%d",name,strlen(name));
}
================================================
pro 4:
//for combine 2 string we use strcat()
#include<stdio.h>
#include<string.h>
void main()
{
    char name1[20];
    char name2[20];
    printf("enter a firs name:-");
    gets(name1);
    printf("enter a secound name:-");
    gets(name2);
    printf("%s",strcat(name1,name2));
    printf("\n\n%s",name1);
    
}
-----------------------------------------------
#include<stdio.h>
void main()
{
    char name1[20];
    char name2[20];
    int i,j;
    printf("enter a firs name:-");
    gets(name1);
    printf("enter a secound name:-");
    gets(name2);
     for(i=0;name1[i]!='\0';i++);
     printf("%d\n",i);
     for(j=0;name2[j]!='\0';j++)
     {
         name1[i]=name2[j];
         i++;
     }
     printf("%s",name1);
    
}
===============================================
pro 5:
//use of inbuild method
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int i;
    char name[20];
    printf("Enter a name:");
    gets(name);
    printf("\nyour name is %s",name);
     for( i=0;name[i]!='\0';i++)
    {
        name[i]=toupper(name[i]);
    }
   
    printf("\nthis is your name :%s",name);
   
    
}
-     -     -     -     -     -     -     -     -     -     -     -
//(without inbuild)
#include <stdio.h>
int main()
{
    int i;
    char n1[30];

    printf("Enter a name: ");
    gets(n1);   

    for (i = 0; n1[i] != '\0'; i++)
    {
        if (n1[i]>='a' && n1[i]<='z')
        {
            n1[i] = n1[i] - 32;   
        }
    }

    printf("\nName: %s", n1);
    return 0;
}
------------------------------------------------------------------------
//use of inbuild method
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int i;
    char name[20];
    printf("Enter a name:");
    gets(name);
    printf("\nyour name is %s",name);
     for( i=0;name[i]!='\0';i++)
    {
        name[i]=tolower(name[i]);
    }
   
    printf("\nthis is your lower character name :%s",name);
   
    
}
-     -     -     -     -     -     -     -     -     -     -     -
//(without inbuild method)
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
    char n1[30];
    printf("enter a name:");
    gets(n1);
    for(i=0;n1[i]!='\0';i++)
	{
		if(n1[i]<='a'||n1[i]<='z')
		{
			n1[i]=n1[i]+32;
		}
			}
	printf("\nname :%s",n1);
	return 0;
	        
}
=============================================================================
pro 6:
//strrev is using for reverse of string (use of inbuild method)
#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("enter a name:");
    gets(name);
    printf("\nreverse name:%s",strrev(name));
}
==========================================================================
pro 7:
//for coping one string into oneother (without inbuild )
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
    char n1[30];
    char n2[30];
    printf("enter a name:");
    gets(n1);
    printf("\n string n1 is coping into n2-> %s",n1);
     for( i=0;n1[i]!='\0';i++)
    {
        n2[i]=n1[i];
        
    }
    printf("\ncopy n2->> %s",n2);
}
======================================================================
//strcmp() usning for compare 2 string(use of inbuild method)
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[30];
   char s2[30];
   
   printf("enter a 1 string :");
   gets(s1);
   printf("enter a 2 string :");
   gets(s2);
   
   if(strcmp(s1,s2)==0)
   {
   	printf("both are same string");
   }
   else
   {
   	printf("diffrent string");
   }
}
------------------------------------------------------
//without inbuild method
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[30];
   char s2[30];
   int i=0,flag=0;
   printf("enter a 1 string :");
   gets(s1);
   printf("enter a 2 string :");
   gets(s2);
   
  while(s1[i]!='\0' || s2[i]!='\0')
  {
  	if(s1[i]!=s2[i])
  	{
  		flag=1;
	  }
	  i++;
  }
  if(flag==1)
  {
  	printf("both string are diffrent");
  }
  else
  {
  	printf("both string are same");
  }
}
===========================================================================
