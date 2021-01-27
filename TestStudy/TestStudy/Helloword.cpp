#include<iostream>
using namespace std;
int fun(int x, int y)
{
	return x + y;
}

double fun(double x, double y)
{
	return x + y;
}



int main()
{

	int a = 10, b = 20;
	double c = 15.5, d = 25.6;
	float e = 20.2, f = 30.4;
	cout << fun(a, b) << endl;
	cout << fun(c, d) << endl;
	cout << fun(e, f) << endl;
	//cout << "Helloword!\n" << endl;

	return 0;
}