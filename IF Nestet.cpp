#include <iostream>
using namespace std;

int main() {
    int total, member;
     cout<<"=========================="<<endl;
     cout<<" Member = 0 /Bukan Member = 1"<<endl;
     cout<<"=========================="<<endl;
     cout<<" Apakah Member = ";cin>>member;cout<<endl;
     cout<<" Total Belanja = ";cin>>total;cout<<endl;
     cout<<"=========================="<<endl;

     if (member == 0){
        if (total >= 1000000){
            cout<<"Selamat anda mendapatkan potongan senilai 100.000"<<endl;
            cout<<total;cout<<" Menjadi ";cout<<total - 100000<<endl;
        }
        else if (total >= 500000){
            cout<<"Selamat anda mendapatkan potongan senilai 50.000"<<endl;
            cout<<total;cout<<" Menjadi ";cout<<total - 50000<<endl;
        }
        else {
            cout<<"Maaf anda tidak mendapatkan potongan harga"<<endl;
            cout<<total<<endl;
        }
        }
     else if (member == 1){
        if (total >= 10000000){
            cout<<"Selamat anda mendapatkan potongan harga 50.000"<<endl;
            cout<<total;cout<<" Menjadi ";cout<<total -50000<<endl;
        }
        else if (total >= 500000){
            cout<<"Selamat anda mendapatkan potongan harga 25.000"<<endl;
            cout<<total;cout<<" Menjadi ";cout<<total - 25000<<endl;
        }
        else {
            cout<<"Maaf anda tidak mendapatkan potongan harga"<<endl;
            cout<<total<<endl;
        }
        }
     cout<<"============================="<<endl;
        return 0;
        }
        
