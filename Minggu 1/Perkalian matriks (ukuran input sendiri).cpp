#include <iostream>
using namespace std;
int main() {
  int a,b,c,d,i,j,k,jumlah=0;
  cout<<" Masukkan jumlah baris matriks pertama : ";cin>>a;
  cout<<" Masukkan jumlah kolom matriks pertama : ";cin>>b;
  int matriks1[a][b];
  cout<<" Masukkan jumlah baris matriks kedua: ";cin>>c;
  cout<<" Masukkan jumlah kolom matriks kedua: ";cin>>d;
  int matriks2[c][d];
  if(b!=c){
    cout<<"Perkalian matriks tidak dapat dilakukan!!!";
	} 
	else{
    cout<<"\n Masukan Data Matriks Pertama : \n";
    for (i=0; i<a; i++){
		cout<<"\n";
		for (j=0; j<b; j++){
			cout<<" ["<<i<<"-"<<j<<"]=";cin>>matriks1[i][j];
		}
		}
		cout<<"\n Masukan Data Matriks Kedua :"<<endl;
		for (i=0; i<c; i++){
			cout<<"\n";
		for (j=0; j<d; j++){	
			cout<<" ["<<i<<"-"<<j<<"]=";cin>>matriks2[i][j];
		}
	}
	int hasil[a][d];
    for(i=0; i<a; i++){
      for(j=0; j<d; j++){
        for(k=0; k<c; k++){
          jumlah=jumlah+matriks1[i][k]*matriks2[k][j];
        }
        hasil[i][j]=jumlah;
        jumlah=0;
      }
    }
    cout<< "\n Hasil perkalian Matriks";
    cout<<"\n";
    for(i=0; i<a; i++){
      for(j=0; j<d; j++){
        hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
      }
      cout<<endl;
    }
  }
  return 0;
}
