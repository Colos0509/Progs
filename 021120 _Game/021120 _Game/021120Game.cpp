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

	spaceship();
	system ("PAUSE")
}

void spaceship()
{
	cout << "You are in a spaceship now." << endl;
	cout << "Where would you like to go?"
		cin >> myLocation;

	Travel (myLocation)

		
}

void sky()
{
	cout<< "We are floating above the cloud now!" << endl;
}

void sea()
{
	cout << "Did you bring your surf board?" << endl;
}

void forest()
{
	cout << "I just love being in the woods!" << endl;
}

void dungeon()
{
	cout << "How did we even get in the dungeon in the first place?!" << endl;
}