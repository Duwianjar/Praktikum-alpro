using namespace std;

class Proses {
  public :
    void cetak(){
      cout << "Ini Proses \n";
    }

    void getData(){
      ambil_data.open("api.data.txt");
      bool ayam_geprek = true;
      bool ayam_goreng = true;
      bool udang_goreng = true;
      bool cumi_goreng = true;
      bool ayam_bakar = true;
      bool jarak = true;
      while(!ambil_data.eof()){
        if (ayam_geprek){
          ambil_data >> bnyk_aymgprk;
          ayam_geprek = false;
        }
        if (ayam_goreng){
          ambil_data >> bnyk_aymgrng;
          ayam_goreng = false;
        }
        if (udang_goreng){
          ambil_data >> bnyk_udggrng;
          udang_goreng = false;
        }
        if (cumi_goreng){
          ambil_data >> bnyk_cmigrng;
          cumi_goreng = false;
        }
        if (ayam_bakar){
          ambil_data >> bnyk_aymgbkr;
          ayam_bakar = false;
        }
        if (jarak){
          ambil_data >> jrk;
          jarak = false;
        }
        
      }
      ambil_data.close();
    }

    void toFile(){
      int subtotal = (hrg_aymgprk * bnyk_aymgprk) + (hrg_aymgrng * bnyk_aymgrng) + (hrg_udggrng * bnyk_udggrng) + (hrg_cmigrng * bnyk_cmigrng) + (hrg_aymgbkr * bnyk_aymgbkr);

      int batas = 3;
      int total = int (subtotal);
      int ongkir = 15000;

      if(jrk > batas){
        ongkir = ongkir + 10000;
        total = subtotal + ongkir;
      }
      else{ 
        total = subtotal + ongkir;
      }
      
      tulis_data.open("api.data.txt");
      tulis_data << subtotal << endl;
      tulis_data << ongkir << endl;
      tulis_data << total << endl;
      tulis_data << bnyk_aymgprk << endl;
      tulis_data << bnyk_aymgrng << endl;
      tulis_data << bnyk_udggrng << endl;
      tulis_data << bnyk_cmigrng << endl;
      tulis_data << bnyk_aymgbkr;
      tulis_data.close();
      
    }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int hrg_aymgprk = 21000;
    int hrg_aymgrng = 17000;
    int hrg_udggrng = 19000;
    int hrg_cmigrng = 20000;
    int hrg_aymgbkr = 25000;
    int bnyk_aymgprk,bnyk_aymgrng,bnyk_udggrng,bnyk_cmigrng,bnyk_aymgbkr,jrk,total,ongkir;
};