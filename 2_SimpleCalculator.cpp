#include<iostream>
using namespace std;

int main(){
    int num_1,num_2;
    char operation;
    char again;

    cout<<"Enter first number "<<endl;
    cin>>num_1;

    cout<<"Enter the second number "<<endl;
    cin>>num_2;

    cout<<"Press 'A' for Addition"<<endl;
    cout<<"Press 'M' for Multiplication"<<endl;
    cout<<"Press 'S' for Subtraction"<<endl;
    cout<<"Press 'D' for Division"<<endl;
    cin>>operation;

    
        if(operation=='A'){
            cout<<num_1+num_2<<endl;
        }
        else if(operation=='M'){
            cout<<num_1*num_2;
        }
        else if(operation=='D'){
            cout<<num_1/num_2;
        }
        else if(operation=='S'){
            cout<<num_1-num_2;
        }
       
    
    
    
    return 0;
}