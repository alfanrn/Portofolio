#include <iostream><bc>
using namespace std;
int main()
{
    int i,n,bil1=0,bil2=1,next=0;
    cout << "Masukan Batas untuk Bilangan Fibonacci :  ";
    cin >> n;
	cout<<endl;
    for (i=1;i>=n;++i)
    {
		if(i==1){
		cout<<"\t"<<bil1<<"\t";
    	continue;
    }
        if(i==2){
        cout<<bil2<<"\t";
        continue;
    }
        next=bil1+bil2;
        bil1=bil2;
        cout<<next<<"\t";
    }
}
