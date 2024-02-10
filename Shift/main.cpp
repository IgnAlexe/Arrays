#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//#define IN_LEFT
#define IN_RIGHT


void main()
{
	setlocale(LC_ALL, "");
	
	int a;
	const int m = 10;
	int arr[m]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	int s=arr[0];
	cout << "»сходный массив:" << endl;
	for (int j = 0; j <m ; j++)
	{
		cout << arr[j] << "\t";
	}
	cout << endl;
	cout << "¬ведите количество сдвигов:\t"; cin >> a;
	
#if defined IN_LEFT
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[j] = arr[j + 1];
			
		}
		arr[m - 1] = s;
		s = arr[0];
		for (int j = 0; j < m; j++)
		{
			cout << arr[j] << "\t";
		}
		
		cout << endl;
		
	}
#endif
#if defined IN_RIGHT
	for (int i = 0; i < a; i++)
	{
		s = arr[m-1];
		for (int j = m-1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
			
		}
		arr[0] = s;
		for (int j = 0; j < m ; j++)
		{
			cout << arr[j] << "\t";
		}
		s = arr[m - 1];
		
		cout << endl;
	}

#endif
}