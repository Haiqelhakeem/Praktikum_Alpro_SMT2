#include <iostream>
using namespace std;

struct nilai{
		string nama;
		string PTtujuan;
		int NISN;
		int smt1;
		int smt2;
		int smt3;
		int smt4;
		int smt5;
		int smt6;
	};
	
int main(){
	nilai a1;
	a1.nama = "Dapa";
	a1.PTtujuan = "UNPAD";
	a1.NISN = 123456;
	a1.smt1 = 90;
	a1.smt2 = 89;
	a1.smt3 = 87;
	a1.smt4 = 89;
	a1.smt5 = 92;
	a1.smt6 = 96;
	
	cout << a1.nama << " " << a1.PTtujuan << " " << a1.NISN << endl;
	cout << a1.smt1 << endl;
	cout << a1.smt2 << endl;
	cout << a1.smt3 << endl;
	cout << a1.smt4 << endl;
	cout << a1.smt5 << endl;
	cout << a1.smt6 << endl;
}
