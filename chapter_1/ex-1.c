
#include <stdio.h>

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