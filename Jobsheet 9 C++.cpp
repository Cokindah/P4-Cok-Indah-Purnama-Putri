#include <iostream>
using namespace std;
int main()
{
		cout<<"Cok Indah Purnama Putri \n";
cout<<"F1B019037 \n";
cout<<"Kelompok 7 \n";
	int i;
	char nama[10]={'c','o','k','i','n','d','a','h','\0'};
	char nama2[10]="cokindah";
	cout<<"Array per karakter = ";
	for(i=0;i<10;i++)
	{
		cout<<nama[i]<<",";
		
	}
	cout<<endl;
	cout<<"Array string = "<<nama2<<endl<<endl;
	return 0;
}
