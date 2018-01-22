#include <stdio.h>
int main()
{
	int a, b, add, subtract, multiply;
	float divide;

	printf("Enter two numbers\n");
	scanf("%i%i", &a, &b);

	add = a + b;
	subtract = a - b;
	multiply = a * b;
	divide = a / b;

	printf("Sum of numbers = %i\n", add);
	printf("Difference = %i\n", subtract);
	printf("Multiplication = %i\n", multiply);
	printf("Divide = %.2f\n", divide);

	return 0;
} 
	
