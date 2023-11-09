#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

template <typename Type>
Type SumT(Type* q, Type size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (q[i] % 2 != 0)
			S += q[i];
	return S;
}
template <typename Type>
void CreateT(Type* q, Type size, Type Low, Type High)
{
	for (int i = 0; i < size; i++)
		q[i] = Low + rand() % (High - Low + 1);
}
template <typename Type>
void PrintT(Type* q, Type size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << q[i];
	cout << endl;
}

int Sum(int* q, int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (q[i] % 2 != 0)
			S += q[i];
	return S;
}

void Create(int* q, int size, int Low, int High)
{
	for (int i = 0; i < size; i++)
		q[i] = Low + rand() % (High - Low + 1);
}

void Print(int* q, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << q[i];
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int s;
	cout << "s = "; cin >> s;

	int* d = new int[s];
	int Low = 1;
	int High = 20;

	Create(d, s, Low, High);
	cout << "q[s] =";

	Print(d, s);
	cout << "Sum = " << Sum(d, s) << endl;
	delete[] d;

	int* c = new int[s];
	CreateT(c, s, Low, High);

	cout << "q[s] =";
	PrintT(c, s);

	cout << "Sum = " << SumT(c, s) << endl;
	delete[] c;

	return 0;
}
