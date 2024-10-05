#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>
using namespace std;

struct jadwal
{
    string jam, maskapai, kode;
    int harga;
};
typedef jadwal infotype;
typedef struct elmList *adr;
struct elmList
{
    infotype info;
    adr next;
};
struct List
{
    adr first;
};
void Create_List(List &L);
adr New_Elemen(infotype data);
void Insert_First(List &L, adr p);
void Insert_Last(List &L, adr p);
void Insert_After(List &L, adr prev, adr p);
adr Delete_First(List &L, adr p);
adr Delete_Last(List &L, adr p);
adr Delete_After(List &L, adr prev, adr p);
void Show(List L);

#endif // SLL_H_INCLUDED