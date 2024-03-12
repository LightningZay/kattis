/*
Kattis - Tarifa
https://open.kattis.com/problems/tarifa
*/

#include <iostream>

using namespace std;

int main(){
    int x, n, totalMB, temp;

    cin >> x >> n;
    totalMB = x * (n+1);

    for (int i = 0; i < n; i++){
        cin >> temp;
        totalMB -= temp;
    }

    cout << totalMB << endl;
}