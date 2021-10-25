#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return ((float)i1 + (float)i2 + (float)i3) / 3.0f;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: " << endl;
	cin >> n1;
	cout << "Second number: " << endl;
	cin >> n2;
	cout << "Third number: " << endl;
	cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(2) << fixed << "The average is " << a << endl;

	return 0;
}