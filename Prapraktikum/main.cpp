#include <iostream>
using namespace std;

int main(){
	
	int bil1,bil2, pil, lnj;
	float hasil;
	string operasi;
	
ulang :	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
	switch(pil){
	        case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		case 5 : hasil=bil1%bil2;
			 operasi='%';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Lanjut menghitung\n1.Lanjut\n2.Tidak"<<endl;
	cin>>lnj;
	if(lnj==1){
		cout<<"lanjut\n";
		goto ulang;
	}
	else if(lnj==2){
		cout<<"Program Berhenti";
	}
	else{
		cout<<"Salah Masukan pilihan"<<endl;
	}
	
}
