/*
Kattis - Dice Game
https://open.kattis.com/problems/dicegame
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
    int gunnar = 0;
    int emma = 0;
    int temp;

    rep(i, 0, 4){
        cin >> temp;
        gunnar += temp;
    }
    rep(i, 0, 4){
        cin >> temp;
        emma += temp;
    }

    if (gunnar > emma){
        cout << "Gunnar" << endl;
    }
    else if (gunnar < emma){
        cout << "Emma" << endl;
    }
    else {
        cout << "Tie" << endl;
    }
}