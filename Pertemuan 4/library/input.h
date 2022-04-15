using namespace std;

class Input {
public:
  void cetak() {
    cout << "Uang saku bulanan -> ";cin >> uangsaku;
    
  }
  void toFile() {
    tulis_data.open("api.data.txt");
    tulis_data << uangsaku;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int uangsaku;
};