#include <iostream>
#include <iomanip>
using namespace std;

void mahasiswa()
{
	int i;
	string bio1[100]= {"NIM : F1B019037","Nama : Cok Indah Purnama Putri","Tanggal Lahir : 2000-11-03","Tempat Lahir : Empang, Kab. Sumbawa", "Provinsi Lahir : Nusa Tenggara Barat", "Golongan Darah : B", "Agama : Hindu", "Alamat : Ampenan jln. Ubur-ubur", "email : cokordaindah7@gmail.com.com", "No HP : 082339509595 "};
	string bio2ayah[100] = {"NIK : 5204142106670001", "Nama Ayah : Cokorda Mayun Raiyana", "Tanggal Lahir : 1967-06-21","Pendidikan Ayah : SMA/Sederajat","Pekerjaan Ayah :Karyawan BUMN"};
	string bio2ibu[100] = {"NIK : 5204145403740001", "Nama Ibu : Sri Mariyati", "Tanggal Lahir : 1974-04-14","Pendidikan Ibu : SMA/Sederajat","Pekerjaan Ibu :Ibu Rumah Tangga"};
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"\t\t\t COK INDAH PURNAMA PUTRI \t\t\t\t\n";
	cout<<"                      Biodata\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|                            Pribadi                                     |\n";
	cout<<"-------------------------------------------------------------------------\n";
	for (i=0;i<=12;i++)
	{cout<<bio1[i]<<"\n";}
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|                            Orang Tua                                   |\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"- Ayah \n";
	for (i=0;i<=5;i++)
	{
		cout<<bio2ayah[i]<<"\n";
	}
	cout<<"------------------------------------------------------------------------\n";
	cout<<"- Ibu \n";
	for (i=0;i<=5;i++)
	{
		cout<<bio2ibu[i]<<"\n";
	}
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"========================================================================\n";
	cout<<"Akademik\n";
	cout<<"Shift        : Reguler\n";
	cout<<"Tanggal Masuk: 1000-01-01\n";
	cout<<"Aktif        : Aktif \n";
	cout<<"-------------------------------\n";
}
void nilai()
{
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik", "Rangkaian Logika", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia"};
 	int sks[10]={2,3,2,3,2,1,2,3,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1215","ES1216","ES1217"};
	string uts[10]={"A","B","B","A","A","A","B+","A","B","A"};	
	string uas[10]={"A","A","A","B","B+","A+","B+","A","A"};
	cout<<"----------------\n";
	cout<<"|Nilai F1B019037|\n";
 	cout<<"----------------\n";
 	cout<<"Tahun Akademik : 2019 (Genap)\n";
 	cout<<"Kurikulum      : Semua        \n";
 	cout<<"Semester       : 2 \n";
 	cout<<"IP             : 3.74 \n";
 	cout<<"Total SKS      : 23 \n";
 	cout<<"IPK            : 3.74 \n";
	 cout<<"======================================================\n";
 	cout<<"|     Mata Kuliah      |Kode MK    | SKS | UTS | UAS |\n";
 	cout<<"=====================================================\n";
 	for(int i=0;i<8;i++){
	for (i=0;i<=8;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(22)<<mk[i]<<"|"<<setw(11)<<kode[i]<<"|"<<setw(5)<<sks[i]<<"|"<<setw(5)<<uts[i]<<"|"<<setw(5)<<uas[i]<<"|\n";}}
  	cout<<"\n=======================================================\n";
}
void krs()
{
	int i;
	cout<<"\n\n";
  	int smstr;
	int sks2[1000],n;
 	char matkul[1000][30];
 	cout<<"-----------------\n";
 	cout<<"|Pengajuan KRS : |\n";
 	cout<<"-----------------\n";
	 cout<<"Masukan banyak mata kuliah yang akan di ambil : ";
 	cin>>n;
 	cout<<endl;
 	cout<<"KRS untuk semester (1-8): ";cin>>smstr;
 	for (int i=0;i<n;i++){
  		cout<<"Masukan nama matakuliah ke-"<<i+1<<" : ";
  		scanf(" %[^\n]s",matkul[i]);
  		cout<<"Masukan SKS mata kuliah\t : ";
  		cin>>sks2[i];}
 	cout<<"Kartu Rencana Studi Mahasiswa :\n";
 	cout<<"semester "<<smstr<<"\n";
	cout<<"======================================\n";
 	cout<<"|      Mata Kuliah     \t| SKS | Nilai|\n";
 	cout<<"======================================\n";
 		for(int i=0;i<n;i++){
  			cout<<"| "<<setiosflags(ios::left)<<setw(22)<<matkul[i]<<"|";
  			cout<<" "<<setiosflags(ios::left)<<setw(4)<<sks2[i]<<"|";
  			cout<<" "<<setiosflags(ios::left)<<setw(5)<<" - "<<"|\n";
			cout<<"======================================\n";}
		cout<<"\n\t\t\t\t Menunggu persetujuan dosen Pembimbing"<<endl;
	string k[100]={"Tahun Akademik : 2020","Kurikulum : 2014","Tahun Masuk : 2019 ( Ganjil )","Semester : 2","SKS Lulus : 19","IP sebelumnya : 3.74","IPK : 3.74","SKS yang boleh diambil : 24","Status : Diterima"};
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik", "Rangkaian Logika", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia"};
 	int sks[10]={2,3,2,3,2,1,2,3,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1215","ES1216","ES1217"};
	char nilai[10]={'T','T','T','T','T','T','T','T','T'};
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|       Halaman KRS  | SIA UNRAM  |  Cok Indah Purnama Putri   |Elektro  |\n";
	cout<<"-------------------------------------------------------------------------\n";
	for (i=1;i<=10;i++)
	{cout<<k[i]<<"\n";}
 	cout<<"======================================================\n";
 	cout<<"|    Kode MK     |      Mata Kuliah     | SKS | Nilai|\n";
 	cout<<"=====================================================\n";
 	for(int i=0;i<8;i++){
	for (i=0;i<=8;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(16)<<kode[i]<<"| "<<setw(21)<<mk[i]<<"| "<<setw(4)<<sks[i]<<"| "<<setw(5)<<nilai[i]<<"|\n";}}
  	cout<<"\n=======================================================\n";
}
void matkul()
{	
	cout<<"--------------------------------------------------------\n";
	cout<<"|     Mata Kuliah        |    Cok Indah Purnama Putri   |\n";
	cout<<"--------------------------------------------------------\n"; 
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik", "Rangkaian Logika", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia", "Ekonomi Teknik","BAHAN LISTRIK / 2014"};
 	int sks[100]={2,3,2,3,2,1,2,3,2,2,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1215","ES1216","ES1217", "ES1150","ES1105"};
	int smstr[20]={2,2,2,2,2,2,2,2,2,1,1};

 	cout<<"=======================================================================================\n";
 	cout<<"|    Kode MK     |      Mata Kuliah                  | Kelas | SKS | Sifat | Semester |\n";
 	cout<<"=======================================================================================\n";
 	for(int i=0;i<10;i++){
	for (i=0;i<=10;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(16)<<kode[i]<<"| "<<setw(34)<<mk[i]<<"|       "<<setw(3)<<"| "<<setw(3)<<sks[i]<<"|       "<<setw(3)<<"| "<<setw(8)<<smstr[i]<<"|\n";}}
  	cout<<"\n=======================================================================================\n";
}
main()
{
	int pilih;
	char choose, choosed;
	string usser, pass;
	char pilihan;
	ulang : 
	cout<<"===============================================\n";
	cout<<"\tSistem Informasi Akademik\n";
	cout<<"Cara mudah bagi mahasiswa untuk melakukan\n";
	cout<<"pengisian KRSsecara cepat kapanpun, dimanapun\n";
	cout<<"===============================================\n";
	cout<<"Informasi\n";
	cout<<"-Konfirmasi Nomor HP\n";
	cout<<"-Jadwal Perubahan KRS\n";
	cout<<"-Pembayaran SPP/UKT Tahun Akademik\n";
	cout<<"Akun Daring UNRAM Melalui SIA\n ";
	cout<<"Kuesioner Survey Tingkat Kepuasan Layanan BLU\n";
	cout<<"\n";
	cout<<"Akademik\n";
	cout<<" ___________________________________________\n";
	cout<<"|     Masa KRS        |   KRS Perubahan    |\n";
	cout<<"| 27 Jan 20-14 Feb 20 | 2 Mar 20-6 Mar 20  |\n";
	cout<<"|---------------------|--------------------| \n";
	cout<<"|   Input Nilai       |     Perkuliahan    | \n";
	cout<<"| 17 Des 19-28 Mar 20 | 17 Feb 20-15 May 20| \n";
	cout<<"|_____________________|____________________| \n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Single Sign On \n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t Halaman Login SIA UNRAM\t\t\t\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t Masukkan Ussername : ";cin>>usser;cout<<"\n";
	cout<<"\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (usser == "F1B019037" && pass == "putri123")
			{
				cout<<"\t\t\t Selamat login anda berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilih;cout<<"\t\t\n";
					if (pilihan=='y' || pilihan=='Y')
					{system("cls");
					goto ulang;}
					if (pilihan=='t' || pilihan=='T')
					{goto selesai;
					cout<<endl;}
			}
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	menu : 
	cout<<"-----------------------------------------------\n";
	cout<<"|SELAMAT DATANG DI SIA, COK INDAH PURNAMA PUTRI|\n";
	cout<<"------------------------------------------------\n";
	cout<<"1. Mahasiswa\n";
	cout<<"2. Nilai\n";
	cout<<"3. KRS\n";
	cout<<"4. Mata Kuliah\n";
	cout<<"Pilih Menu : ";cin>>pilih;
	switch(pilih)
	{
		case (1) : 
		{
			system("cls");
			mahasiswa();
				cout<<"kembali : [y/t] ";cin>>choose;
				if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
				if (choosed=='t' || choosed=='T')
				{goto selesai;}
		}
		break;
		case (2) :
		{
			system("cls");
			nilai();
			cout<<"kembali : [y/t] ";cin>>choose;
			if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
				if (choosed=='t' || choosed=='T')
				{goto selesai;}
		}
		break;
		case (3) : 
		{
			system("cls");
			krs();
				cout<<"kembali : [y/t]";cin>>choose;
				if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
				if (choosed=='t' || choosed=='T')
				{goto selesai;}
		}
		break;
		case (4) :
		{
			system("cls");
			matkul();
				cout<<"kembali : [y/t]";cin>>choose;
				if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
				if (choosed=='t' || choosed=='T')
				{goto selesai;}
		}
		default : 
		{
			cout<<"Tidak ada pilihan yang di pilih\n";
				cout<<"Pilih kembali : [y/t]";cin>>choosed;
				if (choosed=='y' || choosed=='Y')
				{system("cls"); goto menu;}
				if (choosed=='t' || choosed=='T')
				{goto selesai;}
		}
	}
	selesai : 
		cout<<endl;
}
