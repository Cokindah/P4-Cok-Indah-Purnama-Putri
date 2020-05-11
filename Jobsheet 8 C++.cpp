#include <iostream>
using namespace std;
int main()
{
	cout<<"Cok Indah Purnama Putri \n";
cout<<"F1B019037 \n";
cout<<"Kelompok 7 \n";
	int x[7],i;
	for(i=0;i<7;i++)
	{
		cout<<"masukan nilai "<<i+1<<" : ";
		cin>>x[i];
	}
	cout<<endl;
	for(i=0;i<7;i++)
	{
	cout<<"nilai ke "<<i+1<<" = "<<x[i]<<endl;
}
	return 0;
}
