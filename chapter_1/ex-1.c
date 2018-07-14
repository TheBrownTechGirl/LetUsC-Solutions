
#include <stdio.h>

/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */ 

int main()
{
	distanceKm;
	inMeters = distanceKm * 1000;	//1 km = 1000 m
	inFeet = distanceKm * 3280.84;  // 1 km = 3280.84 ft
	inCentimeters = distanceKm * 100000;	// 1 km = 100000 cm;

	printf("Input the distace between the two cities in kilometers.\n");
	scanf("%f", &distanceKm );

	printf("The distance in meters is: \n", inMeters);
	printf("The distance in feet is: \n", inFeet);
	printf("The distance in centimeters is: \n", inCentimeters);

	return 0;

}