/*
Kattis - FizzBuzz
https://open.kattis.com/problems/fizzbuzz
*/
#include <iostream>

using namespace std;

int main(){
    int X, Y, N;

    cin >> X >> Y >> N;
    cout << '\n';

    for (int i = 1; i <= N; ++i){
        if(i % X == 0 && i % Y == 0){
            cout << "FizzBuzz" << endl;
            continue;
        }
        else if(i % Y == 0){
            cout << "Buzz" << endl;
            continue;
        }
        else if(i % X == 0){
            cout << "Fizz" << endl;
            continue;
        }
        cout << i << endl;
    }
}