#include<bits/stdc++.h>
using namespace std;

class Salary
{
private:
    string empname;
    int id;
    int age;
    float salary;
    void getStatus()
    {
        if(age<=25)
        {
            if(salary<=20000)
            {
                cout<<"Low Salaried Person"<<endl;
            }
            else if(salary>20000)
            {
                cout<<"Moderate Salaried Person"<<endl;
            }
        }
        else if(age>25)
        {
            if(salary<=21000)
            {
                cout<<"Low Salaried Person"<<endl;
            }
            else if(salary>21000 && salary<=60000)
            {
                cout<<"Moderate Salaried Person"<<endl;
            }
            else if(salary>60000)
            {
                cout<<"High Salaried Person"<<endl;
            }

        }
    }

public:
    void feedinfo(string name,int id,int age,float salary)
    {
        this->empname=name;
        this->id=id;
        this->age=age;
        this->salary=salary;
    }
    void Showinfo()
    {
        cout<<"Name: "<<empname<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
        getStatus();
    }

};

int main()
{
    string name;
    int id;
    int age;
    float salary;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Salary: ";
    cin>>salary;
    Salary sal;
    sal.feedinfo(name,id,age,salary);
    sal.Showinfo();
    return 0;
}
