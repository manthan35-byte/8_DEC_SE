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
