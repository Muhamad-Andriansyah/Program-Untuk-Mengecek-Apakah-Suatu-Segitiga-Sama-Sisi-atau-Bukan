#include<iostream>
using namespace std;
int main (){
int a,b,c;

cout<<"PROGRAM MEMERIKSA APAKAH SEGITIGA SAMA SISI ATAU BUKAN"<<endl;
cout<<"======================================================"<<endl;

cout<<"Masukan panjang sisi A = ";
cin>>a;
cout<<"MAsukan panjang sisi B = ";
cin>>b;
cout<<"Masukan panjang sisi c = ";
cin>>c;

if(a==b&&a==c)
{
    cout<<"Hasilnya adalah = "<<" Segitiga sama sisi "<<endl;
}
else
cout<<"Hasilnya adalah = "<<" Segitiga bukan sama sisi "<<endl;

return 0;
}
