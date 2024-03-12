/*
Kattis - Reversed Binary Numbers
https://open.kattis.com/problems/reversebinary
*/

#include <bits/stdc++.h> 
#include <string>
#include <algorithm>
#include <cmath>

using namespace std; 

#define rep(i, a, b) for(int i =a; i < (b); ++i) 
#define trav(a,x)for(auto& a : x) 
#define all(x) x.begin(), x.end() 
#define sz(x) (int)(x).size()
typedef long long ll; 
typedef pair<int, int> pii; 
typedef vector<int> vi; 


int main() {

    int numToReverse, temp, begin, end, base, lastDigit, revDecNum;
    string binaryNum;

    cin >> numToReverse;
    temp = numToReverse;


    if (numToReverse == 0){
        cout << 0 << endl;
        return 0;
    }

    while(temp){
        binaryNum = to_string(temp % 2) + binaryNum;
        temp /= 2;
    }
    cout << binaryNum << endl;
    reverse(all(binaryNum));
    cout << binaryNum << endl;

    revDecNum = 0;

    rep(i, 0, (int)sz(binaryNum)){
        revDecNum += (binaryNum.at(((int)sz(binaryNum) - i - 1)) - 48) * pow(2, i);
    }

    cout << revDecNum;

}