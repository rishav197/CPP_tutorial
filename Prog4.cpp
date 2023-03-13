#include<iostream>
using namespace std;

int main(){

    int N,A,B,C;  //C is the no. of users who solved 1 Problem

    cin>>N>>A>>B;

    C = N-(A+B);
    cout<<(B+C)<<" "<<C<<endl;
    return 0;
}