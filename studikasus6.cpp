#include<iostream>
using namespace std;

class nilai{
public: 
    void input();
    void proses();
    void output();
private:
    int i,jml;
    string nama[20],matkul[20];
    float nilai1[5],nilai2[5],nilai3[5],totnilai,rata;
};
void nilai::input(){
  cout<<"Masukkan jumlah mahasiswa : ";
  cin>>jml;
  for(int i=0; i<jml; i++){
    cout<<"Masukkan nama mahasiswa   : "; 
    cin>>nama[i];
    cout<<"Masukkan MataKuliah       : "; 
    cin>>matkul[i];
    cout<<"Masukkan nilai tugas      : "; 
    cin>>nilai1[i];
    cout<<"Masukkan nilai UTS        : "; 
    cin>>nilai2[i];
    cout<<"Masukkan nilai UAS        : "; 
    cin>>nilai3[i];
  }
}
void nilai::proses(){
  for(int i=0; i<jml; i++){
    rata = nilai1[i]+nilai2[i]+nilai3[i]/3;
    totnilai = 0.2*nilai1[i]+0.35*nilai2[i]+0.45*nilai3[i];
  }
}
void nilai::output(){
  for(int i=0; i<jml; i++){
    cout<<"=============================="<<endl;
    cout<<"Nama mahasiswa : "<<nama[i]<<endl;
    cout<<"Mata Kuliah    : "<<matkul[i]<<endl;
    cout<<"Rata-rata      : "<<rata<<endl;
    cout<<"Total nilai    : "<<totnilai<<endl;
    }
}
int main(){
  nilai x;
  x.input();
  x.proses();
  x.output();
  return 0;
}
