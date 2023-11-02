#include <iostream>

using namespace std;

// функция, интеграл
double f(double x)
{
	return exp(x);
}

double integ(double a, double b)
{
	double Integral;
	double h = 0.1; // Шаг интегрирования
	double n = (b - a) / h;
	int i; // Счётчик

	// Вычисляем интеграл по формуле Симпсона
	Integral = h * (f(a) + f(b)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * f(a + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * f(a + h * i);
	cout << "I = " << Integral << "\n";
	return Integral;
}

int main()
{
	double a = 0.0, b = 1.0; // Задаём отрезок интегрирования
	integ(a, b);

	system("pause");
}