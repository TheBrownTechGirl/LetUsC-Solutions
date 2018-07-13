
#include <stdio.h>

/*This program is to calculate gross salary after taking input of basic salary and calculating 
two types of allowances */ 

int main()
{
	float bSal;

	printf("Input Ramesh's basic salary\n");
	scanf ( "%f", &bSal);

	float dAlw = bSal * 0.4;
	float hAlw = bSal * 0.2;
	float gSal;


	gSal = bSal+dAlw+hAlw;
	printf("Ramesh's gross salary is: %f\n", gSal );



	return 0;

}