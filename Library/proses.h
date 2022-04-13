#include<iostream>
#include<fstream>
using namespace std;

class Proses{
  public :
    void getData(){
      ambil_data.open("../dummy/input.txt");
      bool JTabungan = true;
      while(!ambil_data.eof()){
        if(JTabungan){
          ambil_data >> JTabungan;
          JTabungan = false;
        }
        else if(PBulan){
          ambil_data >> PBulan[20];
        }
        else{
          ambil_data >> PTotal[20];
        }
      }
    }
    void toFile(){
      
    }
  private :
    int JTabungan = 1000000, PBulan[20], PTotal[20]; 
    ifstream ambil_data;
    ofstream tulis_data;
};