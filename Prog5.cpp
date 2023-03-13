#include<iostream>
using namespace std;

int main(){

    int T,X,Y;
    cin>>T;

    for(int i=0; i<T; i++){
        int diff;
        cin>>X>>Y;

        if(X>=Y){
            cout<<0<<endl;
        }else{ // X<Y
            diff=Y-X;
            if(diff<8){
                cout<<1<<endl;
            }
            else if(diff%8==0){
                cout<<(diff/8)<<endl;
            }
            else if(diff%8!=0){
                cout<<(diff/8)+1<<endl;
            }
        }
    }

    return 0;
}