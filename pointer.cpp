#include <iostream>

using namespace std;

int main(){

     //deklarasi variabel x dengan tipe data int
     int x;

     //deklarasi pointer p dengan tipe data int
     int *p;

     x = 20;
     p = &x;

     cout<<"\t\txxxxx> Program Contoh Pointer <xxxxx\n\n";

     cout<<"Nilai X   \t\t: "<<x<<endl;
     cout<<"Alamat X (&X) \t\t: "<<&x<<endl<<endl;
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
     cout<<"Nilai yang ditunjuk *P\t: "<<*p<<endl;
     cout<<"Alamat yang ditunjuk *P\t: "<<p<<endl;
     cout<<"Alamat *P (&P) \t\t: "<<&p<<endl;
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
     
     // mengisi nilai 30 kedalam *p / alaman yang ditunjuk pointer p
     // untuk megisikan nilai melalui alamat pointer gunakan *
     // karena alamat memori yang ditunjuk pointer p merupakan alamat memori variabel x
     // maka nilai dari variabel x juga ikut berubah 
     *p = 30;

     cout<<"Nilai X   \t\t: "<<x<<endl;
     cout<<"Alamat X (&X) \t\t: "<<&x<<endl<<endl;
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
     cout<<"Nilai yang ditunjuk *P\t: "<<*p<<endl;
     cout<<"Alamat yang ditunjuk *P\t: "<<p<<endl;
     cout<<"Alamat *P (&P) \t\t: "<<&p<<endl;

     return 0;
}
