using namespace std;

class Output {
public :
    void getData(){	ifstream infile;
					infile.open("api.data.txt");
					while (!infile.eof()){
						infile >> y;
						for(int i=1;i<=y;i++){infile >> id[i];}
						for(int i=1;i<=y;i++){infile >> nama[i];}
						infile >> cari;
					infile.close();}
					}
	void hasilcari(){
		for(i=1;i<=y;i++){
			if(id[i]==cari){
				cout<<"Data yang anda cari \n\n";
				cout<<"NIM          : "<<id[i]<<endl;
				cout<<"Nama mahasiswa : "<<nama[i]<<endl;
				}
			}
		}
	void asdesceding(){
		cout<<"\n\nUrutkan mahasiswa Asceding\n";
	for (int i=1; i<=y; i++){
        for (int j=1; j<=y; j++){
            if (id[i] < id[j]){
                temp = id[i];
                id[i] = id[j];
                id[j] = temp;
        }
    }
}
    cout<<"----------------------------\n";
	cout<<"[ NIM  | Nama mahasiswa ]\n";
	cout<<"----------------------------\n";
	for (int i=1; i<=y; i++){
		cout<<"[  "<<id[i]<<"   "<<nama[i]<<endl;
	}
	cout<<"\n\nUrutkan mahasiswa Desceding\n";
	for (int i=1; i<=y; i++){
        for (int j=1; j<=y; j++){
            if (id[i] > id[j]){
                temp = id[i];
                id[i] = id[j];
                id[j] = temp;
        }
    }
}
    cout<<"----------------------------\n";
	cout<<"[ NIM  | Nama mahasiswa ]\n";
	cout<<"----------------------------\n";
	for (int i=1; i<=y; i++){
		cout<<"[  "<<id[i]<<"   "<<nama[i]<<endl;
	}
	
}
	

private :
	ifstream ambil_data;
    ofstream tulis_data;
    int y, id[50],i,cari,temp;
  	char nama[50][20];
};
  
