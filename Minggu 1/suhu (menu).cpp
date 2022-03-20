#include <iostream>
using namespace std;
int main()
{
	float suhu, c, f, k, ck, cf, kc, kf, fc, fk, Bbawah, Batas;
	int nomor;
	char con, N;
	do
	{
	cout<<"==========================================="<<endl;
	cout<<"  Silahkan Pilih Menu Konversi Di Bawah : "<<endl;
	cout<<"==========================================="<<endl;
	cout<<"  [1] Celcius ke Kelvin"<<endl;
    cout<<"  [2] Celcius ke Fahrenheit"<<endl;
    cout<<"  [3] Kelvin ke Celcius"<<endl;
    cout<<"  [4] Kelvin ke Fahrenheit"<<endl;
    cout<<"  [5] Fahrenheit ke Celcius"<<endl;
    cout<<"  [6] Fahrenheit ke Kelvin"<<endl;
    cout<<"  [0] Keluar"<<endl;
    cout<<"============================================"<<endl;
    cout<<"  Masukan pilihan menu = ";cin>>nomor;
	cout<<"\t\t\t"<<endl;
	switch (nomor)
	{
		case 1:
			cout<<"  Masukan batas bawah dan atas suhu yang ingin dikonversi = ";cin>>suhu>>Batas;
  			cout<<"\t\t\t"<<endl;
			cout<<"Celcius    Kelvin \n";
			for(suhu>=1; suhu<=Batas; ++suhu)
			{
				k = suhu+273;
				cout<<suhu<<" \t    "<<k<<" \n ";
			}break;
		case 2:
			cout<<"  Masukan batas bawah dan atas suhu yang ingin dikonversi = ";cin>>suhu>>Batas;
  			cout<<"\t\t\t"<<endl;
			cout<<"Celcius    Fahrenheit \n";
			for(suhu>=1; suhu<=Batas; ++suhu)
			{
				f = (suhu*9/5)+32;
				cout<<suhu<<" \t    "<<f<<" \n ";
			}break;
		case 3:
			cout<<"  Masukan batas bawah dan atas suhu yang ingin dikonversi = ";cin>>suhu>>Batas;
  			cout<<"\t\t\t"<<endl;
			cout<<"Kelvin    Celcius \n";
			for(suhu>=1; suhu<=Batas; ++suhu)
			{
			  	c = suhu-273;
				cout<<suhu<<" \t    "<<c<<" \n ";
			}break;
		case 4:
			cout<<"  Masukan batas bawah dan atas suhu yang ingin dikonversi = ";cin>>suhu>>Batas;
  			cout<<"\t\t\t"<<endl;
			cout<<"Kelvin    Fahrenheit \n";
			for(suhu>=1; suhu<=Batas; ++suhu)
			{
			  	f = (suhu-273)*9/5+32;
				cout<<suhu<<" \t    "<<f<<" \n ";
			}break;
		case 5:
			cout<<"  Masukan batas bawah dan atas suhu yang ingin dikonversi = ";cin>>suhu>>Batas;
  			cout<<"\t\t\t"<<endl;
			cout<<"Fahrenheit    Celcius \n";
			for(suhu>=1; suhu<=Batas; ++suhu)
			{
			  	c = (suhu-32)*5/9;
				cout<<suhu<<" \t    "<<c<<" \n ";
			}break;
		case 6:
			cout<<"  Masukan batas bawah dan atas suhu yang ingin dikonversi = ";cin>>suhu>>Batas;
  			cout<<"\t\t\t"<<endl;
			cout<<"Fahrenheit    Kelvin \n";
			for(suhu>=1; suhu<=Batas; ++suhu)
			{
				k = (suhu-32)*5/9+273;
				cout<<suhu<<" \t    "<<k<<" \n ";
			}break;
		case 0:{
			cout<<"Keluar dari program...";
			}break;
		default:
			cout<<"Format yang anda masukan salah!!"<<endl;
	}
}while (nomor!=0);
return 0;
}
