// function with an array argument
#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(int abb[], int k);

int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	return 0;
}
int sum_arr(int arr[], int n)
{
	int total = 0;
	
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;
}
/*The function call sum_arr(cookies, ArSize)
passes the address of the first element of the cookies array and the number of elements of the
array to the sum_arr() function. The sum_arr() function assigns the cookies address to the
pointer variable arr and assigns ArSize to the int variable n . This means Listing 7.5 doesn’t
really pass the array contents to the function. Instead, it tells the function where the array is
(the address), what kind of elements it has (the type), and how many elements it has (the n
variable).*/
