#include<iostream>

using namespace std;

class RationalNumber
{
private:
    int numerator,denominator;
public:
    void assign(int n,int d)
    {

        if(d==0)
        {
            cout<<"Error. Can't assign 0 to denominator.\n";
            return;
        }
        numerator=n;
        denominator=d;
    }
    double convert()
    {
        return (double)numerator/denominator;
    }
    void invert()
    {
        if(numerator==0)
            cout<<"Error. Can't invert.\n";
        else
        {
            swap(numerator,denominator);
        }

    }
    void print()
    {

             cout<<"The number is "<<numerator<<"/"<<denominator<<endl;


    }
};


int main()
{
    RationalNumber num;
    int x,y;
    int choice;
    while(1)
    {
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter numerator: ";
            cin>>x;
            cout<<"Enter denominator: ";
            cin>>y;
            num.assign(x,y);
            num.print();
        }
        else if(choice==2)
        {
            num.convert();
            cout<<"Decimal number: "<<num.convert()<<"\n";
        }
        else if(choice==3)
        {
            num.invert();
            num.print();

        }
        else
        {
            break;
        }
    }




    return 0;

}
