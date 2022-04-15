using namespace std;

class Output{
public :
  void getData() {
			ifstream infile;
			infile.open("api.data.txt");
			while (!infile.eof()){
				infile >> tabungan;
			}
			infile.close();
		}
    void toFile(){
      cout<<"Sisa Tabungan Anda Saat ini = "<<tabungan<<endl;

      tulis_data.open("api.data.txt");
      tulis_data <<tabungan;
      tulis_data.close();
      
      }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int tabungan;
};
  