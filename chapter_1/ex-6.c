#include <stdio.h>

/* Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D. */ 

int main()
{	
	int c;
	int d;
	int temp = 0;

	printf("Input two numbers.\n");
	scanf("%d %d", &c, &d);
	printf("The input is C = %d, and D = %d \n", c, d);

	temp = c; //temp is 40 coz c =40
	c = d;	// c= 100 coz  d =100
	d = temp; // d = 40 coz temp =40 

	printf("The interchanged C = %d, and D = %d.\n", c, d);

	return 0;
	

}