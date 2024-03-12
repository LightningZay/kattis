//The outermost c inches/cm of a pizza do not have cheese. 
//find the amount of pizza without cheese on it.

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int r, c, lilR;
    
    cin >> r >> c;
    lilR = r - c;
    
    double percentCheese = (M_PI * (lilR * lilR)) / (M_PI * ( r * r)) * 100;

    cout << fixed << setprecision(6);    
    cout << percentCheese << endl;
}