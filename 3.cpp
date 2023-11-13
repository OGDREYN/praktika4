#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int size = 13;
	int arr[13] = { -12,12,3,-7,11,-12,7,-15,6,72,73,6,44, };
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
		{
			cout << "\nотрицательные числа:" << arr[i];
		}
	}

	return 0;
}
