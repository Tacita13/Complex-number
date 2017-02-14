//Specification/Implementation file
//******************************************************************
//
//   Programador : Isamar López Rodríguez 
//   Archivo     : complex.h             Fecha : 08/09/16
//
//******************************************************************
//    Propósito :This file contains the Complex class declaration
//               with its private data member and public member
//               functions. It holds seven functions, and uses to friend functions
//               for output and input. Also holds a constructor, and setter/getter.
//
//
//******************************************************************

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include<cmath>
using namespace std;
class complex{

//Overload the stream insertion and extraction operators
friend ostream& operator<<(ostream&, const complex&);
friend istream& operator>>(istream&, complex&);

private:
    double realPart;
    double imaginaryPart;

public:

    void setComplex(const double& real, const double& imag);
    void getComplex(double& real, double& imag) const;

//Constructor
//Initializes the complex number according to the parameters.
    complex(double real = 0.00, double imag = 0.00);


//Postcondition: realPart = real; imaginaryPart = imag;
//Overload the operator +
    complex operator+(const complex&) const;
//Overload the operator *
    complex operator*(const complex&) const;
//Overload the operator -
    complex operator-(const complex&) const;
//Overload the operator /
    complex operator/(const complex&) const;
//Overload the operator ==
    bool operator== (const complex&) const;
//Overload the operator !
    double operator!() const;
//Overload the operator ~
    complex operator~ () const;
};


#endif // COMPLEX_H
//extraction function
ostream& operator<<(ostream& osObject, const complex& complex){

    osObject << "(";
    osObject << complex.realPart;
    osObject << ", ";
    osObject << complex.imaginaryPart;
    osObject << ")";
    return osObject;
    }
//insertion function
istream& operator>>(istream& isObject, complex& complex){
    char ch;
    isObject >> ch;
    isObject >> complex.realPart;
    isObject >> ch;
    isObject >> complex.imaginaryPart;
    isObject >> ch;
    return isObject;
}
//Overload the operator ==
bool complex::operator==(const complex& otherComplex) const{
    return (realPart == otherComplex.realPart &&
    imaginaryPart == otherComplex.imaginaryPart);
}

//Constructor
complex::complex(double real, double imag){
    realPart = real;
    imaginaryPart = imag;
}

//Setter
void complex::setComplex(const double& real,const double& imag){
    realPart = real;
    imaginaryPart = imag;
}
//Getter
void complex::getComplex(double& real, double& imag) const{
    real = realPart;
    imag = imaginaryPart;
}
//overload the operator +
complex complex::operator+(const complex& otherComplex) const{
    complex temp;
    temp.realPart = realPart + otherComplex.realPart;

    temp.imaginaryPart = imaginaryPart
    + otherComplex.imaginaryPart;
    return temp;
}
//overload the operator *
complex complex::operator*(const complex& otherComplex) const{
    complex temp;
    temp.realPart = (realPart * otherComplex.realPart) -
    (imaginaryPart * otherComplex.imaginaryPart);

    temp.imaginaryPart = (realPart * otherComplex.imaginaryPart)
    + (imaginaryPart * otherComplex.realPart);
    return temp;
}

//Overload the operator -
complex complex::operator-(const complex& otherComplex) const{
    complex temp;
    temp.realPart = realPart - otherComplex.realPart;

    temp.imaginaryPart = imaginaryPart
    - otherComplex.imaginaryPart;
    return temp;
    }

//Overload the operator /
    complex complex::operator/(const complex& otherComplex) const{

        return complex((realPart*otherComplex.realPart + imaginaryPart*otherComplex.imaginaryPart) /
            (pow(otherComplex.realPart, 2) + pow(otherComplex.imaginaryPart, 2)),

            (-1 * realPart*otherComplex.imaginaryPart + imaginaryPart*otherComplex.realPart) /
            (pow(otherComplex.realPart, 2) + pow(otherComplex.imaginaryPart, 2)));
    }

//Overload the operator !
double complex::operator!() const{
   return sqrt(pow(realPart,2) + pow(imaginaryPart,2));
        }

//Overload the operator ~
complex complex::operator~() const{
   return complex(realPart,-1* imaginaryPart);
        }
