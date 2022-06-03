using namespace std;

class Proses {
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
						infile >> alamat;
					infile.close();}}
					
		void diskon(){
			do{tot=tot1+tot2+tot3+tot4+tot5;tothar=0;
      cout<<"[-----------------------------------]\n";
			cout<<"[ VOUCHER("<<green<<"diskon"<<blue<<") TERSEDIA          ]\n";
			cout<<"[-----------------------------------]\n";
			cout<<"[1. Potongan "<<green<<"10%"<<blue<<" Total harga barang ]\n";
			cout<<"[2. Potongan Total harga Rp. "<<green<<"20000"<<blue<<"  ]\n";
			cout<<"[-----------------------------------]\n";
      cout<<"[                                   ]\n";
			cout<<"[ Silahkan Pilih Voucher yang       ]\n";
      cout<<"[ ingin anda gunakan : "<<green;cin>>voucher;cout<<blue;
      cout<<"[-----------------------------------]\n";
      cout<<"[ Total harga barang anda         : Rp. "<<tot<<endl;
				switch (voucher){
	    		case 1:  
	    			pothar=tot*10/100;
	    			tothar=tot-pothar;
	    cout<<"[ Anda memilih Potongan harga 10% : Rp. "<<pothar<<endl;
	    cout<<"[ Jadi Total Harga setelah diskon : Rp. "<<tothar<<endl;
      cout<<"[-----------------------------------]\n";
	    cout<<"[ Apakah anda yakin mau menggunakan ]\n";
      cout<<"[ voucher ini ? [y/t] : "<<green;cin>>cekvoucher;cout<<blue;
	        		break;
	    		case 2:
	    			pothar=20000;
	    			tothar=tot-pothar;
	    cout<<"[ Anda memilih Potongan harga     : Rp. "<<pothar<<endl;
	    cout<<"[ Jadi Total Harga setelah diskon : Rp. "<<tothar<<endl;
	    cout<<"[-----------------------------------]\n";
	    cout<<"[ Apakah anda yakin mau menggunakan ]\n";
      cout<<"[ voucher ini ? [y/t] : "<<green;cin>>cekvoucher;cout<<blue; 
	        		break;
	        	}cout<<"\033[2J\033[0;0H";
	        	}while (cekvoucher=='t');
		}
		void proteksi(){totas=0;as=0;
      cout<<"[----------------------]\n";
			cout<<"[ PROTEKSI("<<green<<"Asuransi"<<blue<<")   ]\n";
      cout<<"[----------------------]\n\n";
      cout<<"[---------------------------------------]\n";
      cout<<"[ Apakah Anda mau  menggunakan Asuransi ]\n";
      cout<<"[ dengan biaya Rp. 5000 ? [y/t] : "<<green;cin>>asuransi;cout<<blue;
          cout<<"\033[2J\033[0;0H";
        	if(asuransi=='y'){
        		as=5000;
            cout<<"[------------------------------------------------]\n";
        		cout<<"[ Anda Memilih untuk menggunakan asuransi +("<<green<<"5000"<<blue<<")]\n";
        		totas=tothar+as;
        		cout<<"[ Jadi total harga + asuransi : Rp. "<<green<<totas<<blue<<"        ]"<<endl;
            cout<<"[------------------------------------------------]\n";
			}
			else {
				totas=tothar;
        cout<<"[-----------------------------------------------]\n";
				cout<<"[ Anda memilih untuk tidak menggunakan Asuransi ]\n";
        cout<<"[ Jadi tidak ada biaya tambahan                 ]\n";
        cout<<"[-----------------------------------------------]\n\n";
			}
		}
		void ekspedisi(){ongkir=0;totong=0;
      cout<<"[------------------------------------------------------------]\n";
			cout<<"[ "<<green<<"EKSPEDISI"<<blue<<"                                                  ]\n";
			cout<<"[------------------------------------------------------------]\n";
			cout<<"[    Jenis Ekspedisi    |    Harga    | Perkiraan Pengiriman ]\n";
			cout<<"[------------------------------------------------------------]\n";
			cout<<"[ 1. "<<green<<"J&T  Expres           Rp. 12.000          2-3"<<blue<<" Hari      ]\n";
			cout<<"[ 2. "<<green<<"Lion Parcel           Rp. 10.000          2-4"<<blue<<" Hari      ]\n";
			cout<<"[ 3. "<<green<<"SiCepat               Rp. 15.000          1-2"<<blue<<" Hari      ]\n";
			cout<<"[------------------------------------------------------------]\n";
			cout<<"[ Silahakan Pilih jenis Ekspedisi yang akan anda gunakan : "<<def;cin>>ekspe;cout<<blue;
		cout<<"\033[2J\033[0;0H";
		switch (ekspe){
    		case 1: 
          cout<<"[----------------------------------------------]\n";
    			cout<<"[ Anda memilih untuk menggunakan"<<green<<" J&T Expres "<<blue<<"   ]\n";
    			cout<<"[----------------------------------------------]\n";
    			cout<<"[ Dengan biaya tambahan : Rp. 12.000           ]\n";
    			cout<<"[ Dan Perkiraan pengiriman 2-3 Hari            ]\n";
    			cout<<"[----------------------------------------------]\n";
    			cout<<"[ Total harga Barang : Rp. "<<totas<<endl;
    			cout<<"[ Biaya Ekspedisi    : Rp. 12000               ]\n";
    			cout<<"[----------------------------------------------]\n";
    			ongkir=12000;
    			totong=totas+ongkir;
    			cout<<"[ Jumlah             : Rp. "<<totong<<endl;
          cout<<"[----------------------------------------------]\n";
        		break;
    		case 2:
          cout<<"[----------------------------------------------]\n";
        	cout<<"[ Anda memilih untuk menggunakan"<<green<<" Lion Parcel"<<blue<<"   ]\n";
        	cout<<"[----------------------------------------------]\n";
    			cout<<"[ Dengan biaya tambahan : Rp. 10.000           ]\n";
    			cout<<"[ Dan Perkiraan pengiriman 2-4 Hari            ]\n";
    			cout<<"[----------------------------------------------]\n";
          cout<<"[ Total harga Barang : Rp. "<<totas<<"             ]"<<endl;
          cout<<"[ Biaya Ekspedisi    : Rp. 10000               ]\n";
    			cout<<"[----------------------------------------------]\n";
    			ongkir=10000;
    			totong=totas+ongkir;
    			cout<<"[ Jumlah             : Rp. "<<totong<<"              ]"<<endl;
          cout<<"[----------------------------------------------]\n";
        		break;
        	case 3:
          cout<<"[----------------------------------------------]\n";
        	cout<<"[ Anda memilih untuk menggunakan"<<green<<" SiCepat    "<<blue<<"   ]\n";
        	cout<<"[----------------------------------------------]\n";
    			cout<<"[ Dengan biaya tambahan : Rp. 15.000           ]\n";
    			cout<<"[ Dan Perkiraan pengiriman 1-2 Hari            ]\n";
    			cout<<"[----------------------------------------------]\n";
    			cout<<"[ Total harga Barang : Rp. "<<totas<<endl;
    			cout<<"[ Biaya Ekspedisi    : Rp. 15000               ]\n";
    			cout<<"[----------------------------------------------]\n";
    			ongkir=15000;
    			totong=totas+ongkir;
    			cout<<"[ Jumlah             : Rp. "<<totong<<endl;
            cout<<"[----------------------------------------------]\n";
        		break;
        	}
		}
		void fiturongkir(){
			figaong=0;
          cout<<"[-----------------------------]\n";
			    cout<<"[ "<<green<<"GRATIS ONGKIR"<<blue<<"               ]\n";
        	cout<<"[-----------------------------]\n";
          cout<<"[-----------------------------------------------------]\n";
        	cout<<"[ Jika total Harga barang anda lebih dari Rp. "<<green<<"100.000"<<blue<<" ]\n";
          cout<<"[ anda dapat menggunakan fitur gratis ongkir          ]\n";
        	cout<<"[ Apakah anda mau menggunakannya ? [y/t]";cin>>gaong;
        	cout<<"\033[2J\033[0;0H";
        	if(gaong=='y'){
        		if(tot>=100000){
        			cout<<"[--------------------------------------------------]\n";
        			cout<<"[ Total harga barang anda adalah : Rp. "<<tothar<<"       ]\n";
              cout<<"[ jadi anda bisa menggunakan fitur gratis ongkir   ]\n";
              cout<<"[--------------------------------------------------]\n";
        			totong=totas;
        			figaong=ongkir;
				}else{
				  cout<<"[--------------------------------------------------]\n";
					cout<<"[ Total harga barang anda adalah : Rp. "<<tothar<<"       ]\n";
          cout<<"[ itu tidak lebih dari Rp. 100.000                 ]\n";
          cout<<"[ jadi anda tidak bisa menggunakan fitur ini       ]\n";
          cout<<"[--------------------------------------------------]\n";
					figaong=0;
				}
			}else{
        cout<<"[---------------------------------------------------------]\n";
				cout<<"[ Anda memilih untuk tidak menggunakan fitur gratis ongkir]\n";
        cout<<"[---------------------------------------------------------]\n";
				figaong=0;
			}
		}
		void tofile(){
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
				tulis_data <<tot<<endl;
				tulis_data <<totas<<endl;
				tulis_data <<totong<<endl;
				tulis_data <<gaong<<endl;
				tulis_data <<as<<endl;
				tulis_data <<pothar<<endl;
				tulis_data <<ongkir<<endl;
				tulis_data <<figaong<<endl;
				tulis_data <<alamat;
			    tulis_data.close();
		}
private :
	ifstream ambil_data;
    ofstream tulis_data;
  	string alamat,un;
	int saldo,jml1,jml2,jml3,jml4,jml5,tot1,tot2,tot3,tot4,tot5,tot,voucher,pothar,tothar,totas,as,ongkir,totong,ekspe,figaong;
	char cekvoucher,asuransi,gaong;
	
};