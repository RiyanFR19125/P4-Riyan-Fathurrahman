#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int astronot_mars(){   
	cout<<"RIYAN FATHURRAHMAN\n";
	cout<<"F1B019125\n";
	cout<<"KELOMPOK 25\n";
	cout<<"============================================\n";
	cout<<"            TUGAS TAMBAHAN P4               \n";
	cout<<"============================================\n\n";
	system("pause");
}

int main()
{
	astronot_mars();
	int i, nilai, benar=0, salah=0;
	string nim, pass;
	char pilihlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                          SELAMAT DATANG\n";
	cout<<"                                                DI\n";
	cout<<"                                           QUIZ COVID-19\n";
	cout<<"                           =============================================\n";
	cout<<"                                    Silahkan Login Terlebih Dahulu!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan NIM : ";cin>>nim;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (nim == "f1b019125" && pass == "1")
			{
				cout<<"\t\t\t         Login Berhasil!\t\t\n";
				system("pause");
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkancobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihlogin;cout<<"\t\t\n";
					if (pilihlogin=='y' || pilihlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihlogin=='t' || pilihlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Nama lain dari virus corona adalah?\n";
	string pilgan1[50]={"a. Corvid-19 ","b. Covid-19","c. Colorna","d. Merana"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
cout<<"2. Daerah asal kemunculan pertama kali virus ini adalah di...\n";
    string pilgan2[50]={"a. Wuhan","b. Medan","c. Seoul","d. Vietnam"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3. COVID-19 bisa menular melalui, Kecuali...\n";
	string pilgan3[50]={"a. Tatapan Si Doi","b. Hidung","c. Tangan","d. Mulut "};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Apa nama alat yang digunakan oleh tenega medis?\n";
	string pilgan4[50]={"a. OPD","b. PDP","c. APD","d. DBD"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";       
cout<<"5. Apakah nama organisasi kesehatan dunia?\n";
    string pilgan5[50]={"a. PSBB","b. GLBB","c. PBB","d. WHO"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Salah satu cara pencegahan terinfeksi virus adalah, KECUALI?\n";
	string pilgan6[50]={"a. Jaga jarak","b. Sering mencuci tangan","c. Nongkrong ","d. Memakai masker"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Pertolongan Pertama saat melihat seseorang yang mulai terinfeksi Virus ini di tempat umum adalah...\n";
	string pilgan7[50]={"a. Tidak Menyentuh dan memanggil petugas Kesehatan","b. Mengobati dengan P3k","c. Memberi Nafas Buatan","d. Memberi Minum"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Cara pencegahan bersekala nasional yang diterapkan pemerintah adalah?\n";
	string pilgan8[50]={"a. KARANTINA NASIONAL","b. PSBB","c. LOCKDOWN","d. SOSIAL DISTANCING"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Negara dengan jumlah terinfeksi terbanyak saat ini adalah?\n";
	string pilgan9[50]={"a. amerika serikat","b. jepang","c. china","d. korea"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Waktu minimal yang disarankan untuk karantina mandiri adalah?\n";
	string pilgan10[50]={"a. 7 Hari","b. 14 Hari","c. 7 Bulan","d. 14 Bulan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Penilaian :"<<endl;
		nilai = benar*10;
		cout<<"    Jawaban Benar : "<<benar<<" soal "<<endl;
		cout<<"    Jawaban Salah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
				cout<<"Lihat Kunci Jawaban?[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{
						cout<<"1. Nama lain dari virus corona adalah? Covid-19\n";
						cout<<"2.  Daerah asal kemunculan pertama kali virus ini adalah di...? Wuhan\n";
						cout<<"3. COVID-19 bisa menular melalui, Kecuali...?tatapan si doi\n";
						cout<<"4. Apa nama alat yang digunakan oleh tenega medis? APD\n";
						cout<<"5. Apakah nama organisasi kesehatan dunia?WHO\n";
						cout<<"6. Salah satu cara pencegahan terinfeksi virus adalah, KECUALI?NONGKRONG\n";
						cout<<"7. Pertolongan Pertama saat melihat seseorang yang mulai terinfeksi Virus ini di tempat umum adalah Tidak Menyentuh dan memanggil petugas Kesehatan\n";
						cout<<"8. Cara pencegahan bersekala nasional yang diterapkan pemerintah adalah? SOSIAL DISTANCING\n";
						cout<<"9. Negara dengan jumlah terinfeksi terbanyak saat ini adalah?AMERIKA SERIKAT\n";
						cout<<"10. Waktu minimal yang disarankan untuk karantina mandiri adalah? 14 Hari\n";
						cout<<"\n\n\n==========================="<<endl;
						cout<<"Program Selesai, Terimakasi\n";
						cout<<"==========================="<<endl;
					}
					
					if (pilihan=='t' || pilihan=='T')
					{
					cout<<"==========================="<<endl;
					cout<<"Program Selesai, Terimakasi\n";
					cout<<"==========================="<<endl;
					}	
}
