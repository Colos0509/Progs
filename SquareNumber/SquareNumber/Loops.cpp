#include <iostream>
#include <string>

const int TOTAL = 10;

int main()
{
	int numbers[TOTAL] = { 78, 42, 7, 8, 15, 2, 83, 64, 23, 13 };

	//Challenge #1

	for (int i = 0; i < TOTAL; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			std::cout << "The number" << numbers[i] << "is even" << std::endl;
		}

		else
		{
			std::cout << "The number" << numbers[i] << " is odd" << std::endl;
		}
	}

	std::cout << "===========================================================================================" << std::endl;

	//Challenge #2

	int i = 0;
	while (i < TOTAL)
	{

		if (numbers[i] % 2 == 0)
		{
			std::cout << "The number" << numbers[i] << "is even" << std::endl;
		}

		else
		{
			std::cout << "The number" << numbers[i] << "is odd" << std::endl;
		}

		i++;

	}



	std::cout << "===========================================================================================" << std::endl;

	//challenge #3

	for (int i : numbers)
	{
		if (i % 2 == 0)
		{
			std::cout << "The number" << i << "is even" << std::endl;
		}

		else
		{
			std::cout << "The number" << i << "is odd" << std::endl;
		}
	}
	system("pause");
	return 0;
}

