#include <iostream>
#include <string>

void Menu()
{


}

int Add(int number1, int number2)
{
	int result = number1 + number2;
	return result;
}
int main()
{
	int number1 = 0, int number2 = 0;

	std::cout << "Enter the first number";
	std::cin >> number1;

	std::cout << "Enter the second number";
	std::cin >> number2;

	Add(number1, number2);




	
	system("pause");
	return 0;

}