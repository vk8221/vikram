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
 
  void display();
int main()
{ 
   struct student s[5];
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
    for(i=0;i<5;i++)
    {

         display(s[i]);   
    }
	return 0;
    
}

 void display(struct student s)
{
    printf("Student Roll Number is: %d\n", s.rollno);
	printf("Student Name is: %s\n", s.name);
	printf("Physics Marks is: %d\n", s.physics);
    printf("English Marks is: %d\n", s.english);
    printf("Math Marks is: %d\n", s.math);
    printf("Chemistry Marks is: %d\n", s.chemistry);
    printf("IT Marks is: %d\n", s.it);
    printf("Total Marks is: %d\n", s.total);
    printf("Percentage is: %.2f\n", s.percentage);

}
