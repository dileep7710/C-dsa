#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :--";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"Divisible by 5 or 3";
    }
    else{ 
        cout<<" Not Divisible by 5 or 3 ";
    }
}