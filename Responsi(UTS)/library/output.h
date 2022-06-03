using namespace std;
class Output {
public :
    void getData(){	ifstream infile;
					infile.open("api_data.txt");
					while (!infile.eof()){
            infile >> un;
						infile >> jml1;
						infile >> jml2;
						infile >> jml3;
						infile >> jml4;
						infile >> jml5;
						infile >> tot1;
						infile >> tot2;
						infile >> tot3;
						infile >> tot4;
						infile >> tot5;
						infile >> saldo;
						infile >> tot;
						infile >> totas;
						infile >> totong;
						infile >> gaong;
						infile >> as;
						infile >> pothar;
						infile >> ongkir;
						infile >> figaong;
						infile >> alamat;
					infile.close();}}
  void daftarpesanan(){
			do{
			cout<<"[-------------------------------------------------------------]\n";
			cout<<"[     Nama Barang        |Harga 1an   | jumlah   |   Harga    ]\n";
			cout<<"[-------------------------------------------------------------]\n";
			cout<<"[ "<<green<<"1. Mouse RGB            Rp. 20.000      "<<jml1<<"       Rp. "<<tot1<<blue<<"]"<<endl;
    	cout<<"[ "<<green<<"2. keyboard Mechanical  Rp. 30.000      "<<jml2<<"       Rp. "<<tot2<<blue<<"]"<<endl;
    	cout<<"[ "<<green<<"3. Headset Gaming       Rp. 25.000      "<<jml3<<"       Rp. "<<tot3<<blue<<"]"<<endl;
    	cout<<"[ "<<green<<"4. SSD 2TB              Rp. 50.000      "<<jml4<<"       Rp. "<<tot4<<blue<<"]"<<endl;
    	cout<<"[ "<<green<<"5. Kursi Gaming         Rp. 75.000      "<<jml5<<"       Rp. "<<tot5<<blue<<"]"<<endl;
    	cout<<"[-------------------------------------------------------------]"<<endl;
			cout<<"[ Total Harga                                     Rp. "<<green<<tot<<blue<<"  ]"<<endl;
			cout<<"[ Potongan Harga                               (-)Rp. "<<green<<pothar<<blue<<"   ]"<<endl;
			cout<<"[ Asuransi                                     (+)Rp. "<<green<<as<<blue<<"    ]"<<endl;
			cout<<"[ Ongkir                                       (+)Rp. "<<green<<ongkir<<blue<<"   ]"<<endl;
			cout<<"[ Fitur Gratis ongkir                          (-)Rp. "<<green<<figaong<<blue<<"   ]"<<endl;
    	cout<<"[-------------------------------------------------------------]"<<endl;
			cout<<"[ Sub Total                                       Rp. "<<totong<<"  ]"<<endl;
      sisasal=saldo-totong;
      cout<<"[-------------------------------------------------------------]"<<endl;
			cout<<"[ Masukkan Password akun untuk mengkonfirmasi pembayaran : ";cin>>konfir;
	    cout<<"\033[2J\033[0;0H";
			if(konfir=="008014034"){
				cout<<"[----------------------------------]\n";
				cout<<"[ "<<green<<"Pembayaran berhasil di lakukan"<<blue<<"   ]"<<endl;
        cout<<"[ Saldo anda "<<saldo<<" - "<<totong<<" : Rp. "<<green<<sisasal<<blue<<endl;
        cout<<"[ Silahkan cek struck pembelian    ]\n";
        cout<<"[----------------------------------]\n";
			    	
			    	
        tulis_data.open("struck.txt");
        tulis_data <<"[-------------------------------------------------------------]\n";
        tulis_data <<"[                                                             ]\n";
        tulis_data <<"[ Rincian Pengiriman             Metode Pembayaran            ]\n";
        tulis_data <<"[                                                             ]\n";
        tulis_data <<"[-------------------------------------------------------------]\n";
        tulis_data <<"[ Nama   : "<<un<<"           TokoPay                       \n";
        tulis_data <<"[ Alamat : "<<alamat<<"                                     \n";
        tulis_data <<"[ No     : +628*********                                    \n";
        tulis_data <<"[-------------------------------------------------------------]\n";
        tulis_data <<"[     Nama Barang        |Harga 1an   | jumlah   |   Harga    ]\n";
        tulis_data <<"[-------------------------------------------------------------]\n";
        tulis_data <<"[ 1. Mouse RGB           |Rp. 20.000  x   "<<jml1<<"        : "<<tot1<<" \n";
			  tulis_data <<"[ 2. keyboard Mechanical |Rp. 30.000  x   "<<jml2<<"        : "<<tot2<<" \n";
			  tulis_data <<"[ 3. Headset Gaming      |Rp. 25.000  x   "<<jml3<<"        : "<<tot3<<" \n";
			  tulis_data <<"[ 4. SSD 2TB             |Rp. 50.000  x   "<<jml4<<"        : "<<tot4<<" \n";
			  tulis_data <<"[ 5. Kursi Gaming        |Rp. 75.000  x   "<<jml5<<"        : "<<tot5<<" \n";
			  tulis_data <<"[-------------------------------------------------------------]\n";
			  tulis_data <<"[ Total Harga                                       Rp. "<<tot<<" \n";
			  tulis_data <<"[ Potongan Harga                                 (-)Rp. "<<pothar<<" \n";
			  tulis_data <<"[ Asuransi                                       (+)Rp. "<<as<<" \n";
			  tulis_data <<"[ Ongkir                                         (+)Rp. "<<ongkir<<" \n";
			  tulis_data <<"[ Fitur Gratis ongkir                            (-)Rp. "<<figaong<<" \n";
			  tulis_data <<"[-------------------------------------------------------------]\n";
			  tulis_data <<"[ Sub Total                                         Rp. "<<totong<<" \n\n\n";
        tulis_data <<"[ Saldo awal   : Rp. "<<saldo<<"\n";
        tulis_data <<"[ Sisa saldo   : Rp. "<<sisasal<<endl; 
			  tulis_data.close();
			}else{
				
				cout<<"Password yang anda masukkan salah"<<endl;
			}
		}while(konfir!="008014034");
   }
private :
	ifstream ambil_data;
    ofstream tulis_data;
    FILE * pstruck;
    string alamat,konfir,un;
	int saldo,jml1,jml2,jml3,jml4,jml5,tot1,tot2,tot3,tot4,tot5,tot,pothar,totas,as,ongkir,totong,figaong,sisasal;
	char gaong;
};
  