using namespace std;

class Output {
public :
    void getData(){	ifstream infile;
					infile.open("api.data.txt");
					while (!infile.eof()){
						infile >> jmlhmhs;
						for(int i=1;i<=jmlhmhs;i++){infile >> nama[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaitgs[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaiuts[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaiuas[i];}
						for(int i=1;i<=jmlhmhs;i++){infile >> nilaiakhir[i];}
						infile >> ratatgs;
						infile >> ratauts;
						infile >> ratauas;
						infile >> rataakhir;
						infile >> makul;
					infile.close();}}
    void toFile(){	cout<<"Form nilai "<<nama<<endl;
						  cout<<"================================================================================="<<endl;
      				cout<<"                |                             Nilai                             |"<<endl;
      				cout<<"     Nama       |----------------------------------------------------------------"<<endl;
    					cout<<"                |     Tugas     |      UTS      |      UAS      |     AKHIR     |"<<endl;
    					cout<<"================================================================================="<<endl;
    				for(int i=1;i<=jmlhmhs;i++){
    					cout<<i<<". "<<nama[i]<<"\t\t|\t\t"<<nilaitgs[i]<<"\t\t|\t\t"<<nilaiuts[i]<<"\t\t|\t\t"<<nilaiuas[i]<<"\t\t|\t\t"<<nilaiakhir[i]<<"\t\t|"<<endl;}
						cout<<"================================================================================="<<endl;
						cout<<"     Rata''     |\t\t"<<ratatgs<<"\t\t|\t\t"<<ratauts<<"\t\t|\t\t"<<ratauas<<"\t\t|\t\t"<<rataakhir<<"\t\t|\n";
						cout<<"================================================================================="<<endl;
					}
private :
	ifstream ambil_data;
    ofstream tulis_data;
    string nama[20];
    int jmlhmhs,nilaitgs[10],nilaiuts[10],nilaiuas[10],nilaiakhir[10],ratatgs,ratauts,ratauas,rataakhir;
    char makul[20];
};
  
