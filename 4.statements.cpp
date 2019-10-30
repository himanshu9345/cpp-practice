//
// Created by himanshu on 10/29/19.
//

#include <iostream>
using namespace std;

int main(){
//if else statements
   int value1= 70;
   int value2=70;
   bool isSame= true;

   if (value1!=value2){
       isSame= false;
   }
   else{
       isSame= true;
   }
   cout<<"numbers same??"<<isSame<<endl;
//switch statement
    int whichCase=3;
    switch (whichCase){
        case 1:
            cout<<"in case 1"<<endl;
            break;
        case 2:
            cout<<"in case 2"<<endl;
            break;
        default:
            cout<<"No case matched :("<<endl;

    }

    return 0;

}