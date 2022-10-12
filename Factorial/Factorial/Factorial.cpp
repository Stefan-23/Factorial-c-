
#include <iostream>


int fact(int n);
int main()
{
	//REMOVE COMMENTS FOR VARIABLES TO IF YOU WANT TO USE THEM FOR WHILE OR FOR LOOPS
	//int x;
	//int factorial = 1;
	//int n;
	/*
	
	//Factorial using for loop - Remove comments for selected function 

	std::cout << "Enter some number to get factorial";
	std::cin >> n;

	for (x = 1; x <= n; x++) 
	
	factorial = factorial * x;
	printf("Factorial of %d is: %d", n, factorial);
	return 0;

	*/
	

	/*
	
	//Factorial using while loop - Remove comments for selected function 

	std::cout << "Enter some numbet to get factorial: ";
	std::cin >> n;

	while (x <= n)
	{
		factorial = factorial * x;
		x++;
	}
	printf("Factorial of %d is: %d", n, factorial);

	return 0;

	
	
	*/

	//Factorial using recursive function - Comment this if you want to use other ways for factorial

	int n;

	std::cout << "Enter a positive integer: ";
	std::cin >> n;

	std::cout << "Factorial of " << n << " = " << fact(n);

	return 0;


	
}

int fact(int n) {
	if (n > 1)
		return n * fact(n - 1);
	else
		return 1;
}




