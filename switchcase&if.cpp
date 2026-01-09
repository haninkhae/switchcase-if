/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main () {
    
    string nama,menu;
    int no_meja, pilihan, porsi, harga, total_bayar, diskon = 0, total_akhir;
    
       
       
    cout<< "Silahkan Pilih Menu Makanan :"<<endl;
    cout<< "1. Bakso        (7000)"<<endl;
    cout<< "2. Mie Ayam     (10000)" <<endl;
    cout<< "3. Kwetiau      (15000)" <<endl;
    cout<< "4. Nasi Goreng	(20000)"<<endl;
    cout<<"\n\n";
        
    cout<<"=================================="<<endl;
    cout<<"Isi data pemesanan : "<<endl;
    cout<<"Nama : ";
    getline(cin, nama);
    cout<<"No meja : ";
    cin>>no_meja;
    cin.ignore();
    cout<<"Menu pesanan : ";
    cin>>pilihan;

    cout<<"=================================="<<endl;
    cout<<"\n";
        
        switch (pilihan) {
            case 1:
                cout<<"1. Bakso"<<endl;
                harga = 7000;
                break;
                
            case 2:
                cout<<"2. Mie Ayam"<<endl;
                harga = 10000;
                break;
                
            case 3:
                cout<<"3. Kwetiau"<<endl;
                harga = 15000;
                break;
             
            case 4:
            	cout<<"4. Nasi Goreng"<<endl;
            	harga = 20000;
            	break;
         
            default:
                cout<<"Menu tidak tersedia, silahkan pilih kembali!"<<endl;
        }
        
    cout<<"Pesan berapa porsi : ";
    cin>>porsi;
    
    total_bayar = harga * porsi;
    
        if (total_bayar >=  100000) {
            diskon = 15;
            cout<<"Anda mendapatkan diskon 15%"<<endl;
    }
        else if (total_bayar >=  75000) {
            diskon = 10;
            cout<<"Anda mendapatkan diskon 10%"<<endl;
    }
        else if (total_bayar >=  50000) {
            diskon = 5;
            cout<<"Anda mendapatkan diskon 5%"<<endl;
    }
        else {
            cout<<"Maaf anda belum mendapatkan diskon"<<endl;
    } 
    
    total_akhir = total_bayar - (total_bayar * diskon / 100);
    
    cout<<"\n\n";
    cout<<"========= NOTA PEMBAYARAN ========="<<endl;
    cout<<"Nama         : "<<nama<<"  No meja : "<<no_meja<<endl;
    cout<<"Menu         : "<<pilihan<<endl;
    cout<<"Harga        : Rp "<<harga<<endl;
    cout<<"Jumlah       : "<<porsi<<endl;
    cout<<"Total        : Rp "<<total_akhir<<endl;
    cout<<"=================================="<<endl;
    
    return 0;
}