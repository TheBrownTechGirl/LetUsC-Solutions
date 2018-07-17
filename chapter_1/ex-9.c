#include <stdio.h>
#include <math.h>

/* If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number. */ 

int main()
{	
	int num, newNum;
	int temp;
	int sum = 0;

	printf("Input a four-digit number.\n");
	scanf("%d", &num);
	temp = num;

	//Checking if the input is a four digit number.
	while (temp < 1000 || temp > 9999){
		printf("The number needs to be of four-digits. \n"); 
		printf("Input a four-digits number.\n");
		scanf("%d", &newNum); 
		temp = newNum;
		
	}

	//Finding the last digit

	int lastDigit = temp % 10;

	//finding the first digit

		//Finding the total digits - 1
	int digits = log10(temp);

		//Dividing the number with 10 ^ (digits - 1) for the first number
	int firstDigit = temp / pow(10, digits);

	//Adding first and last digit to print
	printf("The sum of the first and last digits of the number %d is %d\n", temp, lastDigit + firstDigit);

	
	return 0;
	

}