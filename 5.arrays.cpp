//
// Created by himanshu on 10/30/19.
//

#include <iostream>
using namespace std;

int main(){
    //arrays to store multiple values of same datatype
    int myArray[4]={1,2,3,4};
    cout<<"First Number "<<myArray[0]<<endl;
    //arrays can be of 2D
    char charArray[3][3]={{'a','b','c'},{'d','e','f'}};
    cout<<"First character "<<charArray[0][0]<<endl;

    //using for loops to print multiples of 2
    for (int i=1;i<=10;i++){
        cout<<i*2<<endl;
    }
    //using loops to print an array
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<charArray[i][j];
        }
    }
    cout<<endl;
    //using while loops to print multiple of 2
    int start=1;
    while (start<=10){
        cout<<start*2<<endl;
        start++;
    }
}