#include <stdio.h>

/* In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number of 
illiterate men and women if the population of the town is
80,000.*/ 

int main()
{	
	int totalPop;
	int totalM; 
	int totalW; 
	int totalLit; 
	int litM; 
	int litW; 
	int illM; 
	int illW;
	char p;

	//Given percentages:

	totalM = 52;
	totalLit = 48;
	litM = 35;
	totalPop = 80000;

	//Prompt for the user to decide different values

	printf("Do you want to use customized values? Press y/n \n");
	scanf("%s", &p);

	if(p == 'y'){
		printf("Input the percentage of total male, total literacy, total literate men, and total population: \n");
		scanf("%d %d %d %d", &totalM, &totalLit, &litM, &totalPop);

	}

	//calculated percentages:

	totalW = 100 - totalM;
	litW = totalLit - litM;
	illW = totalW - litW;
	illM = totalM - litM;

	//Calculate results of total number of illiterate men and women

	illM = (illM * totalPop) / 100;
	illW = (illW * totalPop) / 100;

	printf("The total number of illterate men is %d and The total number of illterate women is %d when the population is %d \n", illM, illW, totalPop);


	
	return 0;
	

}