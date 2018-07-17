#include <stdio.h>

/* If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’) */ 

int main()
{	
	int num;
	int temp;
	int sum = 0;
	int remainder;

	printf("Input a five digit number.\n");
	scanf("%d", &num); 
	
	temp = num;

	//Checking if the input is a five digit number.
	if (temp < 10000 || temp > 99999){

		printf("The number needs to be of five digits. \n"); // 12
	}

	else{
		//Calculating the digits
		while(temp > 0 ){ 
		
				remainder = temp % 10;
				sum = sum + remainder;
				temp = temp / 10;

			}

	printf("Thd sum of digits of the number %d is: %d\n", num, sum );
		
	}

	return 0;
	

}