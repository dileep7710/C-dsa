#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Divisible by 5 and 3";
        }
        else{
            cout<<"Number is divisible by 5 but not 3";
        }
        
    }
    else{
        cout<<"Not matching condition";
    }

}
