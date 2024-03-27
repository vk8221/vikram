#include <stdio.h>
struct student {
	int rollno;
    char name[20];
	int physics;
    int english; 
    int math;
    int chemistry;
    int it;
	int total;
	float percentage;
};
int main()
{ 
   struct student s[5];
   struct student top;
   int i,sum=0;
for(i=0;i<5;i++)
{
    printf("\nEnter Roll Number of %dst Student: ",i+1);
	scanf("%d", &s[i].rollno);
	printf("\nEnter Student Name: ");
	scanf("%s", s[i].name);
	printf("\nEnter Physics marks: ");
	scanf("%d", &s[i].physics);
    printf("\nEnter English marks: ");
	scanf("%d", &s[i].english);
    printf("\nEnter Math marks: ");
	scanf("%d", &s[i].math);
    printf("\nEnter Chemistry marks: ");
	scanf("%d", &s[i].chemistry);
    printf("\nEnter IT marks: ");
	scanf("%d", &s[i].it);	
    s[i].total=s[i].physics+s[i].english+s[i].math+s[i].chemistry+s[i].it;   
    s[i].percentage=s[i].total/5;

}
top = s[0];

for(i=0;i<5;i++)
    {
    printf("Student Roll Number is: %d\n", s[i].rollno);
	printf("Student Name is: %s\n", s[i].name);
	printf("Physics Marks is: %d\n", s[i].physics);
    printf("English Marks is: %d\n", s[i].english);
    printf("Math Marks is: %d\n", s[i].math);
    printf("Chemistry Marks is: %d\n", s[i].chemistry);
    printf("IT Marks is: %d\n", s[i].it);
    printf("Total Marks is: %d\n", s[i].total);
    printf("Percentage is: %.2f\n", s[i].percentage);
      if (top.total<s[i].total)
          {
             top = s[i];
          }
    }

    printf("\nTopper Student Details is: %d\t %s\t %d\t %d\t %d\t %d\t %d\t %d\t %.2f\t",top.rollno,top.name,top.english,top.physics,top.math,top.chemistry,top.it,top.total,top.percentage);
    
	return 0;
    
}

