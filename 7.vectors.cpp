//
// Created by himanshu on 10/30/19.
//


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector(10);
    int myArray[5] = {1, 2, 3, 4, 5};
    myVector.insert(myVector.begin(), myArray, myArray + 3);
    cout<<myVector.at(3)<<endl;

    myVector.insert(myVector.begin()+3,30);
    cout<<myVector.at(3)<<endl;

    myVector.push_back(50);
    cout<<myVector.back()<<endl;

    myVector.pop_back();
    cout<<myVector.back()<<endl;
    cout<<myVector.size()<<endl;






}