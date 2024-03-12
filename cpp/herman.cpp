#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int r;
    cin >> r;
    
    double taxi, eucl;
    
    taxi = 2 * (r * r);
    eucl = M_PI * (r * r);

    cout << fixed << setprecision(4);

    cout << M_PI << endl;
    cout << eucl << endl;
    cout << taxi << endl;
}