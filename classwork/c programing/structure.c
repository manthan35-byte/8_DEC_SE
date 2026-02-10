//first program of structure
#include<stdio.h>
struct Student
{
	int id;
	int score;
}
 main()
{
	//variable declaration 
	struct Student s1;
	
	s1.id=101;
	s1.score=98;
	
	printf("\n id=%d",s1.id);
	printf("\n score=%d",s1.score);
}
========================================
pro 2:
#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	char subject[20];
};
 main()
{
	struct Student s1;
    printf("\nenter student details::");
    
    printf("\nenter id:");
    scanf("%d",&s1.id);
    getchar();
    printf("\nenter name:");
    gets(s1.name);
    
    printf("\nenter subject:");
    gets(s1.subject);
    
    printf("\n  student details::\n");
    printf("\n id:%d",s1.id);
    printf("\n name:%s",s1.name);
    printf("\n subject:%s",s1.subject);
}
============================================
pro 3:
//use of array in structure
#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	char subject[20];
};
 main()
{
	struct Student s1[3];
	int i;
    printf("\nenter student details::");
    
    for(i=0;i<3;i++)
    {
    	printf("\n enter id:");
        scanf("%d",&s1[i].id);
        getchar();
        
        printf("\n enter name:");
        gets(s1[i].name);
        
        printf("\n enter subject:");
        gets(s1[i].subject);
        getchar();
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n id:%d",s1[i].id);
		printf("\n name:%s",s1[i].name);
		printf("\n subject:%s",s1[i].subject);
		printf("\n-------------------");
	}
}
======================================================
pro 4:
#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	int marks[3];
};
 main()
{
	struct Student s1;
	int i;
	printf("\nenter student info :");
	printf("\n enter id:");
        scanf("%d",&s1.id);
        getchar();
        
        printf("\n enter name:");
        gets(s1.name);
        
        for(i=0;i<3;i++)
        {
        	printf("\n\t\t enter subject(%d) marks :",i+1);
        	scanf("%d",&s1.marks[i]);
        	
		}
		
		printf("\nstudent detail :");
		printf("\nid :%d",s1.id);
		printf("\nname :%s",s1.name);
		
		for(i=0;i<3;i++)
		{
			printf("\n\t\t student %d marks :%d",i+1,s1.marks[i]);
		}
		printf("\n--------------------------");
}
=======================================================
pro 5:
#include<stdio.h>
// structure within array and array of structure
struct Student
{
	int id;
	char name[20];
	int marks[3];// structure within array
};
 main()
{
	struct Student s1[3];
	int i,j;
	
	printf("\n enter student details ::\n");
	
	for(i=0;i<3;i++)
	{
		printf("\n enter student %d id :",i+1);
		scanf("%d",&s1[i].id);
		getchar();
		printf("\n enter student name :");
		gets(s1[i].name);
		
		for(j=0;j<3;j++)
		{
			printf(" enter %d subject marks :",j+1);
			scanf("%d",&s1[i].marks[j]);
		}
	}
	
	printf("\n--------------student details----------\n");
	
	for(i=0;i<3;i++)
	{
		printf("\n------student %d details------",i+1);
			printf("\nstudent %d id :",s1[i].id);
			printf("\nstudent %d name :",s1[i].name);
		
		for (j=0;j<3;j++)
		{
			printf("\n subject %d score:%d",j+1,s1[i].marks[j]);
		}
	}
}
====================================================================
pro 6:
/*
nested structure :when structure call inside the structure
there are 2 way of nested structure

1)struct <structurename>
{
field
structure<sturctureinner>
{
field
}innerobj;
}outerobj;\
2)struct <structurename>
{
};
struct <2structurename>
{
field
struct structure1 obj;

}obj;

*/
//not done
#include<stdio.h>

struct Address
{
	char city[20];
	int pincode;
};
struct Student
{
	int id;
	char name[20];
	struct Address add;
};
 main()
{
	struct Student s1;
	
	pritnf("enter student id :");
	scanf("%d",&s1.id);
	getchar();
	printf("enter student name");
	gets(s1.name);
	
	printf("enter address :");
	printf("enter city :");
	gets(s1.add.city);

	printf("enter pincode :");
	scanf("%d",&s1.add.pincode);
		getchar();
}
===========================================
pro 7:

=========================================
pro 8:
/*
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
*\