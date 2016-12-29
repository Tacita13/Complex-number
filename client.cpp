//Client file
//******************************************************************
//
//   Programador : Isamar López Rodríguez CCOM 3034 Sección 0U1
//   Num. Est.   : 801-08-3174            Primer Semestre 2016-2017
//   Asignación 3                         Prof. R. J. Colorado
//   Archivo     : client.cpp             Fecha : 08/09/16
//
//******************************************************************
//    Propósito :This file holds the main that finally displays the values
//               of the class complex(real, imaginary) through a function
//               called calculate.
//
//******************************************************************
#include <iostream>
#include "complex.h"
using namespace std;



void Calculate(complex c1, complex c2) ;

int main()
{
    complex c1, c2 ;
    cin >> c1 ;
    cin >> c2 ;
    Calculate(c1, c2) ;

    if (c1 == c2)
       cout << c1 << " y " << c2 << " son iguales.\n" ;
    else
        cout << c1 << " y " << c2 << " NO son iguales.\n" ;

    cout << "El complemento de " << c1 << " es " << ~c1 << endl ;
    cout << "El valor absoluto de " << c1 << " es " << !c1 << endl ;

    return 0 ;
}
//displays the results of the different functions of class complex
void Calculate(complex c1, complex c2)
{
     cout << c1 << " + " << c2 << " = " << c1 + c2 << endl ;
     cout << c1 << " - " << c2 << " = " << c1 - c2 << endl ;
     cout << c1 << " * " << c2 << " = " << c1 * c2 << endl ;
     cout << c1 << " / " << c2 << " = " << c1 / c2 << endl ;

}
