/*
Kattis - ivebeeneverywhereman
https://open.kattis.com/problems/everywhere
*/

#include <iostream>
#include <vector>
#define pb push_back

using namespace std;

int main(){
    int t, n, a;
    bool flag;
    vector<string> cities;
    string temp;
    
    cin >> t;

    for (int i = 0; i < t; ++i){
        cin >> n;

        for (int j = 0; j < n; ++j){
            cin >> temp;
            a = 0;
            flag = false;

            while(a<cities.size() && flag == false){
                if(cities[a] == temp){
                    flag = true;
                }
                a++;
            }

            if (flag == false){
                cities.pb(temp);
            }
        }
        cout << cities.size() << endl;
        cities.clear();
    }

}