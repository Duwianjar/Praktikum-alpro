using namespace std;

class Proses {
public :
    void getData(){	ifstream infile;
					infile.open("api.data.txt");
					while (!infile.eof()){
						infile >> y;
						for(int i=1;i<=y;i++){infile >> id[i];}
						for(int i=1;i<=y;i++){infile >> nama[i];}
					infile.close();}}
	
	void cariBarang(){
		cout<<"----------------------------\n";
		cout<<"[ NIM  | Nama mahasiswa  ]\n";
		cout<<"----------------------------\n";
		for(int i=1;i<=y;i++){
			cout<<"[  "<<id[i]<<"   "<<nama[i]<<endl;
			}	cout<<"Mencari mahasiswa  \n";
				cout<<"Masukkan NIM mahasiswa yang di cari : ";
				cin>>cari;
	}
					
	void toFile(){		
					tulis_data.open("api.data.txt");
      					tulis_data<<y<<endl;
    					for(int i=1;i<=y;i++){tulis_data<<id[i]<<endl;}
    					for(int i=1;i<=y;i++){tulis_data<<nama[i]<<endl;}
    					tulis_data<<cari;
      					tulis_data.close();}
private :
	ifstream ambil_data;
    ofstream tulis_data;
    int y, id[50],i,cari;
  	char nama[50][20];
};
