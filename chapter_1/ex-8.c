#include <stdio.h>

/* If a five-digit number is input through the keyboard, write a
program to reverse the number. */ 

int main()
{	
	int num,k, newNum;
	int temp;
	int sum = 0;
	int remainder;

	printf("Input a five digit number.\n");
	scanf("%d", &num);
	temp = num;

	//Checking if the input is a five digit number.
	while (temp < 10000 || temp > 99999){
		printf("The number needs to be of five digits. \n"); 
		printf("Input a five digit number.\n");
		scanf("%d", &newNum); 
		temp = newNum;
		
	}

		printf("reverse of the number %d is : ", num);
		//Calculating the digits
		while(temp > 0 ){ 
		
				remainder = temp % 10;
				temp = temp / 10;
				printf("%d", remainder);
		
	}
	//scanf("%d", &k);
	return 0;
	

}