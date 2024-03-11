#include <iostream>
using namespace std;
#include <string.h> 

//Fungsi untuk menghitung total di menu makanan
int Sub_total_makanan(int total_bayar_makanan1, int total_bayar_makanan2, int total_bayar_makanan3, int total_bayar_makanan4, int total_bayar_makanan5, int total_bayar_makanan6, int total_bayar_makanan7, int total_bayar_makanan8)
{
  int Sub_total_makanan = total_bayar_makanan1 + total_bayar_makanan2 + total_bayar_makanan3 + total_bayar_makanan4 + total_bayar_makanan5 + total_bayar_makanan6 + total_bayar_makanan7 + total_bayar_makanan8;
  return Sub_total_makanan;
}

//Fungsi untuk menghitung total di menu minuman
int Sub_total_minuman(int total_bayar_minuman1, int total_bayar_minuman2, int total_bayar_minuman3, int total_bayar_minuman4, int total_bayar_minuman5, int total_bayar_minuman6, int total_bayar_minuman7)
{
  int Sub_total_minuman = total_bayar_minuman1 + total_bayar_minuman2 + total_bayar_minuman3 + total_bayar_minuman4 + total_bayar_minuman5 + total_bayar_minuman6 + total_bayar_minuman7;
  return Sub_total_minuman;
}

//Fungsi untuk menghitung total di menu dessert
int Sub_total_dessert(int total_bayar_dessert1, int total_bayar_dessert2, int total_bayar_dessertS3, int total_bayar_dessert4, int total_bayar_dessert5, int total_bayar_dessert6, int total_bayar_dessert7, int total_bayar_dessert8)
{
  int Sub_total_dessert = total_bayar_dessert1 + total_bayar_dessert2 + total_bayar_dessertS3 + total_bayar_dessert4 + total_bayar_dessert5 + total_bayar_dessert6 + total_bayar_dessert7 + total_bayar_dessert8;
  return Sub_total_dessert;
}



int main() {
  //deklarasi variabel
  int  pesanan, jumlah, total_makanan,cari, jenis_makanan, jenis_minuman, jenis_dessert, JenisMakanan, JenisMinuman, 
  JenisDessert, TotalBayar, hasil,Harga_SetelahDiskon, pembayaran, nominal, kembalian, kembali;
  long nomor;
  float diskon;
  char repeat,jawab;
  string tipe;
  
  string menu [3] = {"1. Makanan", "2. Minuman", "3. Dessert"};
  string makanan [8] = {" | 1. Nasi Padang                   | Rp.  20.000   | ", " | 2. Chicken Katsu                 | Rp.  20.000   |", " | 3. Mie Goreng                    | Rp.  10.000   |", " | 4. Nasi Omelate                  | Rp.  13.000   |", " | 5. Nasi Goreng                   | Rp.   15.000  |", " | 6. Ayam Bakar                    | Rp.   17.000  |", " | 7. Bebek Goreng                  | Rp.   17.000  |", " | 8. Mie Ayam                      | Rp.   15.000  |"  };
  string minuman [7] = {" | 1. Frappuchino Choco Chip      | Rp.  15.000   |", " | 2. Mango Jely Milk Ice         | Rp.   8.000   |", " | 3. Nutella Chocolate           | Rp.  10.000   |", " | 4. Ice Tiramisu Latte          | Rp.  13.000   |", " | 5. Coffe Milk Boba             | Rp.  13.000   |", " | 6. Air Mineral                 | Rp.   3.000   |", " | 7. Lemon Tea                   | Rp.   8.000   |"};
  
  string dessert [8] = {" | 1. French Fries                 | Rp.   6.000   |", " | 2. Ice Cream                    | Rp.   8.000   |", " | 3. Yogurt                       | Rp.   7.000   |", " | 4. Tiramissu                    | Rp.  10.000   |", " | 5. Red Velvet                   | Rp.  10.000   |", " | 6. Es Doger                     | Rp.   8.000   |", " | 7. Es Cendol                    | Rp.   7.000   |", " | 8. Sosis Bakar                  | Rp.   8.000   |"};
  
  char nama[100],  nama_panggilan[100], bulan[100], kata1[100], kata2[100], harapan1[100], harapan2[100];
  
  int total_bayar_makanan1 = 0, total_bayar_makanan2 = 0, total_bayar_makanan3 = 0, total_bayar_makanan4 = 0, 
  total_bayar_makanan5 = 0, total_bayar_makanan6 = 0, total_bayar_makanan7 = 0, total_bayar_makanan8 = 0;
  int total_bayar_minuman1 = 0, total_bayar_minuman2 = 0, total_bayar_minuman3 = 0, total_bayar_minuman4 = 0, 
  total_bayar_minuman5 = 0, total_bayar_minuman6 = 0, total_bayar_minuman7 = 0;  
  int total_bayar_dessert1 = 0, total_bayar_dessert2 = 0, total_bayar_dessert3 = 0, total_bayar_dessert4 = 0, 
  total_bayar_dessert5 = 0, total_bayar_dessert6 = 0, total_bayar_dessert7 = 0, total_bayar_dessert8 = 0;
  
  
  cout << "SELAMAT DATANG DI AYO MAKAN\n";
  cout << "===========================\n";
  cout << endl;
  
  //data pengguna
  cout << "SILAHKAN ISI DATA ANDA\n";
  cout << "======================\n";
  cout << "Masukkan nama anda          : ";
  cin.getline(nama,100);
  cout << "Masukkan nomor telepon anda : ";
  cin  >> nomor;
  cout << "----------------------\n";
  cout << endl;

  //perulangan untuk mengulang statement 70-522 sesuai kondisi
  do{  
  //perulangan untuk menampilkan string menu
  cout << "====MAU PESAN APA NIH======\n";\
  for (int jenis = 0; jenis < 3; jenis++)
    {
      cout << menu[jenis] << endl;
    } 
  //menginput menu yang ingin di cari
  cout << "Mau cari apa : ";
  cin  >> cari; 
  cout << endl;

  //selection dengan switch dan if else
  switch (cari)
  {
    //jika user menginput 1 maka akan menjalankan case 1
    case 1 : cout << "                  SILAHKAN PILIH MENU               \n"; 
             cout << " ---------------------------------------------------\n";                  
             cout << "  __________________________________________________\n";
             cout << " |==================================================|\n";
             cout << " |                     MENU MAKANAN                 |\n";
             cout << " |==================================================|\n";               
             for (int menu_makanan = 0; menu_makanan < 8; menu_makanan++) //perulangan untuk menampilkan string makanan                
             {
               cout << " |                                  |               |\n";
               cout << makanan[menu_makanan] << endl;
               cout << " |                                  |               |\n";
               cout << " |==================================================|\n";
             }

              //perulangan untuk mengulang statement 100-223 sesuai kondisi
              do{
                //menginput menu makanan yang ingin di pesan
               cout << "Masukkan Nomor yang ingin di pesan : ";
               cin  >> pesanan;
               cout << endl;
               if (pesanan == 1) //jika user menginput 1 maka program akan menjalankan statement 106-115
               {
                 cout << " |==================================================|\n";
                 cout << makanan[0] << endl; //menampilkan string                                                  
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : " ; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan1 = jumlah * 20000; //menghitung total_bayar_makanan1
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Nasi Padang = " << jumlah << " * " << "Rp. " << 20000 << " = " << "Rp. " << total_bayar_makanan1 << endl;            
               }
               
               else if (pesanan == 2) //jika user menginput 2 maka program akan menjalankan statement 120-129
               {
                 cout << " |==================================================|\n";
                 cout << makanan[1] << endl; //menampilkan string                                       
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan2 = jumlah * 20000; //menghitung total_bayar_makanan2
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Chicken Katsu = " << jumlah << " * " << "Rp. " << 20000 << " = " <<  "Rp. " << total_bayar_makanan2 << endl;   
               }

               else if (pesanan == 3) //jika user menginput 3 maka program akan menjalankan statement 134-143
               {
                 cout << " |==================================================|\n";
                 cout << makanan[2] << endl; //menampilkan string                                       
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan3 = jumlah * 10000; //menghitung total_bayar_makanan3
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Mie Goreng   = " << jumlah << " * " << "Rp. " << 10000 << " = " <<  "Rp. " << total_bayar_makanan3 << endl; 
               }

               else if (pesanan == 4) //jika user menginput 4 maka program akan menjalankan statement 148-157
               {
                 cout << " |==================================================|\n";
                 cout << makanan[3] << endl; //menampilkan string                                      
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan4 = jumlah * 13000; //menghitung total_bayar_makanan4
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Nasi Omelate  = " << jumlah << " * " << "Rp. " << 13000 << " = " <<  "Rp. " << total_bayar_makanan4 << endl;     
               }

               else if (pesanan == 5) //jika user menginput 5 maka program akan menjalankan statement 162-171
               {
                 cout << " |==================================================|\n";
                 cout << makanan[4] << endl; //menampilkan string                                       
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan5 = jumlah * 15000; //menghitung total_bayar_makanan5
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Nasi Goreng = " << jumlah << " * " << "Rp. " << 15000 << " = " <<  "Rp. " << total_bayar_makanan5 << endl;  
               }

               else if (pesanan == 6) //ika user menginput 6 maka program akan menjalankan statement 176-185
               {
                 cout << " |==================================================|\n";
                 cout << makanan[5] << endl; //menampilkan string                                       
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan6 = jumlah * 17000; //menghitung total_bayar_makanan6
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Ayam Bakar = " << jumlah << " * " << "Rp. " << 17000 << " = " <<  "Rp. " << total_bayar_makanan6 << endl; 
               }

               else if (pesanan == 7) //jika user menginput 7 maka program akan menjalankan statement 190-199
               {
                 cout << " |==================================================|\n";
                 cout << makanan[6] << endl; //menampilkan string                                       
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan7 = jumlah * 17000;  //menghitung total_bayar_makanan7
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Bebek Goreng = " << jumlah << " * " << "Rp. " << 17000 << " = " <<  "Rp. " << total_bayar_makanan7 << endl;   
               }

               else if (pesanan == 8) //jika user menginput 8 maka program akan menjalankan statement 204-213
               {
                 cout << " |==================================================|\n";
                 cout << makanan[7] << endl; //menampilkan string                                        
                 cout << " |==================================================|\n";
                 cout << endl;
                 cout << "Berapa porsi yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                 cin  >> jumlah;
                 total_bayar_makanan8 = jumlah * 15000; //menghitung total_bayar_makanan8
                 cout << endl;
                 //menampilkan yang di pesan
                 cout << "Mie Ayam = " << jumlah << " * " << "Rp. " << 15000 << " = " <<  "Rp. " << total_bayar_makanan8 << endl;    
               }

               else //jika user menginput lebih dari 8 maka program akan menjalankan statment 218
               {
                 cout << "MENU TIDAK DITEMUKAN\n";
               }
              cout << endl;
              cout << "Apakah ingin memesan menu makanan yang lain [Y/N]: "; //menginput untuk melakukan perulanagan atau tidak
              cin  >> repeat;
              cout << endl;
              }while (repeat == 'Y' || repeat == 'y'); //kondisi untuk melakukan perulangan
              cout << endl;
              //menampilkan total harga makanan yang di pesan
              cout << "Total Makanan yang di pesan = Rp. " << Sub_total_makanan(total_bayar_makanan1, 
              total_bayar_makanan2, total_bayar_makanan3, total_bayar_makanan4, total_bayar_makanan5, 
              total_bayar_makanan6, total_bayar_makanan7, total_bayar_makanan8) << endl;   
              break;
                                                                                                                                                
    //jika user menginput 3 maka akan menjalankan case 2                 
    case 2 :     cout << "                 SILAHKAN PILIH MENU                  \n";                          
                 cout << " -------------------------------------------------\n";
                 cout << "  ________________________________________________\n";
                 cout << " |================================================|\n";
                 cout << " |                   MENU MINUMAN                 |\n";
                 cout << " |================================================|\n";
                 for (int menu_minuman = 0; menu_minuman < 7; menu_minuman++)  //perulangan untuk menampilkan string minuman
                   {
                     cout << " |                                |               |\n";
                     cout << minuman[menu_minuman] << endl;
                     cout << " |                                |               |\n";
                     cout << " |================================================|\n";
                   }               
                 //perulangan untuk mengulang statement 249-359 sesuai kondisi
                 do{
                 //menginput menu minuman yang ingin di pesan
                 cout << "Masukkan Nomor yang ingin di pesan : ";
                 cin  >> pesanan;
                 cout << endl;
                 if (pesanan == 1) //jika user menginput 1 maka program akan menjalankan statement 254-263
                 {
                   cout << " |================================================|\n";
                   cout << minuman[0] << endl; //menampilkan string   
                   cout << " |================================================|\n";                                                          
                   cout << endl;
                   cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                   cin  >> jumlah;
                   total_bayar_minuman1 = jumlah * 15000; //menghitung total_bayar_minuman1
                   cout << endl;
                   //menampilkan yang di pesan
                   cout << "Frappuchino Choco Chip  = " << jumlah << " * " << "Rp. " << 15000 << " = " <<  "Rp. " << total_bayar_minuman1 << endl;   
                 }

                 else if (pesanan == 2) //jika user menginput 2 maka program akan menjalankan statement 269-277
                 {
                   cout << " |================================================|\n";
                   cout << minuman[1] << endl; //menampilkan string   
                   cout << " |================================================|\n";  
                   cout << endl;
                   cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                   cin  >> jumlah;                       
                   total_bayar_minuman2 = jumlah * 8000; //menghitung total_bayar_minuman2
                   cout << endl;
                   //menampilkan yang di pesan
                   cout << "Mango Jely Milk Ice = " << jumlah << " * " << "Rp. " << 8000 << " = " <<  "Rp. " << total_bayar_minuman2 << endl; 
                 }

                 else if (pesanan == 3) //jika user menginput 3 maka program akan menjalankan statement 282-294
                 {
                   cout << " |================================================|\n";
                   cout << minuman[2] << endl; //menampilkan string   
                   cout << " |================================================|\n";  
                   cout << endl;
                   cout << "Ice / Hot : "; //menginput tipe minuman
                   cin  >> tipe;
                   cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                   cin  >> jumlah;
                   cout << endl;
                   total_bayar_minuman3 = jumlah * 10000; //menghitung total_bayar_minuman3
                   //menampilkan yang di pesan
                   cout << "(" << tipe << ")" " Nutella Chocolate = " << jumlah << " * " << "Rp. " << 10000 << " = " <<  
                   "Rp. " << total_bayar_minuman3 << endl;
                 }

                 else if (pesanan == 4) //jika user menginput 4 maka program akan menjalankan statement 299-308
                 {
                   cout << " |================================================|\n";
                   cout << minuman[3] << endl; //menampilkan string   
                   cout << " |================================================|\n";  
                   cout << endl;
                   cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                   cin  >> jumlah;
                   cout << endl;
                   total_bayar_minuman4 = jumlah * 13000; //menghitung total_bayar_minuman4
                   //menampilkan yang di pesan
                   cout << "Ice Tiramisu Latte  = " << jumlah << " * " << "Rp. " << 13000 << " = " <<  "Rp. " << total_bayar_minuman4 << endl; 
                 }

                 else if (pesanan == 5) //jika user menginput 5 maka program akan menjalankan statement 313-321
                 {
                    cout << " |================================================|\n";
                    cout << minuman[4] << endl; //menampilkan string   
                    cout << " |================================================|\n";
                    cout << endl;
                    cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                    cin  >> jumlah;
                    total_bayar_minuman5 = jumlah * 13000; //menghitung total_bayar_minuman5
                    //menampilkan yang di pesan
                    cout << "Coffe Milk Boba  = " << jumlah << " * " << "Rp. " << 13000 << " = " <<  "Rp. " << total_bayar_minuman5 << endl;   
                 }

                 else if (pesanan == 6) //jika user menginput 6 maka program akan menjalankan statement 324-334
                 {
                   cout << " |================================================|\n";
                   cout << minuman[5] << endl; //menampilkan string   
                   cout << " |================================================|\n";
                   cout << endl;
                   cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                   cin  >> jumlah;
                   total_bayar_minuman6 = jumlah * 3000; //menghitung total_bayar_minuman6
                   //menampilkan yang di pesan
                   cout << "Air Mineral  = " << jumlah << " * " << "Rp. " << 3000 << " = " <<  "Rp. " << total_bayar_minuman6 << endl;   
                 }

                 else if (pesanan == 7) //jika user menginput 7 maka program akan menjalankan statement 339-349
                 {
                   cout << " |================================================|\n";
                   cout << minuman[6] << endl; //menampilkan string   
                   cout << " |================================================|\n";
                   cout << endl;
                   cout << "Ice / Hot : "; //menginput tipe minuman
                   cin  >> tipe;
                   cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
                   cin  >> jumlah;
                   total_bayar_minuman7 = jumlah * 8000; //menghitung total_bayar_minuman7
                   //menampilkan yang di pesan
                   cout << "(" << tipe << ")" " Lemon Tea  = " << jumlah << " * " << "Rp. " << 8000 << " = " <<  "Rp. " << total_bayar_minuman7 << endl;   
                 }

                 else //jika user menginput lebih dari 7 maka program akan menjalankan statment 354
                 {
                   cout << "MENU TIDAK DITEMUKAN\n";
                 }              
                cout << endl;
                cout << "Apakah ingin memesan menu minuman yang lain [Y/N]: "; //menginput untuk melakukan perulanagan atau tidak
                cin  >> repeat;
                cout << endl;
                }while (repeat == 'Y' || repeat == 'y'); //kondisi untuk melakukan perulangan
                cout << endl;
                //menampilkan total harga makanan yang di pesan
                cout << "Total Minuman yang di pesan = Rp. " << Sub_total_minuman(total_bayar_minuman1, total_bayar_minuman2, 
                total_bayar_minuman3, total_bayar_minuman4, total_bayar_minuman5, total_bayar_minuman6, total_bayar_minuman7) << endl;
                break;

    //jika user menginput 3 maka akan menjalankan case 3        
    case 3 : cout << "                  SILAHKAN PILIH MENU                  \n";                          
             cout << " ---------------------------------------------------\n";          
             cout << "  _________________________________________________\n";
             cout << " |=================================================|\n";
             cout << " |                    Menu Dessert                 |\n";
             cout << " |=================================================|\n";
             for (int menu_dessert = 0; menu_dessert < 8; menu_dessert++) //perulangan untuk menampilkan string minuman
             {
               cout << " |                                 |               |\n";
               cout << dessert[menu_dessert] << endl;
               cout << " |                                 |               |\n";
               cout << " |=================================================|\n";
             }       
             //perulangan untuk mengulang statement 384-506 sesuai kondisi
             do{
             //menginput menu dessert yang ingin di pesan
             cout << "Masukkan Nomor yang ingin di pesan : ";
             cin  >> pesanan;
             cout << endl;
             if (pesanan == 1) //jika user menginput 1 maka program akan menjalankan statement 389-398
             {
               cout << " |=================================================|\n";
               cout << dessert[0] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert1 = jumlah * 6000; //menghitung total_bayar_dessert1
               cout << endl;
               //menampilkan yang di pesan
               cout << "French Fries = " << jumlah << " * " << "Rp. " << 6000 << " = " <<  "Rp. " << total_bayar_dessert1 << endl;
             }

             else if (pesanan == 2) //jika user menginput 2 maka program akan menjalankan statement 404-412
             {
               cout << " |=================================================|\n";
               cout << dessert[1] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert2 = jumlah * 8000; //menghitung total_bayar_dessert2
               cout << endl;
               //menampilkan yang di pesan
               cout << "Ice Cream = " << jumlah << " * " << "Rp. " << 8000 << " = " <<  "Rp. " << total_bayar_dessert2 << endl;
             }

             else if (pesanan == 3) //jika user menginput 3 maka program akan menjalankan statement 417-426
             {
               cout << " |=================================================|\n";
               cout << dessert[2] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert3 = jumlah * 7000; //menghitung total_bayar_dessert3
               cout << endl;
               //menampilkan yang di pesan
               cout << "Yogurt = " << jumlah << " * " << "Rp. " << 7000 << " = " <<  "Rp. " << total_bayar_dessert3 << endl;
             }

             else if (pesanan == 4) //jika user menginput 4 maka program akan menjalankan statement 431-440
             {
               cout << " |=================================================|\n";
               cout << dessert[3] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert4 = jumlah * 10000;  //menghitung total_bayar_dessert4
               cout << endl;
               //menampilkan yang di pesan
               cout << "Tiramissu = " << jumlah << " * " << "Rp. " << 10000 << " = " <<  "Rp. " << total_bayar_dessert4 << endl;
             }

             else if (pesanan == 5) //jika user menginput 5 maka program akan menjalankan statement 445-454
             {
               cout << " |=================================================|\n";
               cout << dessert[4] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert5 = jumlah * 10000; //menghitung total_bayar_dessert5
               cout << endl;
               //menampilkan yang di pesan
               cout << "Red Velvet = " << jumlah << " * " << "Rp. " << 10000 << " = " <<  "Rp. " << total_bayar_dessert5 << endl;
             }

             else if (pesanan == 6) //jika user menginput 6 maka program akan menjalankan statement 459-468
             {
               cout << " |=================================================|\n";
               cout << dessert[5] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert6 = jumlah * 8000; //menghitung total_bayar_dessert6
               cout << endl;
               //menampilkan yang di pesan
               cout << "Es Doger = " << jumlah << " * " << "Rp. " << 8000 << " = " <<  "Rp. " << total_bayar_dessert6 << endl;
             }

             else if (pesanan == 7) //jika user menginput 7 maka program akan menjalankan statement 473-482
             {
               cout << " |=================================================|\n";
               cout << dessert[6] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert7 = jumlah * 7000; //menghitung total_bayar_dessert7
               cout << endl;
               //menampilkan yang di pesan
               cout << "Es Cendol = " << jumlah << " * " << "Rp. " << 7000 << " = " <<  "Rp. " << total_bayar_dessert7 << endl;
             }

             else if (pesanan == 8) //jika user menginput 8 maka program akan menjalankan statement 487-496
             {
               cout << " |=================================================|\n";
               cout << dessert[7] << endl; //menampilkan string   
               cout << " |=================================================|\n";
               cout << endl;
               cout << "Berapa yang ingin di pesan : "; //menginput jumlah yang ingin di pesan
               cin  >> jumlah;
               total_bayar_dessert8 = jumlah * 8000; //menghitung total_bayar_dessert8
               cout << endl;
               //menampilkan yang di pesan
               cout << "Sosis Bakar = " << jumlah << " * " << "Rp. " << 8000 << " = " <<  "Rp. " << total_bayar_dessert8 << endl;
             }

             else //jika user menginput lebih dari 8 maka program akan menjalankan statment 501
             {
               cout << "MENU TIDAK DITEMUKAN\n";
             }
               cout << endl;
               cout << "Apakah ingin memesan menu dessert yang lain [Y/N]: "; //menginput untuk melakukan perulanagan atau tidak
               cin  >> repeat;
               cout << endl; 
               }while (repeat == 'Y' || repeat == 'y'); //kondisi untuk melakukan perulangan
               cout << endl;
               //menampilkan yang di pesan
               cout << "Total Dessert yang di pesan = Rp. " << Sub_total_dessert(total_bayar_dessert1, 
               total_bayar_dessert2, total_bayar_dessert3, total_bayar_dessert4, total_bayar_dessert5, total_bayar_dessert6, 
               total_bayar_dessert7, total_bayar_dessert8) << endl;
               break;
             
    default : cout << "MENU TIDAK DITEMUKAN\n"; //jika user memasukkan lebih dari 3 maka program akan langsung menjalankan staement 515
  }
                   
    cout << endl;    
    //menginput untuk melakukan perulanagan atau tidak
    cout << "Apakah ingin kembali ke menu utama untuk memesan lagi1 ? [jika iya tekan 0] / [jika tidak tekan 1]: "; 
    cin  >> kembali;
    cout << endl;
    }while(kembali == 0); //kondisi untuk melakukan perulangan
  
      cout << "\033[2J\033[2H"; //untuk membersihkan output yang tampil di atas
      //menghitung totalbayar keseluruhan pesanan
      TotalBayar = Sub_total_makanan(total_bayar_makanan1, total_bayar_makanan2, total_bayar_makanan3, total_bayar_makanan4,         
      total_bayar_makanan5, total_bayar_makanan6, total_bayar_makanan7, total_bayar_makanan8) + 
      Sub_total_minuman(total_bayar_minuman1, total_bayar_minuman2, total_bayar_minuman3, total_bayar_minuman4, 
      total_bayar_minuman5, total_bayar_minuman6, total_bayar_minuman7) + Sub_total_dessert(total_bayar_dessert1, 
      total_bayar_dessert2, total_bayar_dessert3, total_bayar_dessert4, total_bayar_dessert5, total_bayar_dessert6, 
      total_bayar_dessert7, total_bayar_dessert8);

      // menginput string yang akan di bandingkan
      cout << "KARENA AKHIR TAHUN KAMI MAU KASIH DISKON NI HEHEHEH TAPI SEBELUM ITU MOHON DI ISI DULU PERTANYAANNYA\n";
      cout << "----------------------------------------------------------------------------------------------------\n";     
      cout << "Masukkan nama panggilanmu     : ";
      cin  >> nama_panggilan;
      cout << "Apa nama bulan kelahiran kamu : ";
      cin  >> bulan;
      cout << endl;
      cout << "satu kata untuk tahun ini   : ";
      cin  >> kata1;
      cout << "Satu kata untuk tahun depan : ";
      cin  >> kata2;
      cout << endl;
      cout << "Sebutkan satu kata harapan untuk kamu pada tahun ini   : ";
      cin  >> harapan1;
      cout << "Sebutkan satu kata harapan untuk kamu pada tahun depan : ";
      cin  >> harapan2;     
      cout << endl;
  
      cout << "--------------------------------------------------------------\n";
      cout << "                            AYO MAKAN                         \n";
      cout << "--------------------------------------------------------------\n";
      cout << "            Total Bayar keseluruhan     = Rp. " << TotalBayar << endl; //menampilkan total bayar keseluruhan
      cout << "--------------------------------------------------------------\n";
      cout << "                  TERIMAKASIH UNTUK PESANANNYA               \n";
      cout << "                        ENJOY YOUR FOOD                      \n";
      cout << "--------------------------------------------------------------\n";
      cout << endl;
      hasil = strcmp(nama_panggilan,bulan); //membandingkan dua buah string
      if (hasil > 0) //kondisi 1
      {        
        cout << "      Selamat anda mendapatkan voucher potongan sebesar 15%";
        diskon = 0.15;
      }
      else if (hasil < 0) // kondisi 2
      {
        cout << "      Selamat anda mendapatkan voucher potongan sebesar 10%";
        diskon = 0.1;
      }
      else //kondisi 3
      {
        cout << "      Wahhhhh ini hari beruntungmu anda mendapatkan diskon 20%";
        diskon = 0.2;
      }
      cout << endl;
      Harga_SetelahDiskon = TotalBayar - (TotalBayar * diskon); //menghitung harga diskon
      cout << " Total Bayar keseluruhan = Rp. " << Harga_SetelahDiskon << endl; //menampilkan total setelah diskon
      cout << "--------------------------------------------------------------\n";
      cout << endl;
      do{ // perulangan statement 587-641
      cout << "          Pembayaran         \n";
      cout << "-----------------------------\n";
      cout << " 1. Debit\n";
      cout << " 2. Uang Tunai\n";
      cout << " Silahkan pilih ingin melakukan pembayaran dengan apa ? ";
      cin  >> pembayaran;
      switch(pembayaran) //pemilihan
        {
          case 1 : cout << endl; //kondisi 1 debit
                   cout << "Masukkan nominal pembayaran anda :"; //menginput nomimal
                   cin  >> pembayaran;
                   if(pembayaran > Harga_SetelahDiskon) //kondisi jika nomimal pembayaran lebih
                   { 
                     kembalian = pembayaran - Harga_SetelahDiskon; //menghitung uang kembali
                     cout << endl;
                     cout << "Total nominal kembalian anda = Rp. " << kembalian << endl; //menampilkan nominal uang kembali
                     cout << "PESANAN AKAN SEGARA DI ANTAR\n";
                   }
                     
                   else if (pembayaran < Harga_SetelahDiskon) //kondisi jika nomimal pembayaran kurang
                   {
                     cout << "MAAF NOMINAL YANG ANDA MASUKKAN KURANG DARI HARGA TOTAL PESANAN ANDA\n";
                     cout << "Silahkan masukkan nominal sesuai dengan total pesanan anda : ";
                     cin >> pembayaran;                     
                     if (pembayaran > Harga_SetelahDiskon){ //kondisi jika nomimal pembayaran lebih
                     kembalian = pembayaran - Harga_SetelahDiskon; //menghitung uang kembali
                     cout << endl;
                     cout << "Total nominal kembalian anda = Rp. " << kembalian << endl; //menampilkan nominal uang kembali
                     cout << "PESANAN AKAN SEGARA DI ANTAR\n";
                     }
                     else if (pembayaran == Harga_SetelahDiskon){ // kondisi jika nominal pembayaran uang pas
                       cout << endl;
                       cout << "PESANAN AKAN SEGARA DI ANTAR\n"; 
                     }
                     else{ //kondisi jika nominal pembayaran tidak memenuhi
                      cout << endl;
                      cout << "JIKA SALDO ANDA KURANG DIHARAPKAN MEMILIH CARA PEMBAYARAN YANG LAIN\n"; 
                     }
                   }
                     
                   else //kondisi jika nominal pembayaran uang pas
                   {  
                     cout << endl;
                     cout << "PESANAN AKAN SEGARA DI ANTAR\n";
                   }
                   break;

          case 2 : cout << endl; //kondisi 2 tunai
                   cout << "PESANAN AKAN SEGARA DI ANTAR\n";
                   break;

          default : cout << "MENU TIDAK DITEMUKAN "; //jika user memasukkan lebih dari 2 maka program akan langsung menjalankan staement 637         
        }
        cout << endl;
        cout << "Apakah anda sudah yakin dengan cara pembayaran anda [Y/N] ? : "; //menginput untuk melakukan perulanagan atau tidak
        cin  >> repeat;
        cout << endl;
        }while (repeat == 'N' || repeat == 'n'); //kondisi untuk melakukan perulangan
        cout << "TERIMAKASIH SUDAH MEMESAN DI AYOK MAKAN MASISSGE DEUSEYO ;)" << endl;

      hasil = strcmp(kata1,kata2); //membandingkan dua buah string
      if (hasil > 0) //kondisi 1
      {
        cout << "SIAPA TAU SEBENTAR LAGI.....\n"; 
      }
      else if (hasil < 0) //kondisi 2
      {
        cout << "TAHUN DEPAN......\n";
      }
      else //kondisi 3
      {
        cout << "SEDIKIT LAGI.......\n";
      }
  

    hasil = strcmp(harapan1,harapan2); //membandingkan 2 buah string
    if (hasil > 0) //kondisi 1
    {
      cout << "SI DIA MULAI DEKET SAMA KAMU :)\n";
    }
    else if (hasil < 0) //kondisi 2
    {
      cout << "YANG KAMU HARAPKAN TERCAPAI\n";
    }
    else //kondisi 3
    {
      cout << "DIA KEMBALI :0\n";
    }
    
  }