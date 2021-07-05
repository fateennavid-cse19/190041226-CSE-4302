#include<iostream>
using namespace std;

class Counter
{
private:
    int c,c2;

public:
    Counter():c(0),c2(0)
    {

    }
    int getcount()
    {
        return c;
    }
    void setIncrementStep(int c2)
    {
        this->c2=c2;
        getcount();
    }
    void increment()
    {
        this->c=c+c2;
        getcount();
    }
    void reset()
    {
        c=0,c2=0;
        //getcount();
    }




};


int main()
{
    int step_val;
    int choice;
    Counter number;
    while(1)
    {
        cout<<"Press 1 to store"<<endl;
        cout<<"Press 2 to increment"<<endl;
        cout<<"Press 3 to reset"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter number: ";
            cin>>step_val;
            number.setIncrementStep(step_val);
        }
        else if(choice==2)
        {
            number.increment();
        }
        else if(choice==3)
        {
            number.reset();
        }
        else
        {
            break;
        }
    }
}
