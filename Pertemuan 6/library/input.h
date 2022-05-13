using namespace std;

class Input {
public:
	void cetak() {	cout << "Masukkan Jumlah Matakuliah -> ";cin >> jmlhmhs;
    cout << "Masukkan Nama Mahasiswa -> ";cin >> makul;
    				}
 	void toFile() {	cout<<"Masukkan Matakuliah yang \ndiambil oleh "<<makul<<"["<<jmlhmhs<<"]\n";
          cout<<"------------------------------------\n";
 						char nama[jmlhmhs][20];
    				for(int i=1;i<=jmlhmhs;i++){cout<<"Mata kuliah ke-"<<i<<" : ";cin>>nama[i];}
					cout<<"Masukkan nilai tugas "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
						int nilaitgs[jmlhmhs];
						for(int i=1;i<=jmlhmhs;i++){cout<<"Nilai matakuliah ke-"<<i<<" : ";cin>>nilaitgs[i];}
					cout<<"Masukkan nilai UTS "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
						int nilaiuts[jmlhmhs];
						for(int i=1;i<=jmlhmhs;i++){cout<<"Nilai maatakuliah ke-"<<i<<" : ";cin>>nilaiuts[i];}
					cout<<"Masukkan nilai UAS "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
						int nilaiuas[jmlhmhs];
						for(int i=1;i<=jmlhmhs;i++){ cout<<"Nilai matakuliah ke-"<<i<<" : ";cin>>nilaiuas[i];}
    				tulis_data.open("api.data.txt");
    					tulis_data<<jmlhmhs<<endl;
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nama[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaitgs[i]<<endl;}
   						for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiuts[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiuas[i]<<endl;}
    					tulis_data << makul;
    				tulis_data.close();}
private:
  	ofstream tulis_data;
  	int jmlhmhs;
  	char makul[20];
};
