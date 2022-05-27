#include <iostream>
using namespace std;

int main(){
	string username;
	int pin=123456;
	int attempt;
	int login = 0;
	int i;
	int total, absen, ja, jm;
	
	cout<<"===ABSEN==="<<endl;
	cout<<"==========="<<endl;
	
	cout << "Masukkan Username: ";
	cin >> username;
	
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
	
	jm = 20;
	while(login = 1){
		cout<<"Masukkan jumlah mahasiswa yang absen: ";
		cin>>ja;	
		for(int j = 1; j <= ja; j++){
			cout<<"Nomor urut mahasiswa yang absen: ";
			cin>>absen;	
		}
		for(int j = 1; j <= ja; j++){
			for(;j <= jm;j++){
				if(j == absen){
					continue;
				}
				cout<<j<<endl;
			}
		}
		total = jm-ja;
		cout<<"\nJumlah mahasiswa yang masuk: "<<total<<endl;
	}
}
