#include <iostream>
#include <PhoneNumber.h>
#include <Contact.h>
#include <ContactBook.h>
using namespace std;
int main()
{
    ContactBook c;
    int x;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Contact"<<endl;
        cout<<"Press 2 To Delete Contact"<<endl;
        cout<<"Press 3 To Search about Contact"<<endl;
        cout<<"Press 4 To Edit Contact"<<endl;
        cout<<"Press 5 To Print All Contacts"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
        case 0:
            cout<<"The Program End"<<endl;
            break;
        case 1:
            c.addContact();
            break;
        case 2:
            c.deleteContact();
            break;
        case 3:
            c.searchContact();
            break;
        case 4:
            c.editContact();
            break;
        case 5:
            c.print();
            break;
        default:
            cout<<"Press Number From (1 To 5)"<<endl;
            break;
        }
    }
    while(x!=0);
}
