
namespace Color {
    enum Code {
        FG_RED      = 31,
        FG_GREEN    = 32,
        FG_BLUE     = 34,
        FG_DEFAULT  = 39,
        BG_RED      = 41,
        BG_GREEN    = 42,
        BG_BLUE     = 44,
        BG_DEFAULT  = 49
    };
    class Modifier {
        Code code;
    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}
using namespace std;
Color::Modifier red(Color::FG_RED);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier blue(Color::FG_BLUE);
Color::Modifier def(Color::FG_DEFAULT);
class Input {
	public:
		void login() {lupa=0;
			do{	lupa=2;	
				cout<<blue<<"[================================]\n";
				cout<<"[   "<<green<<"- -  TOKO ONLINE IDD  - -"<<blue<<"    ]\n";
				cout<<"[================================]\n";
				cout<<"[ Silahkan Login Terlebih dahulu ]\n";
				cout<<"[--------------------------------]\n";
        cout<<"[                                ]\n";
				cout<<"[ Username : ";cin>>un;
				cout<<"[ Password : ";cin>>psw;
        cout<<"[--------------------------------]\n";
				if(un!="ivanduwideo"&psw!="008014034"){
          cout<<"\033[2J\033[0;0H";
					cout<<red<<"\n[-------------------------------------------------]\n";
					cout<<"[ Username atau Password yang anda masukkan salah ]\n";
					cout<<"[-------------------------------------------------]\n"<<blue;
          cout<<"[                                                 ]\n";
					cout<<"[ 1. Coba Lagi                                    ]\n";
          cout<<"[ 2. Lupa Password                                ]\n";
          cout<<"[                                                 ]\n";
          cout<<"[-------------------------------------------------]\n";
					cout<<"[ Masukkan pilihan anda : "<<green;cin>>lupa;cout<<blue;
          cout<<"[-------------------------------------------------]\n";
          cout<<"\033[2J\033[0;0H";
					if(lupa==2){
          do{
					cout<<"[---------------------------------------------------------------]\n";
					cout<<"[                       "<<red<<"Lupa Password"<<blue<<"                           ]\n";
					cout<<"[---------------------------------------------------------------]\n";
					cout<<"[ Masukkan no hp yang terhubung dengan akun anda : ";cin>>no;
					cout<<"[---------------------------------------------------------------]\n[ \n";
					cout<<"[ "<<green<<"+62"<<no<<blue<<endl;
					cout<<"[ Apakah no hp anda sudah benar [y/t]";cin>>nohp;cout<<"\033[2J\033[0;0H";
	
					}while (nohp=="t");
					     cout<<"[------------------------------------]\n";
					     cout<<"[ "<<red<<"Silahkan Periksa pesan masuk anda"<<blue<<"  ]\n";
               cout<<"[ kami sudah mengirimkan tautan      ]\n";
               cout<<"[ ke no "<<green<<no<<blue<<endl;
               cout<<"[ untuk mengganti Paswword akun anda ]\n";
					     cout<<"[------------------------------------]\n";
               cout<<"[                                    ]\n";
				 cout<<blue<<"[ Tekan '1' untuk login ulang        ]\n";
               cout<<"[ : ";cin>>lupa;cout<<"\033[2J\033[0;0H";
					}
				}
				else{
				cout<<"\033[2J\033[0;0H";
				cout<<green<<"\n[-----------------------]";
				cout<<"\n[  Anda Berhasil Masuk  ]";
				cout<<"\n[-----------------------]\n"<<blue;
			
				}
			}while (lupa==1);}
		void menu(){saldo=1000000;tot1=0;tot2=0;tot3=0;tot4=0;tot5=0;jml1=0;jml2=0;jml3=0;jml4=0;jml5=0;
			do{	cout<<"\n--------------------------\n";
				cout<<"[ Saldo TokoPay |  Koin  ]";
				cout<<"\n--------------------------\n";
				cout<<"[ Rp. "<<green<<saldo<<blue<<"   |    "<<red<<"0"<<blue<<"   ]";
				cout<<"\n--------------------------\n\n";
        cout<<"[--------------------------------------------]\n";
        cout<<"[ "<<green<<" FLASH SALE"<<blue<<"                                ]\n";
			  cout<<"[============================================]"<<endl;
				cout<<"[ Nama Barang            |    Harga          ]"<<endl;
				cout<<"[--------------------------------------------]"<<endl;
			    cout<<"[ 1. Mouse RGB           |    Rp. "<<green<<"20.000"<<blue<<"     ]"<<endl;
			    cout<<"[ 2. keyboard Mechanical |    Rp. "<<green<<"30.000"<<blue<<"     ]"<<endl;
			    cout<<"[ 3. Headset Gaming      |    Rp. "<<green<<"25.000"<<blue<<"     ]"<<endl;
			    cout<<"[ 4. SSD 2TB             |    Rp. "<<green<<"50.000"<<blue<<"     ]"<<endl;
			    cout<<"[ 5. Kursi Gaming        |    Rp. "<<green<<"75.000"<<blue<<"     ]"<<endl;
			    cout<<"[--------------------------------------------]"<<endl;
				  cout<<"[ MASUKKAN PILIHAN ANDA        : "<<def;cin>>pil;cout<<blue;
			    switch (pil){
              case 1: 
                  cout<<"[ "<<green<<"ANDA MEMESAN Mouse RGB                     "<<blue<<endl;
			        		pri=20000;
			        		cout<<"[ Masukkan Jumlah Pesanan      : ";
			        		cout<<def;cin>>jml1;cout<<blue;
			        		cout<<"[--------------------------------------------]"<<endl;
			        		tot1=(pri*jml1);
			        		cout<<"[ Total harga Mouse RGB yaitu : Rp. "<<green<<tot1<<blue<<endl;
				        	cout<<"[============================================]"<<endl;
			        		cout<<"[ Masih ada Y/T :"<<green;
			        		cin>>mad;cout<<blue;
			        		break;
			    		case 2:
			        		cout<<"[ "<<green<<"ANDA MEMESAN keyboard Mechanical           "<<blue<<endl;
			        		pri=30000;
			        		cout<<"[ Masukkan Jumlah Pesanan      :";
			        		cout<<def;cin>>jml2;cout<<blue;
			        		cout<<"[--------------------------------------------]"<<endl;
			        		tot2=(pri*jml2);
			        		cout<<"[ Total harga keyboard Mechanical yaitu : Rp. "<<green<<tot2<<blue<<endl;
			        		cout<<"[============================================]"<<endl;
			        		cout<<"[ Masih ada Y/T :"<<green;
			        		cin>>mad;cout<<blue;
			        		break;
			        	case 3:
			        		cout<<"[ "<<green<<"ANDA MEMESAN Headset Gaming                "<<blue<<endl;
			        		pri=25000;
			        		cout<<"[ Masukkan Jumlah Pesanan      :";
			        		cout<<def;cin>>jml3;cout<<blue;
			        		cout<<"[--------------------------------------------]"<<endl;
			        		tot3=(pri*jml3);
			        		cout<<"[ Total harga Headset Gaming yaitu : Rp. "<<green<<tot3<<blue<<endl;
			        		cout<<"[============================================]"<<endl;
			        		cout<<"[ Masih ada Y/T :"<<green;
			        		cin>>mad;cout<<blue;
			        		break;
			        	case 4:
			        		cout<<"[ "<<green<<"ANDA MEMESAN SSD 2TB                       "<<blue<<endl;
			        		pri=50000;
			        		cout<<"[ Masukkan Jumlah Pesanan      :";
			        		cout<<def;cin>>jml4;cout<<blue;
			        		cout<<"[--------------------------------------------]"<<endl;
			        		tot4=(pri*jml4);
			        		cout<<"[ Total harga SSD 2TB yaitu : Rp. "<<green<<tot4<<blue<<endl;
			        		cout<<"[============================================]"<<endl;
			        		cout<<"[ Masih ada Y/T :"<<green;
			        		cin>>mad;cout<<blue;
			        		break;
			        	case 5:
			        		cout<<"[ "<<green<<"ANDA MEMESAN Kursi Gaming                  "<<blue<<endl;
			        		pri=75000;
			        		cout<<"[ Masukkan Jumlah Pesanan      :";
			        		cout<<def;cin>>jml5;cout<<blue;
			        		cout<<"[--------------------------------------------]"<<endl;
			        		tot5=(pri*jml5);
			        		cout<<"[ Total harga Kursi Gaming yaitu : Rp. "<<green<<tot5<<blue<<endl;
			        		cout<<"[============================================]"<<endl;
			        		cout<<"[ Masih ada Y/T :"<<green;
			        		cin>>mad;cout<<blue;
			        		break;
				}cout<<"\033[2J\033[0;0H";
			}while(mad=='y');	
		}
	void kirim(){
	do{
    cout<<"[----------------------------]\n";
    cout<<"[  Alamat Pengiriman Barang  ]\n";
    cout<<"[----------------------------]\n";
    cout<<"[ Masukkan alamat rumah anda ]\n";
    cout<<"[ : "<<green;cin>>alamat;cout<<blue;
    cout<<"[----------------------------]\n";
    cout<<"[ Alamat anda : "<<green<<alamat<<blue<<endl;
    cout<<"[ Apakah alamat anda benar   ]\n";
    cout<<"[ [y/t] : "<<green;cin>>cekalamat;cout<<blue;
 cout<<"\033[2J\033[0;0H";
	}while (cekalamat=='t');
	}
	void toFile() {	
	tulis_data.open("api_data.txt");
  tulis_data <<un<<endl;  
	tulis_data <<jml1<<endl;
	tulis_data <<jml2<<endl;
	tulis_data <<jml3<<endl;
	tulis_data <<jml4<<endl;
	tulis_data <<jml5<<endl;
	tulis_data <<tot1<<endl;
	tulis_data <<tot2<<endl;
	tulis_data <<tot3<<endl;
	tulis_data <<tot4<<endl;
	tulis_data <<tot5<<endl;
	tulis_data <<saldo<<endl;
	tulis_data <<alamat;
    tulis_data.close();}
private:
ofstream tulis_data;
string un,psw,no,nohp,alamat;
int lupa,saldo,pil,pri,jml1,jml2,jml3,jml4,jml5,tot1,tot2,tot3,tot4,tot5;
char mad,cekalamat;
};