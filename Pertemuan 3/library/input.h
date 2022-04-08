using namespace std;

class Input {
public:
  void cetak() {
    cout << "Aplikasi Penjualan Makanan \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam geprek Rp. 21000 \n";
    cout << "2) Ayam goreng Rp. 17000 \n";
    cout << "3) Udang goreng Rp. 19000 \n";
    cout << "4) Cumi goreng Rp. 20000 \n";
    cout << "5) Ayam bakar Rp. 25000 \n";
    cout<<"Pesan Ayam geprek -> ";cin >> bnyk_aymgprk;
    cout<<"Pesan Ayam goreng -> ";cin >> bnyk_aymgrng;
    cout<<"Pesan Udang goreng -> ";cin >> bnyk_udggrng;
    cout<<"Pesan Cumi goreng -> ";cin >> bnyk_cmigrng;
    cout<<"Pesan Ayam bakar -> ";cin >> bnyk_aymgbkr;
    cout<<"Jarak rumah anda -> ";cin >>jrk;
    
  }
  void toFile() {
    tulis_data.open("api.data.txt");
    tulis_data << bnyk_aymgprk << endl;
    tulis_data << bnyk_aymgrng << endl;
    tulis_data << bnyk_udggrng << endl;
    tulis_data << bnyk_cmigrng << endl;
    tulis_data << bnyk_aymgbkr << endl;
    tulis_data << jrk;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int bnyk_aymgprk, bnyk_aymgrng, bnyk_udggrng, bnyk_cmigrng, bnyk_aymgbkr,jrk;
};