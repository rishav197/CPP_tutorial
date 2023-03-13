#include<iostream>
using namespace std;

int max(int num1, int num2){
    int ans=(num1>num2)? num1: num2;
    return ans;
}
int main(){
    int T,X,Y;
    cin>>T;

    for(int i=0; i<T; i++){
        cin>>X>>Y;
        // A -> B
        int ptsA,ptsB,totalAB,totalBA;

        ptsA=500-(2*X);
        ptsB=1000-(4*(X+Y));
        totalAB=ptsA+ptsB;

        // B -> A
        ptsA=1000-(4*Y);
        ptsB=500-(2*(X+Y));
        totalBA=ptsA+ptsB;

        cout<<max(totalAB,totalBA)<<endl;
    }

    return 0;
}
