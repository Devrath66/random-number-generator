#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    srand((unsigned) time(NULL));

    int choice;

    cout<<"enter your choice: 1 for otp, 2 for number for dice, and 3 for random number:";
    cin>>choice;

    switch(choice){
        case 1:{
        int OTP= 100000 + rand() % 900000;
        cout<<"OTP IS :"<<OTP;
        break;
        }

        case 2:{
        int dice= 1 + rand() % 6;
        cout<<"you got :"<<dice;
        break;
        }

        case 3:{
            int random= 1 + rand() % 100000;
            cout<<"random number is:"<<random;
            break;
        }

        default : cout<<"invalid choice";
    }
    
    return 0;
}