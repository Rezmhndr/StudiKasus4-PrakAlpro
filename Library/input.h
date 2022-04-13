#include <iostream>
using namespace std;

class input{
  public:
    int jumlahbulan();
    void masukkan();
    void pengeluaran();
  private:
    int bln, saku, keluaran;
};

void input::masukkan(){
  cout << "Masukkan uang saku awal: ";
  cin >> saku;
  cout << "Uang saku awal Andi = Rp. " << saku << endl;
  cout << endl;
}
int input::jumlahbulan(){
  cout << "Masukkan jumlah bulan pengeluaran : ";
  cin >> bln;
  cout << endl;
  for (int i=1; i > bln; i++){
    cout << "Masukkan total pengeluaran bulan ke - " << i << " : Rp. "; cin >> keluaran;
    saku = saku - keluaran;
    cout << "Sisa saku bulan ke-" << i << " : Rp. " << saku << endl;
  }
  return saku;
}