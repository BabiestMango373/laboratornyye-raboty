//
//  main.cpp
//  Метод Ньютона
//
//  Created by Andrey Scherbakov on 17.12.2023.
//

#include <iostream>
#include <cmath>
using namespace std;

const double epsilon = 1e-6;

double f(double x){
    return 3*x - 4*log(x)-5;
}
               
double f1(double x) {
    return 3 - 4 * pow(x, -1);
}

double f2(double x){
    return -4 * -1 * pow(x, -2);
}

int main(){
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    
    if(f(a) * f2(a) > 0)
        c = a;
    else
        c = b;
    while(abs(f(c)) >= epsilon){
        c = c - f(c)/f1(c);
    }
    cout << "c = " << c << endl;
    
}
    
