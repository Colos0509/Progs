#include <iostream>
#include <string>

enum Choices { NONE, ADD, SUBTRACT, MULTIPLY, DIVIDE, POWER, REMAINDER, SQUARE };

void Menu()
{


}

int Add(int number1, int number2)
{
	int result = number1 + number2;
	return result;
}

int Subtract(int number1, int number2)
{
	int result = number1 - number2;
	return result;
}

int Multiply(int number1, int number2)
{
	int result = number1 * number2;
	return result;
}

int Divide(int number1, int number2)
{
	int result = number1 / number2;
	return result;
}

int Power(int base, int exponent)
{
	int result = base;
	for (int i = 0; i < exponent - 1; i++)
	{
		result = result * base;
	}
	return result;
}



int main()
{
	char answer;

	do 
	{
		system("cls");
	std::cout << "+=======================+" << std::endl;
	std::cout << "+       Calculator      +" << std::endl;
	std::cout << "+=======================+" << std::endl;
	std::cout << "+ 1. Add numbers        +" << std::endl;
	std::cout << "+ 2. Subtract numbers   +" << std::endl;
	std::cout << "+ 3. Multiply numbers   +" << std::endl;
	std::cout << "+ 4. Divide numbers     +" << std::endl;
	std::cout << "+ 5. Power              +" << std::endl;
	std::cout << "+ 6. Remainder          +" << std::endl;
	std::cout << "+ 7. Square numbers     +" << std::endl;
	std::cout << "+=======================+" << std::endl << std::endl;

	int choice = NONE;

	do
	{
		std::cout << "Please enter the number of the function, you would like to do." << std::endl;
		std::cin >> choice;
	} while (choice <= NONE || choice > SQUARE);


	if (choice == ADD)
	{
		int number1 = 0, int number2 = 0;

		std::cout << "Enter the first number";
		std::cin >> number1;

		std::cout << "Enter the second number";
		std::cin >> number2;

		Add(number1, number2);

		std::cout << number1 << "+" << number2 << "=" << Add(number1, number2) << std::endl

	}

	else if (choice == SUBTRACT)
	{
		int number1 = 0, int number2 = 0;

		std::cout << "Enter the first number";
		std::cin >> number1;

		std::cout << "Enter the second number";
		std::cin >> number2;

		Subtract(number1, number2);

		std::cout << number1 << "-" << number2 << "=" << Subtract(number1, number2) << std::endl


	}
	
	else if (choice == MULTIPLY)
	{
		int number1 = 0, int number2 = 0;

		std::cout << "Enter the first number";
		std::cin >> number1;

		std::cout << "Enter the second number";
		std::cin >> number2;

		Multiply(number1, number2);

		std::cout << number1 << "x" << number2 << "=" << Multiply(number1, number2) << std::endl

	}

	else if (choice == DIVIDE)
	{
		int number1 = 0, int number2 = 0;

		std::cout << "Enter the first number";
		std::cin >> number1;

		do
		{
			std::cout << "Enter the second number";
			std::cin >> number2;
		} while (number2 == 0);

		Divide(number1, number2);
		std::cout << number1 << "/" << number2 << "=" << Divide(number1, number2) << std::endl
			
			do
			{
				std::cout << "Would you like to do another one? [y/n]";
				std::cin >> answer;
			}while (answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N')
	}while (answer == 'y');
	
	else if (choice == POWER)
	{
		int base = 0, int exponent = 0;

		std::cout << "Enter the first number";
		std::cin >> base;

		std::cout << "Enter the second number";
		std::cin >> exponent;

		Multiply(number1, number2);

		std::cout << base << "^" << exponent << "=" << result << std::endl


	

    




	
	system("pause");
	return 0;

}