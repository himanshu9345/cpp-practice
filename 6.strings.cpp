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

    string animal3=animal1.assign(animal1);
    cout<<animal1<<endl;
    cout<<animal3<<endl;
    cout<<animal3.find("og",2)<<endl;

    string newAnimal=animal1.insert(0,"D");
    cout<<newAnimal<<endl;

    newAnimal=animal1.replace(0,1,"R");
    cout<<newAnimal<<endl;

    newAnimal=animal1.erase(0,1);
    cout<<newAnimal<<endl;

}