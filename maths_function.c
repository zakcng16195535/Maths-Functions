//This is the line causing issue in the conflict branch
//This is the second line causing issue in the <*master/conflict> branch
#include <stdio.h>
int main()
{
	int a, b, add, subtract, multiply;
	float divide;

	printf("Enter TWO numbers\n");
	scanf("%i%i", &a, &b);

	add = a + b;
	subtract = a - b;
	multiply = a * b;
	divide = a / b;

	printf("Sum of numbers = %i\n", add);
	printf("Difference = %i\n", subtract);
	printf("Multiplication = %i\n", multiply);
	printf("Divide = %.2f\n", divide);

	printf("Enter FIVE numbers\n");
	scanf("%i%i%i%i%i", &a, &b, &c, &d, &e);
	return 0;
} 
	
