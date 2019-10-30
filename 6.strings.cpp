//
// Created by himanshu on 10/30/19.
//

#include <iostream>
using namespace std;

int main() {
    //how to read string from user
    int userLuckyNumber = -1;
    string userNumber;
//    getline(cin, userNumber);
//    userLuckyNumber=stoi(userNumber);
//    cout<<"Your Lucky Number is :"<<userLuckyNumber<<endl;

    char myChar='I';
    string appendString=" am Himanshu";
    cout<<myChar+appendString<<endl;

    string animal1="dog";
    string animal2="cat";
    cout<<animal1.compare(animal2)<<endl;
    cout<<animal2.compare(animal1)<<endl;
    cout<<animal1.compare(animal1)<<endl;

}