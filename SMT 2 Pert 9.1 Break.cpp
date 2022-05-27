//Mencari Nilai Rata-Rata
#include <iostream>
using namespace std;

int main(){
	string username;
	int pin=123456;
	int attempt;
	int login = 0;
	int i;
	int jn, nilai, mean, jumlah;
	
	cout<<"NILAI RATA-RATA"<<endl;
	cout<<"==============="<<endl;
	
	cout<<"Masukkan Username Anda: ";
	cin>>username;
	
	i = 1;
	do{
		cout<<"Masukkan PIN Anda: ";
		cin>>attempt;
		cout<<endl;
		if (pin == attempt){
			cout<<"Anda Berhasil Login"<<endl;
			login = 1;
			break;
		}
		else{
			cout<<"PIN Anda salah"<<endl;
			cout<<"Silakan Coba Lagi\n"<<endl;
			i = i +1;
		}
	}while(i < 4);
	if (login != 1){
		cout<<"Anda telah 3 kali salah memasukkan PIN. Akun Anda diblokir."<<endl;
	}
	
	while(login = 1){
		cout<<"Masukkan jumlah nilai yang akan dirata-ratakan: ";
		cin>>jn;
		for(int j = 1; j <= jn; ++j){
			cout<<"Nilai: ";
			cin>>nilai;
			
			jumlah += nilai;
		}
		mean = jumlah/jn;
		
		cout<<"Rata-rata yang diperoleh = "<<mean<<endl;
		break;
	}
}
