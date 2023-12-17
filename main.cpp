//
//  main.cpp
//  метод половинного деления
//
//  Created by Andrey Scherbakov on 17.12.2023.
//

#include <iostream>
#include <cmath>
using namespace std;

const double epsilon = 1e-6;

int main(){
    setlocale(LC_ALL, "RU");
    double a, b, c;
    double fb, fc;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    
    while(abs(b-a) > epsilon){
        c = (a+b)/2;
        fb = 3*b - 4 * log(b) - 5;
        fc = 3*c - 4 * log(c) - 5;
        if(fc * fb < 0)
            a = c;
        else
            b = c;
    }
    cout << b << endl;
    
    return 0;
}
