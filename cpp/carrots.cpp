/*
Kattis - Carrots
https://open.kattis.com/problems/carrots
*/

#include <bits/stdc++.h> 
using namespace std; 

#define rep(i, a, b) for(int i =a; i < (b); ++i) 
#define trav(a,x)for(auto& a : x) 
#define all(x) x.begin(), x.end() 
#define sz(x) (int)(x).size()
typedef long long ll; 
typedef pair<int, int> pii; 
typedef vector<int> vi; 


int main() {

    int numPpl, numProb;
    string temp;

    cin >> numPpl >> numProb;

    rep(i, 0, numPpl){
        cin >> temp;
    }

    cout << numProb << endl;


}
