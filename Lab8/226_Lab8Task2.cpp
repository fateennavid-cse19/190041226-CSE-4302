#include<bits/stdc++.h>
#include<string>
//#define maximum 1000
using namespace std;

//class Introduction
//{
//public:
//    void WhoAmI()
//    {
//        cout>>"I am a: "<<endl;
//    }
//};
class Staff
{
protected:
    string name;
    int code;
public:
    void getInfo()
    {
        cout<<"Enter Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Code: ";
        cin>>code;
    }




};
class Teacher : public Staff
{
protected:
    string subject;
    string publication;
public:
    void getInfo()
    {
        Staff::getInfo();
    }
    void getSubject()
    {
        cout<<"Enter Subject: ";
        getline(cin>>ws,subject);
    }
    void getPublication()
    {
        cout<<"Enter Publication: ";
        getline(cin>>ws,publication);
    }
    void showInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Publication: "<<publication<<endl;

    }

};

class Officer : public Staff
{
protected:
    string category;
public:
    void getInfo()
    {
        Staff::getInfo();
    }
    void getCategory()
    {
        cout<<"Enter category: ";
        getline(cin>>ws,category);
    }
    void showInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Category: "<<category<<endl;

    }

};
class Typist : public Staff
{
protected:
    float speed;
    int wage;
public:
    void getInfo()
    {
        Staff::getInfo();
    }
    void getSpeed()
    {
        cout<<"Enter speed: ";
        scanf("%f",&speed);

    }
    void getWage()
    {
        cout<<"Enter wage: ";
        cin>>wage;
    }
    void showInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Speed: ";
        printf("%.5f",speed);
        cout<<endl;
        cout<<"Wage: "<<wage<<endl;

    }
};




int main()
{
    while(1)
    {
        int choice;
    cout<<"Who are you?"<<endl;
    cout<<"1.Teacher"<<endl;
    cout<<"2.officer"<<endl;
    cout<<"3.Typist"<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;
    if(choice==1)
    {

        Teacher t;
        t.getInfo();
        t.getSubject();
        t.getPublication();
        t.showInfo();
    }
    else if(choice==2)
    {
        Officer o;
        o.getInfo();
        o.getCategory();
        o.showInfo();
    }
    else if(choice==3)
    {
        Typist ty;
        ty.getInfo();
        ty.getSpeed();
        ty.getWage();
        ty.showInfo();
    }
    else if(choice==0)
    {
        break;
    }

    }


    return 0;
}
