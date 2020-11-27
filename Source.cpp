#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
template < typename T >
void Print(T* a, const T size)
{
	for (T i = 0; i < size; i++)
		cout << setw(4) << a[i]; 
	cout << endl;
}
template < typename T >
void Create(T* a, const T size, const T Low, const T High)
{
	for (T i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
template < typename T >
T Sum(T* a, const T size)
{
	T S = 0;
	for (T i = 0; i < size; i++)
		if (a[i] % 2 == 1 || a[i] % 2 == -1)
			S += a[i];
	return S;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int b[n];
	int Low = -40;
	int High = 50;
	Create(b, n, Low, High);
	Print(b, n);
	cout << " Sum = " << Sum(b, n) << endl;
	return 0;
}


