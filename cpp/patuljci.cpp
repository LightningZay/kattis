/*
Kattis - patuljci
https://open.kattis.com/problems/patuljci
*/

#include <iostream>
#include <vector>
#include <numeric>

#define pb push_back

using namespace std;

int main(){
    vector<int> dwarves;
    int dwarf;
    int sum = 0;

    for (int i = 0; i < 9; ++i){
        cin >> dwarf;
        sum += dwarf;
        dwarves.pb(dwarf);
    }
    
    for (int j = 0; j < 9; j++){
        for (int k = 0; k < 9; k++){
            if (j != k && sum - dwarves[j] - dwarves[k] == 100){
                for (auto n: dwarves){
                    if (n != dwarves[j] && n != dwarves[k]){
                        cout << n << endl;
                    }
                }
                return 0;
            }
        }
    }
}