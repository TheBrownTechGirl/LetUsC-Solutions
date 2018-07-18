#include <stdio.h>

/* A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.*/

int main(){

int tens;
int fifties;
int hundreds;
int withdraw;

//Take input 
printf("Input how much you want to withdraw in hundreds.\n");
scanf("%d", &withdraw);

//Check if the input is correct
if(withdraw < 100 || withdraw > 999){
	printf("Input must be in hundreds.\n");
}

//Denominationations in hundreds
hundreds = withdraw / 100;
printf("$100 notes %d . \n", hundreds);

//Denominationations in fifties
fifties = (withdraw % 100) / 50;
printf("$50 notes %d . \n", fifties);

//Denominationations in tens
tens = ((withdraw % 100) % 50) / 10;
printf("$10 notes %d . \n", tens);

return 0;

}
