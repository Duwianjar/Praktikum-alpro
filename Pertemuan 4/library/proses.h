using namespace std;

class Proses {
  public :
      void getData() {
			ifstream infile;
			infile.open("api.data.txt");
			while (!infile.eof()){
				infile >> uangsaku;
			}
			infile.close();
		}
    void toFile(){
      
      bulan = 1;
      int tabungan=0;
      do {
      cout<<"Tabungan bulan "<<bulan<<" | \t UangSaku \t |\tPengeluaran\t| sisa tabungan\n";
      
      cout<<"\t"<<tabungan<<"\t\t"<<uangsaku<<"\t\t\t"; cin>>pengeluaran;
      tabungan=tabungan+uangsaku-pengeluaran;
      cout<<"\t\t\t\t\t\t\t\t\t"<<tabungan<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        bulan=bulan+1;
        }
        
        while (mad/='y');
    
      tulis_data.open("api.data.txt");
      tulis_data << tabungan;
      tulis_data.close();
      
    }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int uangsaku,pengeluaran,bulan;
    char mad;
};
