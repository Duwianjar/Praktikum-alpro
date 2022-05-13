using namespace std;

class Proses {
public :
    void getData(){	ifstream infile;
					infile.open("api.data.txt");
					while (!infile.eof()){
						infile >> jmlhmhs;
						for(int i=1;i<=jmlhmhs;i++){infile >> nama[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaitgs[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaiuts[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaiuas[i];}
						infile >> makul;
					infile.close();}}
    void toFile(){	int nilaiakhir[jmlhmhs];
					for(int i=1;i<=jmlhmhs;i++){
						nilaiakhir[i]=nilaitgs[i]*20/100+nilaiuts[i]*35/100+nilaiuas[i]*45/100;}
					int ratatgs=0;
					for(int i=1;i<=jmlhmhs;i++){ratatgs=ratatgs+nilaitgs[i];}
						ratatgs=ratatgs/jmlhmhs;
					int ratauts=0;
					for(int i=1;i<=jmlhmhs;i++){ratauts=ratauts+nilaiuts[i];}
						ratauts=ratauts/jmlhmhs;
					int ratauas=0;
					for(int i=1;i<=jmlhmhs;i++){ratauas=ratauas+nilaiuas[i];}
						ratauas=ratauas/jmlhmhs;
					int rataakhir=0;
					for(int i=1;i<=jmlhmhs;i++){rataakhir=rataakhir+nilaiakhir[i];}
						rataakhir=rataakhir/jmlhmhs;	
					tulis_data.open("api.data.txt");
      					tulis_data <<jmlhmhs<<endl;
      					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nama[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaitgs[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiuts[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiuas[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiakhir[i]<<endl;}
    					tulis_data << ratatgs<<endl;
    					tulis_data << ratauts<<endl;
    					tulis_data << ratauas<<endl;
    					tulis_data << rataakhir<<endl;
   						tulis_data << makul;
      					tulis_data.close();}
private :
	ifstream ambil_data;
    ofstream tulis_data;
    string nama[20];
    int jmlhmhs,nilaitgs[10],nilaiuts[10],nilaiuas[10];
    char makul[20];
};
