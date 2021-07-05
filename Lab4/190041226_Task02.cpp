#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
public:
    void rec_area()
    {
        cout<<"Area is"<<' ';
        cout<<length*width<<endl;
    }
    void rec_perimeter()
    {
        cout<<"Perimeter is"<<' ';
        cout<<2*(length+width)<<endl;
    }
    void rec_diagonal()
    {
        cout<<"The length of the diagonal is: ";
        float diag=sqrt(pow(length,2)+pow(width,2));
        cout<<diag<<endl;
    }
    void rec_angle()
    {
        cout<<"The angle is: ";
        float diag=sqrt(pow(length,2)+pow(width,2));
        float angle=acos(length/diag);
        cout<<angle<<" degrees"<<endl;
    }
    Rectangle():length(1),width(1)
    {

    }
    Rectangle (float a=1,float b=1):length(a),width(b)
    {

    }

    void set()
    {
        if((length>=1.0&&width>=1.0)&&(length<20.0&&width<20.0))
           {
               cout<<"In Range"<<endl;
           }
            else
            {
                cout<<"Not in range"<<endl;
            }
    }
    void get()
    {
        cout<<"Length is :";
        cout<<length;
        cout<<"Width is :";
        cout<<width;
        set();
        rec_area();
        rec_perimeter();
        rec_diagonal();
        rec_angle();

    }

};

int main()
{
    float l;
    float w;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter width: ";
    cin>>w;
    Rectangle r(l,w);
    r.get();


}
