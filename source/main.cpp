#include <iostream>
#include "../header/sll.h"
using namespace std;

int main()
{
    // Deklarasi variabel
    List list;
    infotype input;
    adr prev, pInput, pDelete;
    int dataKe;

    // Membuat / meng-create list
    Create_List(list);

    // Input data ke-1 dari user
    input.jam = "01.00";
    input.kode = "GAR";
    input.maskapai = "Garuda Indonesia";
    input.harga = 750000;
    // Membuat / create elemen list ke-1
    pInput = New_Elemen(input);
    // Memanggil insert (Insert First)
    Insert_First(list, pInput);

    // Input data ke-2 dari user
    input.jam = "02.00";
    input.kode = "BAT";
    input.maskapai = "Batik Air";
    input.harga = 500000;
    // Membuat / create elemen list ke-2
    pInput = New_Elemen(input);
    // Memanggil insert (Insert Last)
    Insert_Last(list, pInput);

    // Input data ke-3 dari user
    input.jam = "03.00";
    input.kode = "CIT";
    input.maskapai = "Citilink";
    input.harga = 655000;
    // Membuat / create elemen list ke-3
    pInput = New_Elemen(input);
    // Memanggil insert (Insert First)
    Insert_First(list, pInput);

    // Input data ke-4 dari user
    input.jam = "04.00";
    input.kode = "QAT";
    input.maskapai = "Qatar Airways";
    input.harga = 1500000;
    // Membuat / create elemen list ke-4
    pInput = New_Elemen(input);
    // Memanggil insert (Insert Last)
    Insert_Last(list, pInput);

    // Input data ke-5 dari user
    input.jam = "05.00";
    input.kode = "SAJ";
    input.maskapai = "Super Air Jet";
    input.harga = 1500000;
    // Membuat / create elemen list ke-5
    pInput = New_Elemen(input);
    // Memanggil insert (Inser After)
    prev = SearchBy(list, dataKe = 4);
    Insert_After(list, prev, pInput);

    // Input data ke-6 dari user
    input.jam = "06.00";
    input.kode = "WIN";
    input.maskapai = "Wings Air";
    input.harga = 395000;
    // Membuat / create elemen list ke-6
    pInput = New_Elemen(input);
    // Memanggil insert (Inser After)
    prev = SearchBy(list, dataKe = 4);
    Insert_After(list, prev, pInput);

    // Menampilkan list (show 1)
    cout << "MENAMPILKAN LIST YANG BELUM TERURUT" << endl;
    Show(list);
    cout << "-----------------------------------" << endl;

    // Mencari data ke-2
    prev = SearchBy(list, dataKe = 2);
    // Menghapus data ke-2
    pDelete = Delete_After(list, prev);
    delete pDelete;

    // Mencari data ke-6
    prev = SearchBy(list, dataKe = 6);
    // Menghapus data ke-6
    pDelete = Delete_After(list, prev);
    delete pDelete;

    // Melakukan sorting data (Selection Sort)
    SortBy(list);
    // Menampilkan list setelah di sorting (show 2)
    cout << "MENAMPILKAN LIST YANG SUDAH TERURUT MEMBESAR ";
    cout << "DAN MENGHAPUS DATA URUTAN KE-2" << endl;
    Show(list);
    cout << "-----------------------------------" << endl;

    return 0;
}