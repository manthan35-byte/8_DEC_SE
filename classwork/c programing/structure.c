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
