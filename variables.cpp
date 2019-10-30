//
// Created by himanshu on 10/29/19.
//

#include <iostream>


int main(){

    std::cout<<"Hello World"<< std::endl;
    //value will remain constant
    const double PI=3.14;
    //char 1byte in memory
    char myGrade = 'A';
    //boolean true or false
    bool isEmpty = true;
    //float accurate upto 6 decimal places
    float myNum = 3.1488585;
    //double are accurate upt to 15
    float newNum = 1.645678987654345678;

    std::cout<<"newNum :"<<newNum;
    std::cout<<"Size of my grade : "<< sizeof(myGrade);
    return 0;

}
