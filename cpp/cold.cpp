/*
Kattis - Cold-puter Science
https://open.kattis.com/problems/cold
*/

#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n, temp;
    string temps;

    cin >> n;
    cin.ignore();

    getline(cin, temps);
    stringstream stream(temps);

    while(stream >> temp){
        if (temp >= 0){
            --n;
        }
        else{
            continue;
        }
    }
    cout << n;
}