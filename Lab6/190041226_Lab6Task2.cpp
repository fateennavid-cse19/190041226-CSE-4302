#include<bits/stdc++.h>
using namespace std;

class Cordinate
{
private:
    float abcissa, ordinate;
public:
    Cordinate():abcissa(0),ordinate(0)
    {


    };
    Cordinate(float a,float b):abcissa(a),ordinate(b)
    {

    };
    float getDistance(Cordinate c)
    {
        return sqrt(pow(abcissa - c.abcissa, 2) + pow(ordinate - c.ordinate, 2) );
    }
    float getDistance()
    {
        return sqrt(pow(abcissa,2) + pow(ordinate, 2) );
    }

    Cordinate move_x(float val)
    {
        abcissa+=val;
    }
    Cordinate move_y(float val)
    {
        ordinate+=val;
    }
    display()
    {
        cout<<abcissa<<" "<<ordinate<<endl;

    }
    move(int x,int y)
    {
        move_x(x);
        move_y(y);
    }
    bool operator >(Cordinate c)
    {
        return (getDistance()>c.getDistance())? true:false;
    }
    Cordinate operator ++(int)
    {
        ordinate++;
        abcissa++;

    }
    Cordinate operator ++()
    {
        ordinate++;
        abcissa++;
    }
    Cordinate operator --(int)
    {
        Cordinate t;
        t.ordinate=ordinate--;
        t.abcissa=abcissa--;
        return (t);
    }
    Cordinate operator --()
    {
        Cordinate t;
        t.ordinate=--ordinate;
        t.abcissa=--abcissa;
        return (t);
    }
    bool operator >=(Cordinate c)
    {
        return (getDistance()>=c.getDistance())? true:false;
    }
    bool operator !=(Cordinate c)
    {
        return (getDistance()!=c.getDistance())? true:false;
    }
    //~Cordinate();
} ;
int main()
{
    //Cordinate c1(10,5),c2(2,4),c3(13,23);
    float x1,x2,x3,y1,y2,y3;
    cout<<"Enter coordinates for c1: ";
    cin>>x1>>y1;
    Cordinate c1(x1,y1);
    cout<<"Enter coordinates for c2: ";
    cin>>x2>>y2;
    Cordinate c2(x2,y2);
    cout<<"Enter coordinates for c3: ";
    cin>>x3>>y3;
    Cordinate c3(x3,y3);
    cout<<"distance between c1 & c2:"<<endl;
    cout<<c1.getDistance(c2)<<endl;
    cout<<"distance between c1 & origin:"<<endl;
    cout<<c1.getDistance()<<endl;
    c1.move_x(9);
    c1.move_y(13);
    c1.display();
    c1.move(12,31);
    c1.display();
    if(c1>c2)
    {
        cout<<"c1 greater than c2"<<endl;
    }
    else
    {
        cout<<"c2 greater than c1"<<endl;
    }
    c1++;
    c1.display();
    ++c1;
    c1.display();
    c2--;
    c2.display();
    --c2;
    c2.display();
    if( c2 >= c3 )
        cout << "Distance of c2 is greater or equal than Distance of c3"<<endl;
    else
        cout << "Distance of c2 is not greater or equal than Distance of c3"<<endl;
    if( c2 != c3 )
        cout << "Distance of c2 is is not equal to Distance of c3"<<endl;
    else
        cout << "Distance of c2 is  equal to Distance of c3"<<endl;

    c2=c1--;
    c1.display();
    c2.display();

}

