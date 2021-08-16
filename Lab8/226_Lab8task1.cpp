#include<iostream>
using namespace std;


class Wheel
{
private:
    double radius;
public:
    Wheel():radius(0)
    {

    }
    void setRadius(double r)
    {
        radius = r;
    }
    double getRadius()
    {
        return radius;
    }

};

class Engine
{
private:
    double maxFuel;
    double maxEnergy;
    double rpm;
public:
    Engine():maxFuel(0),maxEnergy(0),rpm(0)
    {

    }
    void setFuel(double fuel)
    {
        maxFuel=fuel;
    }
    void setEnergy(double energy)
    {
        maxEnergy=energy;
    }
    void setRPM(double rotation)
    {
        rpm=rotation;
    }
    double getFuel()
    {
        return maxFuel;
    }
    double getEnergy()
    {
        return maxEnergy;
    }
    double getRPM()
    {
        return rpm;
    }
};

class Seat
{
private:
    string comfort;
    int warmer;
public:
    Seat():comfort(""),warmer(0)
    {

    }
    void setComfortability (string comfort)
    {
        this->comfort=comfort;
    }
    void setWarmer(int warmer)
    {
        this->warmer=warmer;
    }
    string getComfortability()
    {
        return comfort;
    }
    int getWarmer()
    {
        return warmer;
    }

};


class Door
{
private:
    string mode;
public:
    Door():mode("")
    {

    }
    void setmode(string m)
    {
        mode=m;
    }
    string getmode()
    {
        return mode;
    }
};

class Car
{
private:
    double maximum_acceleration, fuel_capacity;
public:
    Car():maximum_acceleration(0), fuel_capacity(0)
    {

    }
    void setAcceleration(double acc)
    {
        maximum_acceleration=acc;
    }
    void setFuelCap(double fc)
    {
        fuel_capacity=fc;
    }
    double getAcceleration()
    {
        return maximum_acceleration;
    }
    double getFuelCap()
    {
        return fuel_capacity;
    }
    Seat s;
    Wheel w;
    Engine e;
    Door d;
    void display()
    {
        cout<<"\nDisplaying car info:"<<endl;

        cout<<"radius of wheels= "<<w.getRadius()<<endl;

        cout<<"Maximum Fuel Consumption Rate= "<<e.getFuel()<<endl;
        cout<<"Maximum Energy Production Rate= "<<e.getEnergy()<<endl;
        cout<<"Average RPM= "<<e.getRPM()<<endl;

        cout<<"Maximum acceleration= "<<getAcceleration()<<endl;
        cout<<"Fuel capacity= "<<getFuelCap()<<endl;

        cout<<"Seats' comfortability is "<<s.getComfortability()<<endl;
        if(s.getWarmer())
            cout<<"Seat warmer present"<<endl;
        else
            cout<<"Seat warmer not present"<<endl;



        cout<<"Opening mode: "<<d.getmode()<<endl;


    }
};
int main()
{
    Car c;

    double rad;
    cout<<"Radius of wheel= ";
    cin>>rad;
    c.w.setRadius(rad);

    double mf,me,r;
    cout<<"Maximum Fuel Consumption Rate= ";
    cin>>mf;

    c.e.setFuel(mf);
    cout<<"Maximum Energy Production Rate= ";
    cin>>me;
    c.e.setEnergy(me);

    cout<<"Average RPM= ";
    cin>>r;
    c.e.setRPM(r);

    double ma,fcp;

    cout<<"Maximum acceleration= ";
    cin>>ma;
    c.setAcceleration(ma);
    cout<<"Fuel capacity= ";
    cin>>fcp;
    c.setFuelCap(fcp);




    cout<<"Seats' comfortability= ";
    string st;
    int yn;
    cin>>st;
    c.s.setComfortability(st);
    cout<<"Is seat warmer present? (1/0): ";
    cin>>yn;
    c.s.setWarmer(yn);




    string op;
    cout<<"Opening mode: ";
    cin>>op;
    c.d.setmode(op);



    c.display();
}

