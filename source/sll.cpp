#include <iostream>
#include "../header/sll.h"
using namespace std;

void Create_List(List &L)
{
    L.first = NULL;
}

adr New_Elemen(infotype data)
{
    adr p;

    p = new elmList();
    p->info.jam = data.jam;
    p->info.kode = data.kode;
    p->info.maskapai = data.maskapai;
    p->info.harga = data.harga;
    p->next = NULL;
    return p;
}

void Insert_First(List &L, adr p)
{
    if (L.first == NULL)
    {
        L.first = p;
    }
    else
    {
        p->next = L.first;
        L.first = p;
    }
}

void Insert_Last(List &L, adr p)
{
    adr q;

    p->next = NULL;
    if (L.first == NULL)
    {
        L.first = p;
    }
    else
    {
        q = L.first;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
}

void Insert_After(List &L, adr prev, adr p)
{
    if (L.first == NULL)
    {
        L.first = p;
    }
    else if (prev->next == NULL)
    {
        prev->next = p;
        p->next = NULL;
    }
    else
    {
        p->next = prev->next;
        prev->next = p;
    }
}

adr Delete_First(List &L)
{
    adr p;

    if (L.first == NULL)
    {
        p = NULL;
    }
    else
    {
        p = L.first;
        L.first = L.first->next;
        p->next = NULL;
    }
    return p;
}

adr Delete_Last(List &L)
{

    adr q, p;

    if (L.first == NULL)
    {
        p = NULL;
    }
    else
    {
        q = L.first;
        while (q->next->next != NULL)
        {
            q = q->next;
        }
        p = q->next;
        q->next = NULL;
    }
    return p;
}

adr Delete_After(List &L, adr prev)
{
    adr p;

    if (L.first == NULL || prev->next == NULL)
    {
        p = NULL;
    }
    else
    {
        p = prev->next;
        prev->next = p->next;
        p->next = NULL;
    }
    return p;
}

void Show(List L)
{
    adr q;
    int i = 1;
    q = L.first;
    if (q == NULL)
    {
        cout << "List Kosong" << endl;
    }
    else
    {
        while (q != NULL)
        {
            cout << "Data ke-" << i << endl;
            cout << "Jam keberangkatan    : " << q->info.jam << endl;
            cout << "Kode booking         : " << q->info.kode << endl;
            cout << "Maskapai penerbangan : " << q->info.maskapai << endl;
            cout << "Harga tiket          : " << q->info.harga << endl
                 << endl;
            q = q->next;
            i++;
        }
    }
}

adr SearchBy(List L, int target)
{
    adr q;

    q = L.first;
    if (q->next == NULL)
    {
        return q;
    }
    else
    {
        int count = 1;
        while (q->next != NULL && count < target - 1)
        {
            q = q->next;
            count++;
        }
        return q;
    }
}

void SortBy(List &L)
{
    // Selection Sort
    adr iterasi, current, elemenMin;
    infotype temp;
    int min;

    // iterasi berfungsi untuk perulangan pertama hingga elemen terakhir
    // current berfungsi untuk mencari nilai minimum disetiap elemen setiap kali perulangan
    // elemenMin berfungsi untuk menunjuk elemen yg memiliki nilai terkecil
    // temp berfungsi untuk menampung info / nilai dari elemen untuk pertukaran
    // min berfungsi untuk menampung nilai minimun
    if (L.first != NULL && L.first->next != NULL)
    {
        iterasi = L.first;
        while (iterasi->next != NULL)
        {
            current = iterasi;
            min = current->info.harga;
            elemenMin = current;
            while (current->next != NULL)
            {
                current = current->next;
                if (min > current->info.harga)
                {
                    min = current->info.harga;
                    elemenMin = current;
                }
            }
            temp = iterasi->info;
            iterasi->info = elemenMin->info;
            elemenMin->info = temp;
            iterasi = iterasi->next;
        }
    }
}
