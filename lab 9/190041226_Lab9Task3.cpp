#include <bits/stdc++.h>
using namespace std;

typedef long long ll;





class Furniture
{

public:
    string name;
    int regular_p;
    int discount_p;
    string material;


    virtual void get() {}
    virtual void productDetails()
    {

    }

};
class Bed:public Furniture
{
private:
    string bed_size;
public:
    Bed(string s):bed_size(s) {}

    void get()
    {


        cout<<"Enter the product name :";
        cin>>name;
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }

    void productDetails()
    {
        cout<<"Product Name:"<<name<<endl;
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Bed size:"<<bed_size<<endl;

    }


};
class Sofa:public Furniture
{

private:
    int seat_number;
public:
    Sofa(int a):seat_number(a) {}
    void get()
    {

        cout<<"Enter the product name :";
        cin>>name;
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }
    void productDetails()
    {
        cout<<"Product Name:"<<name<<endl;
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Sofa Seats:"<<seat_number<<endl;

    }

};


class DiningTable:public Furniture
{
private:
    int count;
public:
    DiningTable(int b):count(b) {}

    void get()
    {


        cout<<"Enter the product name :";
        cin>>name;
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }
    void productDetails()
    {
        cout<<"Product Name:"<<name<<endl;
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Chair Counts:"<<count<<endl;

    }

};


int main()
{
    Furniture *f[10];
    string s1;
    cout<<"What is the bed size you want?"<<endl;
    getline(cin>>ws,s1);
    f[0]=new Bed(s1);
    f[0]->get();
    f[0]->productDetails();

    int n1;
    cout<<"Number of seats in your sofa?"<<endl;
    cin>>n1;
    f[1]=new Sofa(n1);
    f[1]->get();
    f[1]->productDetails();

    int n2;
    cout<<"Number of seats in your table?"<<endl;
    cin>>n2;
    f[2]=new DiningTable(n2);
    f[2]->get();
    f[2]->productDetails();

    delete f[0];
    delete f[1];
    delete f[2];

}

