#include<iostream>
using namespace std;

void sum(){
    int add1,add2;
    cout<< "For addition \n Enter the value of num1: \n";
    cin>>add1; 
    cout<< "For addition \n Enter the value of num2: \n";
    cin>>add2;
    cout<< "The sum of the two numbers you entered is: " << add1+add2;
}

int main(){
    int add,mul;
    int num1, num2;
    sum();
    cout<< "\n Now for multiplication \n Enter the value of num1: \n";
    cin>>num1; 
    cout<< "Enter the value of num2: \n";
    cin>>num2; 
    cout<< "The product of the two numbers you entered is: " << num1*num2;
    return 0;
}
