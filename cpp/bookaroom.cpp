/*
Kattis - Booking A Room
https://open.kattis.com/problems/bookingaroom
*/

#include <iostream>

using namespace std;

int main(){
    int r, n, temp;

    cin >> r >> n;

    bool rooms[100] = {};

    // cout << rooms[0] << endl;

    for (int i = 0; i < n; i++){
        cin >> temp;
        rooms[temp-1] = true;
    }

    
    for(int i = 0; i < r; ++i){
        if(rooms[i] == false){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "too late" << endl;



}