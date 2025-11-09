//
//  main.cpp
//  complexNumberActivity
//
//  Created by Gabriela Avila on 11/8/25.
//

#include <iostream>

using namespace std;

class Number {
private:
    int x;

public:
    Number(int a) {
        x = a;
    }

    Number operator+(const Number& y) {
        return Number(this->x + y.x);
    }

    void operator+=(const Number& y) {
        this->x += y.x;
    }

    int get_x() {
        return x;
    }
};

class ComplexNumber {

public:
    int real;
    int im;

    ComplexNumber(int x, int y) {
        real = x;
        im = y;
    }

    ComplexNumber operator+(const ComplexNumber& num) {
        return ComplexNumber(real + num.real, im + num.im);
    }
    ComplexNumber operator-(const ComplexNumber& num) {
        return ComplexNumber(real - num.real, im - num.im);
    }
    ComplexNumber operator*(const ComplexNumber& num) {
        return ComplexNumber(real * num.real - im * num.im, real * num.im + num.real * im);
    }

    
    //overloading operators, <, >, <=, >=, ==, !=
    bool operator<(const ComplexNumber& num) {
        if (real < num.real) {
            return true;
        }
        else if (real == num.real) {
            return im < num.im;
        }
        else {
            return false;
        }
    }
    
    bool operator>(const ComplexNumber& num) {
        if (real > num.real) {
            return true;
        }
        else if (real == num.real) {
            return im > num.im;
        }
        else {
            return false;
        }
    }
    
    bool operator<=(const ComplexNumber& num) {
        if (real < num.real) {
            return true;
        }
        else if (real == num.real) {
            if(im == num.im){
                return true;
            }else
            {
                return false;
            }
        }
        else {
            return false;
        }
    }
    bool operator>=(const ComplexNumber& num) {
        if (real > num.real) {
            return true;
        }
        else if (real == num.real) {
            if(im == num.im){
                return true;
            }else
            {
                return false;
            }
        }
        else {
            return false;
        }
    }
    
    bool operator==(const ComplexNumber& num) {
        if (real == num.real) {
            if(im == num.im){
                return true;
            }else
            {
                return false;
            }
        }
        else {
            return false;
        }
    }
    
    bool operator!=(const ComplexNumber& num) {
        if (real != num.real) {
            if(im != num.im){
                return true;
            }else
            {
                return false;
            }
        }
        else {
            return false;
        }
    }

    void pretty_print() {
        cout << real << " + " << im << "i" << endl;
    }

};

int main() {

    ComplexNumber x = ComplexNumber(1, 2);
    ComplexNumber x2 = ComplexNumber(1, 3);
    ComplexNumber x3 = ComplexNumber(1, 1);
    ComplexNumber y = ComplexNumber(5, 8);
    ComplexNumber z = ComplexNumber(0, 1);

    cout << (x < y) << endl;
    cout << (x < x2) << endl;
    cout << (x < x3) << endl;

    x.pretty_print();
    //(x + y).pretty_print();
    (x * z).pretty_print();
    (x * z * z).pretty_print();
    (x * z * z * z).pretty_print();

    /*
    Number x = Number(5);
    Number y = Number(10);
    Number z = x + y;
    z += Number(13);

    cout << z.get_x() << endl;
    cout << (x + y).get_x() << endl;
    */

}
