/*
Kattis - Trik
https://open.kattis.com/problems/trik
*/
#include <iostream>

using namespace std;


int main(){
    int pos = 1;
    string moves;

    cin >> moves;

    for (char c : moves){
        if(c == 'A'){               //A

            if (pos == 1){
                pos = 2;
            }
            else if (pos == 2){
                pos = 1;
            }
            else{
                continue;
            }
        }
        else if(c == 'B'){          //B

            if (pos == 2){
                pos = 3;
            }
            else if (pos == 3){
                pos = 2;
            }
            else{
                continue;
            }
        }
        else if(c == 'C'){          //C

            if (pos == 1){
                pos = 3;
            }
            else if (pos == 3){
                pos = 1;
            }
            else{
                continue;
            }
        }

    }
    cout << pos << endl;
}