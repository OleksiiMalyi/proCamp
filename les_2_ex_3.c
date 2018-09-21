/**************
	*	
	*	lecture 2, ex. 3
	*	trainee Oleksii Malyi
**************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

float count_square(float*, float*);
float count_perimeter(float*, float*);
int main(void)
{
	char choise = 0;
	float h = 0.0, w = 0.0, result = 0.0;
	printf("Hi! I'm couning programe\nyou can use me to calculate square and/or perimeter\n");
	printf("You sould enter X to find value of square or Y to find value of perimeter\n");
	printf("so your choise is : ? ");
	scanf("%c", &choise);
	
	if(choise == 'x' || choise == 'X')
	{
		printf("ok! you'd like to know value of square!\n");
		printf("so enter the height [meters] here : ? ");
		scanf("%f", &h);
		printf("and enter the weight[meters] here : ? ");
		scanf("%f", &w);
		result = count_square(&h, &w);
		printf("your square = %f [inches]\n", result);
	}
	
	if(choise == 'y' || choise == 'Y')
	{
		printf("ok! you'd like to know value of square!\n");
		printf("so enter the height [meters] here : ? ");
		scanf("%f", &h);
		printf("and enter the weight[meters] here : ? ");
		scanf("%f", &w);
		result = count_square(&h, &w);
		printf("your square = %f [inches]\n", result);
	}
	
	if(choise != 'y' && choise != 'Y' && choise != 'x' && choise != 'X')
	{
		printf("you entered incorrect symbol\n");
	}
	printf("\nBye!\n");
	
	return 0;
}

float count_square(float *height, float *weight)
{
	return (*height) * (*weight) * 39.3700787;
}

float count_perimeter(float *height, float *weight)
{
	return ( (*height * 2) + (*weight * 2) ) * 39.3700787;
}
