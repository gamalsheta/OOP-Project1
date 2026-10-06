#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <Contact.h>
using namespace std;
class ContactBook
{
private:
    int count=0;
    Contact contacts[100];
public:
    void addContact()
    {
        Contact c;
        c.informations();
        contacts[count]=c;
        count++;
        cout<<"The Contact Is Added Successfully"<<endl;
    }
    void deleteContact()
    {
        cout<<"Please Enter Your ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<count; i++)
        {
            if(id==contacts[i].getID())
            {
                contacts[i]=contacts[count-1];
                count--;
                cout<<"The Contact Is Deleted Successfully"<<endl;
                break;
            }
        }
        if(i==count)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void searchContact()
    {
        cout<<"Please Enter Your ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<count; i++)
        {
            if(id==contacts[i].getID())
            {
                contacts[i].print();

                break;
            }
        }
        if(i==count)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void editContact()
    {
        cout<<"Please Enter Your ID :"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<count; i++)
        {
            if(id==contacts[i].getID())
            {
                contacts[i].informations();
                cout<<"The Contact Is Edited Successfully"<<endl;
                break;
            }
        }
        if(i==count)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void print()
    {
        for(int i=0; i<count; i++)
        {
            contacts[i].print();
            cout<<endl;
        }
    }
};

#endif // CONTACTBOOK_H
