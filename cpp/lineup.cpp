/*
Kattis - lineup
https://open.kattis.com/problems/lineup
*/
#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

int main(){
    int n, count;
    string player;
    vector<string> team;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> player;
        team.pb(player);
    }
    // cout << "team.size() = " << team.size() << endl;

    count = 0;

    for (int j = 1; j < n; j++){
        for (int k = 0; k < min(team[j].length(), team[j-1].length()); k++){
            if (team[j][k] > team[j-1][k]){
                ++count;
                break;
            }
            else if (team[j][k] < team[j-1][k]){
                --count;
                break;
            }
            else{
                continue;
            }
        }
    }

    if (count == team.size()-1){
        cout << "INCREASING" << endl;
    }
    else if (count == (team.size() * -1)+1){
        cout << "DECREASING" << endl;
    }
    else {
        cout << "NEITHER" << endl;
    }
}