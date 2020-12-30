#include <iostream>
#include <conio.h>

using namespace std;
double average(int mn, int mx);
void fRetMinMax(int arr[],int n, int* mmin, int* mmax);
void main() 
	{

		int n = 0;
		cout << " Vvedit rozmir masiva "; cin >> n;
		int* Arr = new int[n];
		int mn, mx;


		for (int i = 0; i <= n - 1; i++)
		{
			cout << " Vvedit " << i << " Element masiva : ";
			cin >> Arr[i];
		}

		fRetMinMax(Arr, n, &mn, &mx);
		cout << "Min = " << mn << "\n" << "Max = " << mx << endl;
		cout << "Average sum = " << average(mn, mx) << endl;

	}

double average(int mn, int mx)
{
	int avv;
	avv = (mn + mx) / 2;
	return avv;
}

void fRetMinMax(int arr[], int n, int* mmin, int* mmax)
{
	*mmin = *mmax = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (*mmin > arr[i])* mmin = arr[i];
		if (*mmax < arr[i])* mmax = arr[i];
	}
}
