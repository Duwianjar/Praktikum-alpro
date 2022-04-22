using namespace std;

class SKS {
	public:
  	void rekursif(int);
	private:
 		int nim, jumlahsks,totalp, i, hsl, hsl2, totalp2;
  	char nama[50], matkul[200];};

void SKS::rekursif(int n){
  	if(1 <= n){
      
      
  		cout<<"Masukkan Nama\t\t\t: ";cin>>nama;
  		cout<<"Masukkan NIM\t\t\t: ";cin>>nim;
  		cout<<"Masukkan Jumlah SKS\t\t: ";cin>>jumlahsks;
  		cout<<"Masukkan daftar Mata Kuliah\ncontoh(ipa.ips.pkn)\t\t: ";cin>>matkul;
      
  		totalp=jumlahsks*125000;
  		hsl=totalp*0.15;
  		totalp2=totalp-hsl;
      
  		cout<<"---------------------------------------\n";
           /*nama
        nim
      jumlah sks
  		cout<<"Total pembayaran 125.000 x "<<jumlahsks<<"\t: Rp."<<totalp<<endl;
    	cout<<"Diskon 15%\t\t\t:-Rp."<<hsl<<endl;

  		cout<<"---------------------------------------\n";
  		cout<<"Total Pembayaran Akhir\t\t: Rp."<<totalp2<<endl;
  		cout<<endl;
  		rekursif(n-1);}}

