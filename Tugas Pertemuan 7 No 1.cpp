#include<iostream>
using namespace std;
void pokok(float jam_kerja)
{
    if(jam_kerja == 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 )
    {
        jam_kerja = jam_kerja * 7500;
        cout<< "Gaji pokok anda sebesar "<<jam_kerja<<endl;
    }
    else
    {
        cout<< "Anda tidak mendapatkan gaji yang sesuai"<<endl;
    }
}
void lembur(float jam_kerja)
{
    if(jam_kerja >= 8)
    {
        jam_kerja = jam_kerja * 7500 * 1.5;
        cout<< "anda terhitung lembur maka gaji anda menjadi "<<jam_kerja<<endl;
    }
    else
    {
        cout<< "Anda tidak terhitung lembur"<<endl;
    }
}
void makan(float jam_kerja)
{
    if(jam_kerja >= 9)
    {
        jam_kerja = jam_kerja * 7500 * 1.5 + 10000;
        cout<< "anda bekerja lebih dari sama dengan 9 jam maka gaji anda ditambah dengan uang makan sebesar "<<jam_kerja<<endl;
    }
    else
    {
        cout<< "Anda tidak mendapatkan tambahan uang makan" <<endl;
    }
}
void transport(float jam_kerja)
{
    if(jam_kerja >= 10)
    {
        jam_kerja = jam_kerja * 7500 * 1.5 + 10000 + 13000;
        cout<< "anda bekerja lebih dari sama dengan 10 jam maka gaji anda ditambah lagi dengan uang transport sebesar "<<jam_kerja<<endl;
    }
    else
    {
        cout<< "Anda tidak mendapatkan tambahan uang transport"<<endl;
    }
}
int main()
{
    int NIP;
    string nama;
    float jamkerja;

    cout<< "Masukkan NIP anda : ";
    cin>>NIP;

    cout<< "Masukkan nama anda : ";
    cin>>nama;

    cout<< "Masukkan jam kerja anda : ";
    cin>>jamkerja;

    pokok(jamkerja);
    lembur(jamkerja);
    makan(jamkerja);
    transport(jamkerja);
    return 0;
}
