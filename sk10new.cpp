#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Node{
      public:
        string data;
        Node *next;
};  Node *head, *tail= NULL;

void insertDepan(string databaru,string namabaru)
{
    Node *baru;
    baru = new Node;
    baru->data = databaru;
    baru->next = NULL;
        baru->next = head;
        head=baru;
    baru = new Node;
    baru->data = namabaru;
    baru->next = NULL;
        baru->next = head;
        head=baru;
    cout<<"Data masuk\n";
}

void tampil(){
    Node *bantu;
    bantu=head;
    int i=1;
    cout<<"[---------------------------------------]\n";
    cout<<"[       Nama    |          NIM          ]\n";
    cout<<"[---------------------------------------]\n";
    while(bantu!=NULL){   
        cout<<"[\t"<<bantu->data<<"\t|\t";
        bantu=bantu->next;
        cout<<bantu->data<<"\t]";
        bantu=bantu->next;
        cout<<endl; 
        }
    cout<<"[---------------------------------------]\n";
}
void hapusDepan()
{
    Node *hapus;
    string a;
            hapus=head;
            a=hapus->data;
            head=head->next;
            delete hapus;
            hapus=head;
            hapus->data;
            head=head->next;
            delete hapus;
    cout<<"Data "<<a<<" sudah terhapus";

}

int main(){
    int pil;
    string databaru,namabaru;
    do
    {
        system("cls");
        cout<<endl;
        cout<<" ============================"<<endl;
        cout<<" =   PROGRAM LINKED LIST    ="<<endl;
        cout<<" ============================"<<endl;
        cout<<" = 1. Insert Data           ="<<endl;
        cout<<" = 2. Tampil Data           ="<<endl;
        cout<<" = 3. Hapus 1 data atas     ="<<endl;
        cout<<" = 5. Exit                  ="<<endl;
        cout<<" ============================"<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: system("cls");{
                cout<<"Masukan nama = ";cin>>namabaru;
                cout<<"Masukan nim = ";cin>>databaru;
                insertDepan(databaru,namabaru);
                break;
            }
            case 2: system("cls");{
                tampil();
                break;
            }
            case 3: system("cls");{
                hapusDepan();
                break;
            }
            case 5: system("cls");{
                return 0;
                break;
            }
            default : system("cls");
            {
                cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
            }
        }
        getch();
    }
    while (pil!=7);
}