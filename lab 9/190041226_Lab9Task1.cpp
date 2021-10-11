#include <bits/stdc++.h>
using namespace std;

typedef long long ll;





class Furniture
{

public:



    virtual void print()
    {

    }

};
class Bed:public Furniture
{
private:
    string bed_size;
public:
    Bed(string s):bed_size(s) {}



    void print()
    {
        cout<<"Type of bed: "<<bed_size<<endl;

    }


};
class Sofa:public Furniture
{

private:
    int seat_number;
public:
    Sofa(int a):seat_number(a) {}

    void print()
    {
        cout<<"Number of seats: "<<seat_number<<endl;

    }

};


class DiningTable:public Furniture
{
private:
    int seats;
public:
    DiningTable(int b):seats(b) {}


    void print()
    {
        cout<<"number of seats: "<<seats<<endl;

    }

};

int main()
{
    Furniture *f[10];
    string s1;
    cout<<"What is the bed size you want?"<<endl;
    getline(cin>>ws,s1);
    f[0]=new Bed(s1);

    f[0]->print();
    int n1;
    cout<<"Number of seats in your sofa?"<<endl;
    cin>>n1;
    f[1]=new Sofa(n1);

    f[1]->print();
    int n2;
    cout<<"Number of seats in your table?"<<endl;
    cin>>n2;
    f[2]=new DiningTable(n2);

    f[2]->print();

    delete f[0];
    delete f[1];
    delete f[2];
}
