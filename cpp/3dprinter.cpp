/*
Kattis - 3D Printer
https://open.kattis.com/problems/3dprinter
*/

#include <bits/stdc++.h> 
#include <cmath>

using namespace std; 

#define rep(i, a, b) for(int i =a; i < (b); ++i) 
#define trav(a,x)for(auto& a : x) 
#define all(x) x.begin(), x.end() 
#define sz(x) (int)(x).size()
typedef long long ll; 
typedef pair<int, int> pii; 
typedef vector<int> vi; 

int main(){
    int statues, statuesComplete, days  = 0;
    int printers = 1;

    cin >> statues;

    //Iterative Solution 

    while(statuesComplete < statues){
        if(statues - statuesComplete > printers){
            printers += printers;
            days += 1;
        }
        else{
            statuesComplete += printers;
            days += 1;
        }
    }
    cout << days << endl;

    //Faster Solution
    // days = ceil(log2(statues));
    // cout << minDays + 1 << endl;


    
}