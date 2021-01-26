#include <iostream>
#include <conio.h>
#define MAX 7
using namespace std;

struct Stack {
 int penunjuk, data[MAX];
}tumpukan;

void init(){
    tumpukan.penunjuk=-1;
}

bool IsEmpty(){
return tumpukan.penunjuk==-1;
}
bool isFull(){
return tumpukan.penunjuk==MAX-1;
}
void Push(){
    if(isFull()){
        cout<<" STACK SUDAH FULL ";
    }
    else{
        tumpukan.penunjuk++;
        cout<<" Masukkan data dalam Stack : ";
        cin>>tumpukan.data[tumpukan.penunjuk];
    }
}
void Pop(){
    if(IsEmpty()){
        cout<<" STACK KOSONG ";
    }
    else{

        cout<<" Data yang diambil : "<<tumpukan.data[tumpukan.penunjuk];
        tumpukan.penunjuk--;
    }
}
void printStack() {
 if (IsEmpty()) {
  cout << "Tumpukan kosong";
 }
 else {
        cout << "\nTumpukan : ";
  for (int i = tumpukan.penunjuk; i >= 0; i--){
            cout << tumpukan.data[i] << ((i == 0) ? "" : ",");
  }
 }
}

int main(){
    int pilihan, data;
 init();
 do {
    printStack();
  cout << "\n1. Input (Push)\n"
        <<"2. Hapus (Pop)\n"
        <<"3. Keluar\n"
        <<"Masukkan Pilihan: ";
  cin >> pilihan;
  switch (pilihan)
  {
  case 1:
   Push();
   break;
  case 2:
   Pop();
   break;
        case 3:
            return 0;
  default:
      cout << "Pilihan tidak tersedia" << endl;
   break;
  }
 } while (pilihan!=3);
}

