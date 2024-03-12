#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    if((x == true && y == false) || (x == false && y == true)){
        ans = true;
    }
    else {
        ans = false;
    }
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    if(x == true && y == false){
        ans = false;
    }
    else {
        ans = true;
    }
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    if((x == true && y == true ) || (x == false & y == false)){
        ans = true;
    }
    else {
        ans = false;
    }
}
