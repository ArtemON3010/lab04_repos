#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "y" << "    |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = (R * R + R * x) / 8 - R;
			else
				if (-R < x && x <= R)
					y = -sqrt(R * R - x * x);
				else
					if (R < x && x < 5)
						y = (2 * (x - R)) / (5 - R);
					else
						if (x != 5)
							y = 3;
		cout << endl;
		cout << "|" << setw(7) << setprecision(2) << y
			<< "  | " << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}