
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	cout << setw(15) << showpos << 4 << noshowpos << endl ;
	cout << setw(20) << internal << setprecision(4) << -67.09124 << endl ;
	cout << setw(12) << showpos << right << 235 << noshowpos << endl ;
	cout << setw(0) << hex << 0x8a1 << dec << endl ;
	cout << setw(0) << fixed << setprecision(2) << -121.0 << endl ;
	cout << setw(0) << showpos << 1 ;
	cout << setw(0) << 24 <<noshowpos << endl ;
	cout << endl ;
	cout << "String1\n\tString2\n\t\tString3\n\t\t\t" << endl ;
	cout << "\tString1\nString2" << endl ;
	cout << "3" ;
	cout << "*" ;
	cout << "\tString\n1" << endl ;
	
}