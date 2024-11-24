#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter a cost price : ";
    cin>>cp;

    int sp;
    cout<<"Enter a selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    else{
        cout<<"Loss = "<<cp-sp; 
    }
    if(sp==cp){
        cout<<"No profit, No loss";
    }
}