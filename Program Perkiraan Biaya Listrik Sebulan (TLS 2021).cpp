//Program Menghitung Perkiraan Biaya Listrik Rumahan Berdasarkan Pemakaian Barang Elektronik (1300 VA - 6.600 VA)//

#include <iostream>
using namespace std;

int main()
{   int  Golongan_A, Golongan_B, Golongan_C, Golongan_D, Golongan_E, KWh, Biaya_Perbulan, Biaya_Pertahun;
    char Golongan,A, B, C, D, E;
    
    Golongan_A==1444.7;
    Golongan_B==1444.7;
    Golongan_C==1444.7;         //Definisikan Masing-Masing Golongan Berdasarkan Biaya per KWh //
    Golongan_D==1444.7;
    Golongan_E==1444.7;
    Golongan == 1444.7;
    
    cout << "Program Menghitung Perkiraan Biaya Listrik Rumahan (Tegangan Rendah) Berdasarkan 5 Golongan Nonsubsidi \n";
    cout << "------------------------------------------------------------------------------------------------------ \n";
    cout << "A. Golongan R-1/ TR daya 900 VA \t (Rp1.444,70/KWh) \n";
    cout << "B. Golongan R-1/ TR daya 1.300 VA \t (Rp1.444,70/KWh) \n";
    cout << "C. Golongan R-1/ TR daya 2.200 VA \t (Rp1.444,70/KWh)\n";
    cout << "D. Golongan R-2/ TR daya 3.500-5.500 VA  (Rp1.444,70/KWh)\n";
    cout << "E. Golongan B-2/ TR daya 6.600 VA \t (Rp1.444,70/KWh)\n";
    cout << "(Berdasarkan Tarif PLN per Januari-Maret 2021)\n";
    cout << "\n";
    
    cout << "Silahkan Masukkan Data Pemakaian Listrik\n";
    cout << "Input Pemakaian Listrik Semasa Sebulan (KWh) = ";
    cin  >> KWh;
    cout << "Input Golongan Listrik Rumah Anda (Golongan A-E) = ";
    cin  >> Golongan;
    
    Biaya_Perbulan=30*KWh*1440.7;
    Biaya_Pertahun=12*30*KWh*1440.7;
    
    cout << "----------------------------------------------------\n";
    
    switch (Golongan)
    {
    case 'A' :
    cout << "Golongan Rumah Anda Adalah R-1/ TR daya 900 VA ";
    break;
    case 'B' :
    cout << "Golongan Rumah Anda Adalah R-1/ TR daya 1.300 VA ";
    break;
    case 'C' :
    cout << "Golongan Rumah Anda Adalah R-1/ TR daya 2.200 VA ";
    break;
    case 'D' :
    cout << "Golongan Rumah Anda Adalah R-1/ TR daya 3.500-5.500 VA ";
    break;
    case 'E' :
    cout << "Golongan Rumah Anda Adalah R-1/ TR daya 6.600 VA ";
    break;
    }
    
    cout << "\nBiaya Lisrtik Anda Perbulan Adalah = Rp "<<Biaya_Perbulan<<"\n";
    cout << "Biaya Listrik Anda Pertahun Adalah = Rp "<<Biaya_Pertahun<<"\n";
   
    return 0;
}



