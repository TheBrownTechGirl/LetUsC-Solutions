#include <stdio.h>

/* Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees. */ 

int main()
{
	float tempF;
	// float tempC;
	

	printf("Input the temperature of your city in Fahrenheit. \n");
	scanf( "%f",&tempF );

	float tempC = tempF * (5/7) + 32;

	printf("The temperature of your city in celcius is: %f\n", tempC);

	return 0;
	

}