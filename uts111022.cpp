#include <iostream>
using namespace std;

main () {
	int pil,jmlPaket,jmlTunai,total,harga,GT;
	string nama,namaPaket;
	char tunai;
	
	cout<<"#Paket Donasi Covid-19#"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"\n1. Sembako (Rp. 100.000)\n2. Sembako + Masker (Rp. 150.000)\n3. Sembako + Face Shield (Rp. 250.000)\n4. Sembako + APD(Rp. 500.000)\n5. Sembako + ALL(Rp. 1.000.000)";
	cout<<"-----------------"<<endl;
	cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
	if (pil == 1) {
		namaPaket = "Sembako" ;
		harga = 100000;
	}
	else if (pil == 2) {
		namaPaket = "Sembako + Masker";
		harga = 150000;
	}
	else if (pil == 3) {
		namaPaket = "Sembako + Face Shield";
		harga = 250000;
	}
	else if (pil == 4) {
		namaPaket = "Sembako + APD";
		harga = 500000;
	}
	else if (pil == 5) {
		namaPaket = "Sembako + All";
		harga = 1000000;
	}
	else {
		namaPaket = "salah pilih";
		harga = 0;
	}
	
	cout<<"Masukkan Jumlah Paket yang akan disumbangkan: "; cin>>jmlPaket;
	cout<<"Ingin menambah sumbangan tunai (y/t): "; cin>>tunai;
	
	if (tunai == 'y') {
		cout<<"Jumlah Sumbangan Tunai anda: "; cin>>jmlTunai;
	}
	else {
		jmlTunai = 0;
	}
	
	total  = jmlPaket * harga;
	GT = total + jmlTunai;
	
	cout<<"Terima kasih "<<nama<<" Atas bantuan anda"<<endl;
	cout<<"Paket yang anda sumbangkan: "<<namaPaket<<endl;
	cout<<"Sumbangan Tunai anda: "<<jmlTunai<<endl;
	cout<<"Total yang harus dibayarkan: "<<GT<<endl;
	return 0;
}
