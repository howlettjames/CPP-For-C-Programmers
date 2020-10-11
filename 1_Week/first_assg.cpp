// Author: Jaime Bastida
// Program that computes the sum of the elements in an array.

#include <iostream>
#include <vector>

using namespace std;

const int number_elements = 40;

// Function that does the sum of the elements in an array and saves them in an accumulator.
inline void sum(int& accum, int n, vector<int>& data)
{
	for(int i = 0; i < n; ++i)
		accum = accum + data[i];
}

int main()
{
	int accum = 0;
	vector<int> data;

	for(int i = 0; i < number_elements; ++i)
		data.push_back(i);

	sum(accum, number_elements, data);

	cout << "The sum is: " << accum << endl;

	return 0;
}