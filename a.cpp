#include<iostream>
using namespace std;

int main(){
  int a =10 ;
  int *ptr =&a;
  int **parptr = &ptr;

  cout<<a<<"\n";
  cout<<&a<<"\n";
  cout<<ptr<<"\n";
  cout<<&ptr<<"\n";
  cout<<*ptr<<"\n";
  cout<<parptr<<"\n";
  cout<<**parptr<<"\n";
  cout<<*parptr<<"\n";
  cout<<&parptr;
}