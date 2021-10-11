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
    T& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }

};

int main()
{
    safearay<double> sa1;
    for(int j=0; j<LIMIT; j++)
        sa1[j] = j*10;
    for(int j=0; j<LIMIT; j++)
    {
        double temp1 = sa1[j];
        cout << "Element " << j << " is " << temp1 << endl;
    }

    cout<<endl<<endl;

    safearay<float> sa2;
    for(int j=0;j<LIMIT;j++)
    {
        sa2[j]= (j*10.5)+j;
    }
    for(int j=0; j<LIMIT; j++)
    {
        float temp2 = sa2[j];
        cout << "Element " << j << " is " << temp2 << endl;
    }
    return 0;
}

