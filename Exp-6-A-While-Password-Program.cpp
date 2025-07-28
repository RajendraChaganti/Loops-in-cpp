/*Rajendra Chaganti
24070123150
B3
*/
#include <iostream>
using namespace std;
int main(){
    string password="3985";// Set correct password
    string input;
    cout <<"Enter your password:";
    cin>>input;
    while(input != password){
        cout<<"Incorrect password.Try again: ";
        cin>>input;
    }
    cout<<"Password accepted.Access granted!"<<endl;
    return 0;
}
/*
Output :
Enter your password:3012
Incorrect password.Try again: 3323
Incorrect password.Try again: 3985
Password accepted.Access granted!
*/

