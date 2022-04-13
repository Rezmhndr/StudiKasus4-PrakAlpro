#include <iostream>
#include <fstream>
using namespace std;

class output{
  private :
    int bulan=100000, total=20000 ,uang= 210000; 
  public :
    void tampil();
};

void output::tampil(){
  cout<<"========HASIL========="<<endl;
  cout<<"Pengeluaran tiap bulan : "<< bulan <<endl;
  cout<<"Total pengeluaran      : "<< total <<endl;
  cout<<"Uang                   : "<< uang <<endl;

  ofstream myfile;
  myfile.open("hout.txt");
  myfile.close();
  
}