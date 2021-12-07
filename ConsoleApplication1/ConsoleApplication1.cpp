
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int factorial(int k)
{
	int F = 1;

	for (int i = 1; i <= k; ++i)
	{
		F *= i;
	}
	return F;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	double k;
	cout << "введите переменную k:";
	cin >> k;//ввод переменной к
	k > 0;


	if (k > 0)
	{
		cout << "k > 0 потверждено" << endl;;
		cout << "факториал=";
		cout << factorial(k);//факториал(k! = 1 · 2 ·  ...)
	}
	else if (k <= 0)
	{
		cout << "error U3BlbmJvX2Vycm9yXzc3Nw==:переменная k < 0";
	}
	return 0;
}
