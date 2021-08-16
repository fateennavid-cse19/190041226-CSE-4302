#include<iostream>
using namespace std;

class Counter
{

private:
    int count;
    int count2;
public:
    Counter():count(0),count2(1)
    {

    }
    Counter(int a,int b):count(a),count2(b)
    {

    }

    void setIncrementStep(int step_val)
    {
        count2=step_val;
    }
    int getStepval()
    {
        return count2;
    }
    int getcount()
    {
        return count;

    }
    void increment()
    {
        count=count+count2;
    }
    void resetCount()
    {
        count2=0;
    }
    Counter operator +(Counter c) const
    {
        int m=count+c.count;
        int n=min(count2,c.count2);
        return Counter(m,n);
    }
    Counter operator +=(Counter c)
    {
        count+=count+c.count;
        count2=c.count2;
    }
    Counter operator ++()
    {
        count++;
        return Counter(count,count2);
    }
    Counter operator ++(int)
    {
        ++count;
        return Counter(count,count2);
    }
    friend Counter  operator + (int y,Counter c) ;


};
Counter operator + (int  y,Counter c)
{

    return Counter(c.count+y,c.count2);
}
int main()
{
    Counter c1(4,1),c2(9,1),c3;
    cout<<"please enter the value of increment: ";
    int step_val;
    cin>>step_val;
    c1.setIncrementStep(step_val);
    c1.increment();
    c2.setIncrementStep(step_val);
    c2.increment();
    cout << "c1 new value=" <<c1.getcount()<<"\n";
    cout << "c=" <<c1.getStepval()<<"\n";
    cout << "c2 new value=" <<c2.getcount()<<"\n";
    cout << "c=" <<c2.getStepval()<<"\n";

    c3=c1+c2;
    cout << "c3 new value=" <<c3.getcount()<<"\n";
    cout << "c=" <<c3.getStepval()<<"\n";

    c2++;
    cout << "c2 2nd new value=" <<c2.getcount()<<"\n";
    cout << "c=" <<c2.getStepval()<<"\n";
    ++c2;
    cout << "c2 3rd new value=" <<c2.getcount()<<"\n";
    cout << "c=" <<c2.getStepval()<<"\n";
    cout<<"please enter the variable:";
    int val;
    cin>>val;

    c3=val+c2;
    cout << "c3 new value=" <<c3.getcount()<<"\n";
    cout << "c=" <<c3.getStepval()<<"\n";

    c1+=c2;
    cout << "c1 2nd new value=" <<c1.getcount()<<endl;
    cout << "c1=" <<c1.getStepval()<<endl;

    c1.resetCount();
    c2.resetCount();
    c3.resetCount();
    cout<<c1.getStepval()<<endl;
    cout<<c2.getStepval()<<endl;
    cout<<c3.getStepval()<<endl;


}
