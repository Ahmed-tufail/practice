#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int a;
	int* p;
	cout << "number:";
	cin >> a;
	p = &a;
	cout << "factorial is:" << factorial(a);

}
int factorial(int a)
{
	if (a == 1)
		return 1;
	else
		return factorial(a - 1) * a;
}