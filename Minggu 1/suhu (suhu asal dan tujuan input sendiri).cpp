#include <iostream>
using namespace std;
int main () 
{
	float suhu, c, f, k, ck, cf, kc, kf, fc, fk;
	char tujuan, asal;
	cout<<"Masukan skala asal = ";cin>>asal;
	cout<<"Masukan suhu asal dalam "<<asal<<" = ";cin>>suhu;
	cout<<"Masukan skala tujuan = ";cin>>tujuan;
	ck = suhu+273;
    cf = (suhu*9/5)+32;
    kc = suhu-273;
    kf = (suhu-273)*9/5+32;
    fc = (suhu-32)*5/9;
    fk = (suhu-32)*5/9+273;
	if (asal=='c' && tujuan=='k')
	{
		cout<<suhu<<" derajat C sama dengan "<<ck<<" derajat K"<<endl;
	}
	else if (asal=='c' && tujuan=='f')
	{
		cout<<suhu<<" derajat C sama dengan "<<cf<<" derajat F"<<endl;
	}
	else if (asal=='k' && tujuan=='c')
	{
		cout<<suhu<<" derajat K sama dengan "<<kc<<" derajat C"<<endl;
	}
	else if (asal=='k' && tujuan=='f')
	{
		cout<<suhu<<" derajat K sama dengan "<<kf<<" derajat F"<<endl;
	}
	else if (asal=='f' && tujuan=='c')
	{
		cout<<suhu<<" derajat F sama dengan "<<fc<<" derajat C"<<endl;
	}
	else if (asal=='f' && tujuan=='k')
	{
		cout<<suhu<<" derajat F sama dengan "<<fk<<" derajat K"<<endl;
	}
	else
	{
		cout<<"Maaf format yang anda masukan salah";
	}
	return 0;
}

