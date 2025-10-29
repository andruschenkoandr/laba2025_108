#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << dec << showpos << left << '\t' << setw(3) << 4 << "\n" << endl;
	cout << fixed << setprecision(2) << setw(15) << internal << -67.09124 << "\n" << endl;
	cout << showpos << right << setw(10) << 235 << "\n" << endl;
	cout << hex << 2209 << "\n" << dec << endl;
	cout << fixed << setprecision(2) << -121.0 << "\n" << endl;
	cout << showpos << dec << 1 << 24 << "\n" << endl;
}
