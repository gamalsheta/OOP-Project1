#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;
class PhoneNumber
{
private:
    string phone;
    string type;
public:
    PhoneNumber()
    {

    }
    PhoneNumber(string phone,string type)
    {
        this->phone=phone;
        this->type=type;
    }
    void setPhone(string phone)
    {
        this->phone=phone;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getPhone()
    {
        return phone;
    }
    string getType()
    {
        return type;
    }
    void informations()
    {
        cout<<"Please Enter Your Phone Number :"<<endl;
        cin>>phone;
        cout<<"Please Enter Your Phone Type (Mobile - Work - Home) :"<<endl;
        cin>>type;
    }
    void print()
    {
        cout<<"The Phone Number Is :"<<phone<<endl;
        cout<<"The Phone Type Is :"<<type<<endl;
    }
};

#endif // PHONENUMBER_H
