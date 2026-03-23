what is pointer:

pointer is  a variable which contain variable memory address.

e.g.

A:

101   201
102   202
103   203 

----------------------------------------
in c programing whenever we create any new variable it assign a specific memory 

    int a = 10 ;

            101                         (address)
            --------------------------
        a   10                          (value)
            ---------------------------


-------------------------------------------------------
*  : value at operator 

&  : Address at operator 

in c rpograming whenever we create any new variable if assign a specific memory

#include<stdio.h>
main()
{
	int a=190;
	int *p; //pointer variable declaration
	
	printf("\n a=%d",a);
	
	printf("\n address of a =%d",&a);
	
	p=&a; // store add of a variable
	
	printf("\naddress of p=%d",p);
	printf("\n fatch value from add p=%d",*p);
	*p=200;
	printf("\n after change add value p=%d",*p);
	printf("\n a variable value :%d",a);
}
------------------------------------------------------------------------------------
// most imp

actual perameter and foraml perameter

foraml perameter : 

foraml perameter pass in function defination time.

actual perameter pass at function calling time.

e.g. 
#include<stdio.h>
void sum(int a,int b)// formal perameters
{
    ans=a+b;
    printf("ans=%d",ans);
}
void main()
{
    int a=10,b=20;
    sum(a,b)//actual perameters
}
--------------------------------------------------------------------------------
call by value : call by value is a most powerful concept of function and pointer topic 

it does not change actual perameter if we apply change is formal perameter 

in call by value we just  passing copy of value not passing actual perameter

e.g. 
#include<stdio.h>
void swap(int a,int b)//formal perameter
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
main()
{
    int a=10,b=20;//actual perameter
    printf("\n before change in perameter");
    printf("\n a=%d and b=%d",a,b);

    swap(a,b);//call by value
    printf("\n after change in perameter");
}
--------------------------------------------------------------------------------
call by reference : when we pass actual perameter in function calling time 
and appay change in  formal perameter in direct affect 
actual perameter

because insterd of passing copy of  valuue here we are passing address of perameter

#include<stdio.h>
void swap(int *a,int *b)//formal perameter
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
main()
{
    int a=10,b=20;//actual perameter
    printf("\n before change in perameter");
    printf("\n a=%d and b=%d",a,b);

    swap(&a,&b);//call by reference
    printf("\n after change in perameter");
    printf("\n a=%d and b=%d",a,b);
}

---------------------------------------------------------------
#include<stdio.h>

main()
{
    int arr[5]={20,30,30,22,23};
    int i;
    int*p;
    p=arr;
    for(i=0;i<5;i++)
    {
    	printf("\n %d",*(p+i));
	}
}
-----------------------------------------------------------------
#include<stdio.h>
// sum using pointer
main()
{
    int arr[5]={20,30,30,22,23};
    int i;
    int*p;
    p=arr;
    int sum=0;
    for(i=0;i<5;i++)
    {
	sum+=*(p+i);
	}
	printf("\n sum = %d",sum);
}
----------------------------------------------------
//print largest value  using pointer
#include<stdio.h>
// sum using pointer
main()
{
    int a[5]={34,53,68,574,9};
    int max,i;
    int *p;
    
    p=a;
    
    max=*p;
    
    for (i=1;i<5;i++)
    {
    	if(*(p+i) > max)
    	{
    		max=*(p+i);
		}
	}
	printF("max = %d",max);
}
---------------------------------------------------
#include<stdio.h>
struct Student
{
	int id;
	char name[20];
};
main()
{
	//structure variable declaration
	struct Student s1;
	//pointer variable declaration
	struct Student *p=&s1;
	/*
	note: when we have to access structure member using of structure varaible
	we use .(dot operator) e.g. s1.name
	
	note: when we have to access structure member using of pointer varaible
	we use ->(arrow operator) e.g. s1->name
	
	*/
	printf("enter id :");
	scanf("%d",&p->id);
	getchar();
	printf("enter name :");
	gets(p->name);
	
	printf("id :%d",&p->id);
	printf("name :%s",p->name);
}
----------------------------------------
