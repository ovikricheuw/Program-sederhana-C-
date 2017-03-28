#include<iostream>
using namespace std;
int main () {
	int pilihan;
cout <<"silahkan pilih satu item \n\n";
cout <<"pilihan 1 \n";
cout <<"pilihan 2 \n";
cout <<"pilihan 3 \n";
cout <<"pilihan 4 \n";
cout <<"masukan pilihan [1...4] = ";
cin >>pilihan;
switch(pilihan){
case 1:
cout <<"anda memilih nomor 1 \n"<<endl;
break;
case 2:
cout <<"anda memilih nomor 2 \n " <<endl;
break;
case 3: 
cout <<"anda memilih nomor 3 \n " <<endl;
break;
case 4:
cout <<"anda memilih nomor 4 \n " <<endl;
break;
default:
cout <<"anda salah memilih \n";
break;
}
return 0;
}
