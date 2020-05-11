#include <iostream>
#include <conio.h>
using namespace std;
main() 
{
	int nim1[2][2];
	int nim2[2][2];
	int jml [2][2];
	int x, y;
	cout<<"Operasi Perhitungan Matriks\n";
      cout<<”Cok Indah Purnama Putri\n”;
      cout<<”NIM:F1B019037”;
      cout<<”Kelompok 7\n”;
	for(x=0;x<2;x++)
	{for (y=0;y<2;y++)
	{cout <<"Masukkan Nilai Matriks A"<<x<<","<<y<<"=";
	cin>>nim1[x][y];
	}
	}
	cout<<endl;
	for (x=0;x<2;x++)
	{for (y=0;y<2;y++)
	{cout<<"Masukkan Nilai matriks B"<<x<<","<<y<<"=";
	cin>>nim1[x][y];
	}
	}
	cout<<endl;
	for(x=0;x<2;x++)
	{for(y=0;y<2;y++)
	{ jml [x][y]=nim1[x][y]-nim2[x][y];
	cout<<jml[x][y]<<" ";
	}
	cout<<endl;
	}
}
