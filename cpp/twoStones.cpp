/* 
Kattis - Two Stones
https://open.kattis.com/submissions/12317375

*/
#include <iostream>

using namespace std;

int main(){
    int N;

    cin >> N;

    if (N % 2 == 1){
        cout << "Alice" << endl;
    }
    else {
        cout << "Bob" << endl;
    }
}