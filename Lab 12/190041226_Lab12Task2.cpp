#include<bits/stdc++.h>
#include <iostream>
using namespace std;
const int LIMIT = 10;

template<class T>
T amax( T* array, int size)
    {
        T maxValue = array[0];
        for(int i = 0; i < size; i++)
            if (array[i] > maxValue)
                maxValue = array[i];

        return maxValue;
    }
int main()
{
    int sa1[10];
    for(int j=0; j<LIMIT; j++)
        sa1[j] = j*20;
    cout<< amax(sa1, 10)<<endl;

    float sa2[10];
    for(int j=0; j<LIMIT; j++)
        sa2[j] = j*30.5;
    cout<< amax(sa2, 10)<<endl;

    return 0;
}

