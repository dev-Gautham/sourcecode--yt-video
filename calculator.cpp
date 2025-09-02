#include<iostream>
using namespace std;
int main(){
    int op; // for operator
    float num1,num2;// for user input

    // options for performing operations
    cout<<"Enter 1 for addition, 2 for substraction , 3 for multiplication and 4 for division - ";

    cin>>op;

    //taking input from user
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter second number ";
    cin>>num2;

    // selecting operation to be performed using swtich case
    switch(op){
        case 1:
            cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<(num1+num2);
            break;
        case 2:
            cout<<"Substraction of "<<num1<<" and "<<num2<<" is "<<(num1-num2);
            break;
        case 3:
            cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<(num1*num2);
            break;
        case 4:
            cout<<"Division of "<<num1<<" and "<<num2<<" is "<<(num1/num2);
            break;
        default:
            cout<<"You have entered a wrong choice! Please enter a valid option";
    }

    return 95;
}