#include <iostream>
const int Max = 5;

using namespace std;

int fill_array(double ar[], int  limit);
void show_array(const double ar[], int n); // don't change data
void revalue(double r, double ar[], int n);

int main()
{
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	cout << "Enter revaluation factor: ";
	double factor;
	cin >> factor;
	revalue(factor, properties, size);
	show_array(properties, size);
	cout << "Done.\n";
	
	return 0;
}
int fill_array(double ar[], int  limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i ++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
		  cout << "Bad input; input process terminated.\n";
		  break;
		  ar[i] = temp;
		}
		return i;
	}
}
void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
	ar[i] *= r;
}











