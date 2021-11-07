#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int* r, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		r[i] = Low + rand() % (High - Low + 1);
}
void Print(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}
int Number(int* r, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (r[i] % 6 == 0 || i % 5 != 0)
			count++;
	return count;
}

int Sum(int* r, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (r[i] % 6 == 0 || i % (5)!= 0)
			S += r[i];
	return S;
}
void Mode(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		if (r[i] % 6 == 0 || i% (5) != 0)
			r[i] = 0;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int r[n];
	int Low = 4;
	int High = 73;
	Create(r, n, Low, High);
	Print(r, n);
	cout << "  " << "N = " << Number(r, n) << endl;
	cout << "  " << "S = " << Sum(r, n) << endl;
	Mode(r, n);
	Print(r, n);
	return 0;
}
