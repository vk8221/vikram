#include <stdio.h>
struct student {
	char name[20];
	int rollno;
	float physics;
    float english;
    float math;
    float chemistry;
    float it;
};
 
int i;
int main()
{ 
    	struct student s[5];
for(i=0;i<5;i++)
{
	printf("\nEnter %dst Student Name: ",i+1);
	scanf("%s", s[i].name);
	printf("\nEnter Roll Number: ");
	scanf("%d", &s[i].rollno);
	printf("\nEnter Physics marks: ");
	scanf("%f", &s[i].physics);
    printf("\nEnter English marks: ");
	scanf("%f", &s[i].english);
    printf("\nEnter Math marks: ");
	scanf("%f", &s[i].math);
    printf("\nEnter Chemistry marks: ");
	scanf("%f", &s[i].chemistry);
    printf("\nEnter IT marks: ");
	scanf("%f", &s[i].it);

	
}

    for(i=0;i<5;i++)
    {
	printf("Student Name is: %s\n", s[i].name);
	printf("Student Roll Number is: %d\n", s[i].rollno);
	printf("Physics Marks is: %f\n", s[i].physics);
    printf("English Marks is: %f\n", s[i].english);
    printf("Math Marks is: %f\n", s[i].math);
    printf("Chemistry Marks is: %f\n", s[i].chemistry);
    printf("IT Marks is: %f\n", s[i].it);
    }
	return 0;
    
}