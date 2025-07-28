/*Rajendra Chaganti
24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int i, j;
    for (i = 6; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
/*
Output :
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/

