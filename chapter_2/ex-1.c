#include <stdio.h>

/* (a) If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/ 

int main()
{	
	float costP;
	float sellP;
	float profit;
	float loss;

	//Taking inputs
	printf("Please enter the cost price and selling price of the item.\n");

	scanf("%f %f", &costP, &sellP);

	//Calculating profit and loss
	profit = sellP - costP;
	loss = costP - sellP;

	//Decisions

	if (profit > 0){
		printf("The seller has made profit and profit is %.2f\n", profit );

	}

	else {
		printf("The seller has not made any profit. The loss incurred is \n", costP);
	}

	

	return 0;
	

}