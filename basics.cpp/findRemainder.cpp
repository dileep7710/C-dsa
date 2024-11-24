#include<iostream>
using namespace std;
int main(){
    int a=12; // a means divided
    int b=5; // b is divisor
    int q=a/b;// q is remainder
    int r; // r is remainder
    // a = (b*q) + r
    r = a-(b*q); 
    cout<<r;
}