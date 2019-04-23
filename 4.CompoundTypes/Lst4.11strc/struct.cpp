#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct inflatable // structure declaration
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable guest = 
	{
		"Glorious Gloria",  // name value
		1.88, //volume value
		29.99 //price value
	};
	
	inflatable pal = 
	{
		"Audacious Arthur",
		3.12,
		32.99
	};
	// NOTE: some implementations require using
	// static inflatable guest =
	
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!" << endl;
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!" << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	return 0;
}







































