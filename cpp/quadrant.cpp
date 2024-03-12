/*Kattis - Quadrant

Your job is to take a point and determine the quadrant it is in. 
You can assume that neither of the two coordinates will be 0.

https://open.kattis.com/problems/quadrant

THIS SOLUTION IN ITS CURRENT STATE DOES NOT GUARD AGAINST ZERO-VALUES. THE KATTIS INPUTS DO NOT CONTAIN 0'S
*/


#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0){
        cout << 1 << endl;}

    else if (x < 0 && y > 0){
        cout << 2 << endl;}

    else if (x < 0 && y < 0){
        cout << 3 << endl;}

    else{
        cout << 4 << endl;}
    
}