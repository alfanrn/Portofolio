#include <stdio.h>
void tampil(int a){
	printf("        KASIR A");
	printf("\n    Silahkan Pilih Menu");
	printf("\n  1) Masukan Barang Belanja ");
	printf("\n  2) Keluar ");
}
int main(){
	int b,p,hasil;
	int x,i;
	float total,jumlah,harga;
	char barang[50];
	FILE *pFile;
	pFile = fopen("Struk.txt","w");
	tampil(b);
	printf("\n Masukan Pilihan : ");
	scanf("%d",&p);
	switch(p){
	case 1:
	printf("\n Jumlah Belanja    = ");
	scanf("%d",&x);
	for(i=0;i<x;i++){
	fflush(stdin);
	printf("\n Nama Barang    = ");
	scanf("%[^\n]s",&barang);
	printf(" Jumlah Barang  = ");
	scanf("%g",&jumlah);
	printf(" Harga          = ");
	scanf("%g",&harga);
	total=harga*jumlah;
	printf(" Total          = %g\n",(float) total);
	hasil+=total;
	}
	printf("\n Total Belanja Anda = %g",(float)hasil);
	fprintf(pFile," Total Barang Belanja = %d",(int)x);
	fprintf(pFile,"\n Total Belanja Anda = %g",(float)hasil);
	fclose(pFile);
	break;
	case 2:
	printf("\n ANDA KELUAR ");
}
return p;
}
