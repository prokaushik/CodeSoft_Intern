#include<iostream>
using namespace std;

int main(){
    string name;
    int hindi, english, math, science;

    int sum=0;
    int average;

    cout<<"Enter Your name:"<<" ";
    getline(cin,name);

    cout<<"Enter Grades in hindi:"<<" ";
    cin>>hindi;

    cout<<"Enter Grades in math:"<<" ";
    cin>>math;

    cout<<"Enter Grades in english"<<" ";
    cin>>english;

    cout<<"Enter Grades in science:"<<" ";
    cin>>science;

    sum= hindi + english + math + science;
    average = sum/4;

    cout<<"Your Average grade is:"<<" "<<average <<endl;

    if(average>=85 && average<=100){
        cout<<"A"<<endl;
    }
    else if(average>=75 && average<85){
        cout<<"B"<<endl;
    }
    else if(average>=60 && average<75){
        cout<<"C"<<endl;
    }
    else{
        cout<<"D"<<endl;
    }

    return 0;
}