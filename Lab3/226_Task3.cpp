#include<iostream>
using namespace std;

class Medicine
{
private:
    char *name;
    char *genericName;
    double discountpercent;
    double unitPrice;

public:
    Medicine():discountpercent(5),unitPrice(0)
    {
            //
    }
    void assignName(char* name, char* genericName)
    {
        this->name=name;
        this->genericName=genericName;
    }
    void assignPrice(double price)
    {
        if(price>0)
        {
            this->unitPrice=price;
        }
        else
        {
            cout<<"Invalid price!!"<<endl;
        }
    }
    void setDiscountPercent(double percent)
    {
        if (percent >= 0 && percent <= 45)
        {
            this->discountpercent = percent;
        }
        else
        {
            cout << "discountPercent needs to be within 0-45%" << endl;
        }
    }
    double getSellingPrice(int nos)
    {
        return (double) nos * this->unitPrice * (1.0 - this->discountpercent / 100.0);
    }
    void display()
    {
        cout << this->name << " (" << this->genericName
             << ") has a unit price BDT " << this->unitPrice
             << " Current discount " << this->discountpercent << "%.";
    }
};

int main()
{
    Medicine meds;
    char s1[1000];
    char s2[10000];
    cout<<"Enter medicine name: ";
    cin>>s1;
    cout<<"Enter chemical name: ";
    cin>>s2;
    meds.assignName(s1,s2);

    double price;
    cout<<"Enter the rate: ";
    cin>>price;
    meds.assignPrice(price);
    double discount;
    cout<<"Enter the discount rate: ";
    cin>>discount;
    meds.setDiscountPercent(discount);
    meds.display();

}
