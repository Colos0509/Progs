#include <iostream>

int main()
{
	int newNumber;
	void SquareNumber(int i);

	std::cout << "Hey there! Give me a number, and I square it for you...\n\n";
	std::cin >> newNumber;


	SquareNumber(newNumber);

}

void SquareNumber(int i)
{
	std::cout << i * i;
}