#include<bits/stdc++.h>
#include <iostream>
using namespace std;
const int LIMIT = 10;

template<class T>
class safearay
{
private:
    T arr[LIMIT];
public:
    class OutOfBound
    {
    public:
        int val;
        OutOfBound(int v)
        {
            val=v;
        }
    };
    T& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
        {

            throw OutOfBound(n);
        }
        return arr[n];
    }
};

int main()
{

    try
    {
        safearay<double> sa1;
        for(int j=0; j<LIMIT+15; j++)
            sa1[j] = j*20.5;
        for(int j=0; j<LIMIT; j++)
        {
            double temp1 = sa1[j];
            cout << "Element " << j << " is " << temp1 << endl;
        }

    }
    catch( safearay<double>::OutOfBound ob )
    {
        cout<<"Out of Bound at "<< ob.val <<endl;
    }
    return 0;
}

