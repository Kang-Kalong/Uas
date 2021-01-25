#include <iostream>

using namespace std;

int main()
{
    //Nama :
    //NPM :
    // Deklarasi array 'AZnilai' dengan 6 buah elemen berisi int
     int AZnilai[5];
     int nilaidicari;
     string status = "Tidak Ditemukkan";

     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
     cout<<"\nxx> Mencari Nilai (N) Pada Array <xx\n";
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

     // Mengisi nilai ke dalam elemen array
     cout<<"\nxx> Isi Array <xx\n";
     for(int i=0; i<6;i++){
          cout<<"Isi Indek Ke ["<<i<<"] = ";
          cin>>AZnilai[i];
     }
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
     cout<<"[+] Masukkan Nilai Yang Dicari = ";cin>>nilaidicari;
     for(int i=0; i<6;i++){
          if(AZnilai[i]==nilaidicari){
               cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
               cout<<"[*] Nilai Yang Dicari ("<<nilaidicari<<") Ditemukan Di Indek Ke ["<<i<<"]\n";
               cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
               status = "Ditemukkan";
               break;
          }
     }

     if (status == "Tidak Ditemukkan"){
         cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
          cout<<"[!] Nilai Yang Dicari ("<<nilaidicari<<") Tidak Ditemukan\n";
          cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
     }

     return 0;
}

