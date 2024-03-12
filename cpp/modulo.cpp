/*
Kattis - Modulo
https://open.kattis.com/problems/modulo
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


int main(){

    int temp, mod;
    vector<int> input;
    vector<int> mods;

    rep(i, 0, 10){
        cin >> temp;
        input.push_back(temp);
    }

    bool found = 0;

    rep(i, 0 , (int)sz(input)){
        mod = input[i] % 42;
        
        trav(a, mods){
            if (a == mod){
                found = 1;
            }
        }
        if (found == 0){
            mods.push_back(mod);
        }
        found = 0;
    }

    cout << sz(mods) << endl;

}