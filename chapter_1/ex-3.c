#include <stdio.h>

/* If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100. */ 

int main()
{
	int sub1, sub2, sub3, sub4, sub5;
	

	printf("Input the marks of five subjects. \n");
	scanf( "%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5 );

	if(sub1 > 100 || sub2 > 100 || sub3 > 100 || sub4 > 100 || sub5 > 100){

		printf("The maximum marks can be 100.\n");
	}

	else {
		int total = sub1 +sub2 +sub3 +sub4 +sub5;
		float percentage = ((total/5.0)/ 100)*100;

		printf("The aggragated marks by the student is: %d\n", total);
		printf("The percentage marks by the student is: %.2f", "% \n", percentage);
		
	}
	

	return 0;
	

}