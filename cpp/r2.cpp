//s = (r1 + r2)/2. We have s & r1, what is r2?

#include <iostream>

using namespace std;

int main(){
    int r1, r2, s;
    cin >> r1 >> s;
    
    r2 = (s*2) - r1;
    cout << r2 << endl;
}