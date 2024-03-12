#include <iostream>

using namespace std;

int main(){
    int articles, score;
    cin >> articles >> score;
    
    int citations = (articles * (score - 1)); 
    cout << citations + 1 << endl; //min # of citations needed to obtain score
    
}