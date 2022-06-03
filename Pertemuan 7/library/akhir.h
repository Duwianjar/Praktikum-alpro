using namespace std;

class Output {
public :
    void getData(){	ifstream infile;
					infile.open("api.data.txt");
					while (!infile.eof()){
						infile >> y;
						for(int i=1;i<=y;i++){infile >> id[i];}
						for(int i=1;i<=y;i++){infile >> nama[i];}
						for(int i=1;i<=y;i++){infile >> stok[i];}
						infile >> cari;
					infile.close();}}
	void hasilcari(){
		if(id[y]==cari){
				cout<<"Data yang anda cari \n\n";
				cout<<"ID          : "<<id[y]<<endl;
				cout<<"Nama barang : "<<nama[y]<<endl;
				cout<<"Stok        : "<<stok[y]<<endl;
	}
    
private :
	ifstream ambil_data;
    ofstream tulis_data;
    int y, id[50],stok[50],i,cari;
  	char nama[50][20];
};
