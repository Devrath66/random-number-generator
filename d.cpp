#include<iostream>
using namespace std;

int main(){
    char op;
    int a=4,b=5;

    cout<<"enter op:";
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        default :
        cout<<"invalid op";
    } return 0;
}