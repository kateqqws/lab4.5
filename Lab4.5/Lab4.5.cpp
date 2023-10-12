#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 1;
		y = 8. * rand() / RAND_MAX - 3;

		if ((y >= ((x - 2) * (x - 2) - 3) && (y <= x) && (y >= 0)) ||
			(y >= ((x - 2) * (x - 2) - 3) && (y <= -x)))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}