#include <iostream>
#include <string>

using namespace std;

void spaceship();
void sky();
void sea();
void forest();
void dungeon();

void Travel(int i);

int myLocation;

int main()
{

	cout << "Hey traveler, let's take you to a trip!" << endl;
	cout << "You are in a spaceship. Let's go somewhere. What do you say?" << endl;
	cout << "|____________________________________|" << endl;
	cout << "|You can choose between these places:|" << endl;
	cout << "|0. Back to spaceship                |" << endl;
	cout << "|1. Sky                              |" << endl;
	cout << "|2. Forest                           |" << endl;
	cout << "|3. Sea                              |" << endl;
	cout << "|4. Dungeon                          |" << endl;
	cout << "|5. Go to sleep                      |" << endl;
	cout << "|____________________________________|" << endl;

	spaceship();

	system("pause");
	return 0;

}

void spaceship()
{
	cout << "Where would you like to go?" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	cin >> myLocation;

	Travel(myLocation);

}

void sky()
{
	cout << "We are floating above the cloud now! It's beautiful, but we still have so much to see!" << endl;
	cout << "Let's go somewhere else. Where to next?" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;


	cin >> myLocation;

	Travel(myLocation);

}

void forest()
{
	cout << "I just love being in the woods! Would you like to move on?" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	cin >> myLocation;

	Travel(myLocation);

}

void sea()
{
	cout << "Did you bring your surf board and swimsuit?" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	cin >> myLocation;

	Travel(myLocation);

}


void dungeon()
{
	cout << "How did we even get here in the first place?! The dungeon is no joke!" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	cin >> myLocation;

	Travel(myLocation);

}

void spaceship2()
{
	cout << "Phew! That was a good days trip." << endl;
	cout << "Let's go back to our capsules and get some rest." << endl;
	cout << "See you after the sleep cycle!" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;



	cin >> myLocation;

	Travel(myLocation);

}

void start()
{
	cout << "OK, we are back here. Was there anything else you wanted to do?" << endl;
	cout << "|____________________________________|" << endl;
	cout << "|You can choose between these places:|" << endl;
	cout << "|0. Back to spaceship                |" << endl;
	cout << "|1. Sky                              |" << endl;
	cout << "|2. Forest                           |" << endl;
	cout << "|3. Sea                              |" << endl;
	cout << "|4. Dungeon                          |" << endl;
	cout << "|5. Go to sleep                      |" << endl;
	cout << "|____________________________________|" << endl;


	cin >> myLocation;

	Travel(myLocation);

}



void Travel(int i)
{
	if (i == 1)
	{
		sky();
	}

	else if (i == 2)
	{
		forest();
	}

	else if (i == 3)
	{
		sea();
	}

	else if (i == 4)
	{
		dungeon();
	}

	else if (i == 5)
	{
		spaceship2();
	}
	else if (i == 0)
	{
		start();
	}

	else
	{
		do
		{
			cout << "I wouldn't go there if I was you. Try something else?" << endl;
			cin >> myLocation;
		} while (-1 < i < 6);	

	}
}
