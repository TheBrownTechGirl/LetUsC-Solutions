#include <stdio.h>

/* The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle. */ 

int main()
{	
	float lenR;
	float breadthR;
	float areaR;
	float perimeter;

	float radius;
	float areaC;

	printf("Input the length and width of the rectangle and radius of the circle. Use space to input \n");

	scanf("%f %f %f", &lenR, &breadthR, &radius);

	//calculate the area and perimeter of the rectangle.
	areaR = lenR * breadthR;
	perimeter = 2 * (lenR + breadthR);

	//print the result
	printf("The area of the rectangle is: %.02f\n",areaR );
	printf("The perimeter of the rectangle is: %.02f\n",perimeter );

	//calculate the area and circumference of the circle.
	areaC = 2 * 3.1416 * radius;

	//print the result
	printf("The area of the circle is: %.02f\n",areaC );


	return 0;
	

}