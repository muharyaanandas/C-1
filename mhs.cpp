#include <iostream>
#include <string.h>
using namespace std;

struct Mahasiswa
{
    char nim[100], nama[100];
    int na;
};

Mahasiswa mhs[100], mhsmax, mhsmin;

int i, j, jumlah, flag;
float rata2;

Mahasiswa inputData(Mahasiswa mhs)
{

    cout << "masukan nama : ";
    cin >> mhs.nama;
    cout << "masukan nilai akhir : ";
    cin >> mhs.na;

    return mhs;
}

void cariData(int flag, Mahasiswa mhs1, Mahasiswa mhs2, float rata)
{
    if (flag == 1)
    {
        cout << "Mahasiswa dengan nilai akhir tertinggi : \n";
        cout << "NIM : " << mhs1.nim << " dengan Nama : " << mhs1.nama << " dan NilaiAkhir : " << mhs1.na << endl;
    }
    else if (flag == 2)
    {
        cout << "Mahasiswa dengan nilai akhir terendah : \n";
        cout << "NIM : " << mhsmin.nim << " dengan Nama : " << mhsmin.nama << " dan NilaiAkhir : " << mhsmin.na;
    }
    else
    {
        cout << "Rata-rata nilai akhir = " << rata2 << endl;
    }
}

int main()
{

    i = 0;
    cout << "Masukkan data mahasiswa : \n";
    cout << "Input Nomor Induk Mahasiswa : ";
    cin >> mhs[i].nim;
    do
    {

        mhs[i] = inputData(mhs[i]);
        jumlah += mhs[i].na;
        i++;
        cout << "\nInput Nomor Induk Mahasiswa : ";
        cin >> mhs[i].nim;

    } while (!(strcmp(mhs[i].nim, "x") == 0));

    i--;
    rata2 = jumlah / i;
    mhsmin = mhs[0];
    mhsmax = mhs[0];

    for (j = 1; j <= i; j++)
    {
        if (mhs[j].na < mhsmin.na)
        {
            mhsmin = mhs[j];
        }
        if (mhs[i].na > mhsmin.na)
        {
            mhsmax = mhs[j];
        }
    }

    cout << "cari data \n1.nilai tertinggi\n2.nilai terendah\n3.nilai rata jawaban\n[1/2/3] : ";
    cin >> flag;

    cariData(flag, mhsmax, mhsmin, rata2);
}