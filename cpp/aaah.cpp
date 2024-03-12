//jon's aah capabilities change every day and needs to find a doc
//whose aah requirements meet his capabilities

#include <iostream>

using namespace std;

int main(){
    string jon, doc;

    cin >> jon >> doc;

    if (jon.size() >= doc.size()){
        cout << "go" << endl;}   
    else {
        cout << "no" << endl;
    }
}