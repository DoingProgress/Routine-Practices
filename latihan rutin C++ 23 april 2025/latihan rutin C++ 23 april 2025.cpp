#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int x, y;
	int sum;
	cout << "type a number: ";
	cin >> x;
	cout << "type another number: ";
	cin >> y;
	sum = x + y;
	cout<< "sum is "<<sum<<"\n"; //kalkulator simpel

	float f1 = 35e3;
	double d1 = 12e4;
	cout << f1<<"\n";
	cout << d1<<"\n";

	int nilai;
	cout << "masukan nilai ";
	cin >> nilai;
	if (nilai >= 85) {
		cout << "lulus dengan sangat baik";
	}
	else if (nilai >= 75) {
		cout << "lulus";
	}
	else {
		cout << "tidak lulus";
	}



/*boolean	1 byte	Stores true or false values
  char		1 byte Stores a single character/letter/number, or ASCII values
  int		2 or 4 bytes Stores whole numbers, without decimals
  float		4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
  double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits*/
}