/*
Kattis - Spavanac
https://open.kattis.com/problems/spavanac
*/

#include <iostream>

using namespace std;

int main(){
    int H, M, newM;

    cin >> H >> M;

    if (M < 45){
        if (H == 0){
            H = 24;
        }
        H--;
        newM = (60 - (45 - M));
        cout << H << ' ' << newM;
    }
    else{
        newM = M - 45;
        cout << H << ' ' << newM;
    }
}