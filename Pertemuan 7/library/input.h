using namespace std;

class Input {
public:
	void readBarang(){
		cout<<"----------------------------------\n";
		cout<<"[ Masukkan jumlah mahasiswa : "; cin>>y;
		for(int i=1;i<=y;i++){
						cout<<"----------------------------------\n";	
						cout<<"NIM mahasiswa          ke ["<<i<<"]: ";cin>>id[i];
						cout<<"Nama mahasiswa         ke ["<<i<<"]: ";cin>>nama[i];

    				}
    }
 	void toFile(){	
    				tulis_data.open("api.data.txt");
    					tulis_data<<y<<endl;
    					for(int i=1;i<=y;i++){tulis_data<<id[i]<<endl;}
    					for(int i=1;i<=y;i++){tulis_data<<nama[i]<<endl;}
    				tulis_data.close();}
private:
  	ofstream tulis_data;
  	int y, id[50],i;
  	char nama[50][20];

};
