/*Rajendra Chaganti
24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int i, j;
    for (i = 1; i <= 6; i++) {
        // Print spaces for alignment
        for (j = 1; j <= 6 - i; j++) {
            cout << "  ";
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
/*
Output :
          * 
        * * 
      * * * 
    * * * * 
  * * * * * 
* * * * * * 
*/
