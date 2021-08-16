#include<bits/stdc++.h>
using namespace std;

class Float
{
private:
    float f;
public:
    Float():f(0)
    {

    }
    Float(float a):f(a)
    {

    }
    float getfloat()
    {
        return f;

    }
    Float operator +(Float f1) const
    {
        float float1=f+f1.f;
        return Float(float1);
    }
    Float operator -(Float f1) const
    {
        float float1=f-f1.f;
        return Float(float1);
    }
    Float operator *(Float f1) const
    {
        float float1=f*f1.f;
        return Float(float1);
    }
    Float operator /(Float f1) const
    {
        float float1=f/f1.f;
        return Float(float1);
    }


};

int main()
{
    Float flo1(10.9),flo2(2.5),result;
    cout<<"f1="<<flo1.getfloat()<<endl;
    cout<<"f2="<<flo2.getfloat()<<endl;
    result=flo1+flo2;
    cout<<"f1+f2="<<result.getfloat()<<endl;
    result=flo1-flo2;
    cout<<"f1-f2="<<result.getfloat()<<endl;
    result=flo1*flo2;
    cout<<"f1*f2="<<result.getfloat()<<endl;
    result=flo1/flo2;
    cout<<"f1/f2="<<result.getfloat()<<endl;
}
