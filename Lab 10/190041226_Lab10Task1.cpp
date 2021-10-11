// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

class Shape_square {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    //  virtual Function
    virtual float calculateArea()
    {
        return dimension*dimension;
    }

};


// Derived class
class Square : public Shape_square {
   public:
    float calculateArea() {
         return dimension*dimension;
    }

};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout<<"Area of the square: "<<square.calculateArea()<<endl;


    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}
