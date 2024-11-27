#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a months number";
    cin>>x;
    // switch(x){
    //     case 1 : //jan
    //         cout<<"31";
    //     break;
    //     case 2 : //Feb
    //         cout<<"28";
    //     break;
    //     case 3 : //March
    //         cout<<"31";
    //     break;
    //     case 4 : //APril 
    //         cout<<"30";
    //     break;
    //     case 5 : //May
    //         cout<<"31";
    //     break;
    //     case 6 : //june
    //         cout<<"30";
    //     break;
    //     case 7 : //july
    //         cout<<"31";
    //     break;
    //     case 8 : //August
    //         cout<<"31";
    //     break;
    //     case 9 : //Sep
    //         cout<<"30";
    //     break;
    //     case 10 : //Oct
    //      cout<<"31";
    //     break;
    //     case 11 : //Nov
    //         cout<<"30";
    //     break;
    //     case 12 : //Dec
    //         cout<<"31";
    //     break;
    //     Default :
    //     cout<<"Invailid numbeer";
    // }
    // 1 3 5 7 8 10 12 -> 31 days
    // 4 6 9  11 -> 30 days
    switch((x<=7 && x%2!=0 ) || (x>=8 && x%2==0)){
        case 1:
        cout<<"31";
    }
    switch(x==4 || x==6 || x==9 || x==11){
        case 1 :
        cout<<"30";
    }
    switch(x){
        case 2 :
        cout<<"28";
    }
    
}