#include <iostream>
#include "../header/sll.h"
using namespace std;

int main()
{
    // cout << "Masukkan jam penerbangan : ";
    // cin >> input.jam;
    // cout << "Masukkan kode booking : ";
    // cin >> input.kode;
    // cout << "Masukkan maskapai penerbangan : ";
    // cin >> input.maskapai;
    // cout << "Masukkan harga tiket : ";
    // cin >> input.harga;

    // Deklarasi variabel
    List list;
    infotype input;
    adr prev, pInput, pDelete;
    int data;

    // Membuat / meng-create list
    Create_List(list);

    // Input data ke-1 dari user
    input.jam = "1";
    input.kode = "GAR";
    input.maskapai = "Garuda Indonesia";
    input.harga = 750000;
    // Membuat / create elemen list ke-1
    pInput = New_Elemen(input);
    // Memanggil insert (Insert First)
    Insert_First(list, pInput);

    cout << endl;
    Show(list);
    cout << endl;

    // Input data ke-2 dari user
    input.jam = "2";
    input.kode = "BAT";
    input.maskapai = "Batik Air";
    input.harga = 500000;
    // Membuat / create elemen list ke-2
    pInput = New_Elemen(input);
    // Memanggil insert (Insert Last)
    Insert_Last(list, pInput);

    cout << endl;
    Show(list);
    cout << endl;

    // Input data ke-3 dari user
    input.jam = "3";
    input.kode = "CIT";
    input.maskapai = "Citilink";
    input.harga = 655000;
    // Membuat / create elemen list ke-3
    pInput = New_Elemen(input);
    // Memanggil insert (Insert First)
    Insert_First(list, pInput);

    cout << endl;
    Show(list);
    cout << endl;

    // Input data ke-4 dari user
    input.jam = "4";
    input.kode = "QAT";
    input.maskapai = "Qatar Airways";
    input.harga = 1500000;
    // Membuat / create elemen list ke-4
    pInput = New_Elemen(input);
    // Memanggil insert (Insert Last)
    Insert_Last(list, pInput);

    cout << endl;
    Show(list);
    cout << endl;

    // Input data ke-5 dari user
    input.jam = "5";
    input.kode = "SAJ";
    input.maskapai = "Super Air Jet";
    input.harga = 1500000;
    // Membuat / create elemen list ke-5
    pInput = New_Elemen(input);
    // Memanggil insert (Inser After)
    if (list.first != NULL)
    {
        prev = SearchBy(list, data = 2);
        Insert_After(list, prev, pInput);
    }
    else
    {
        Insert_First(list, pInput);
    }

    cout << endl;
    Show(list);
    cout << endl;
}