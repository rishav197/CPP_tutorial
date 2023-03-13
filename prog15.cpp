#include <bits/stdc++.h>
using namespace std;

/* find if a given num is prime or not ?
  N is prime or not ?
  2,3,4,....,N-1 
*/

bool isPrime(int N){
    bool ans=true;
    for(int div=2; div<N; ++div){
        if(N%div==0){
            ans=false;
            break;
        }
    }

    return ans;
}

void primeTillN(int N){
    int num=2;
    bool ans;
    while(num<=N){
        ans=true;
        for(int div=2; div<num; ++div){
            if(num%div==0){
                ans=false;
            }
        }

        if(ans){
            cout<<num<<" ";
        }
        num+=1;
    }
}

int main(){

    // int N=100;
    // if(isPrime(N)){
    //     cout<<to_string(N)+" is Prime"<<endl;
    // }
    // else{
    //     cout<<to_string(N)+" is Not Prime"<<endl;
    // }

    // primeTillN(N);

        // Switch statement
    // int n=10;
    // switch(n)
    // {
    //     case 1:
    //         cout<<"Case 1"<<endl;
    //         break;
    //     case 10:
    //         cout<<"Case 10"<<endl;
    //         break;
    //     // default:
    //     //     cout<<"Default Case"<<endl;
    //     //     break;
    // }


    // int a=5;
    // long b;
    // long long c;
    // long long int d;
    // float e;
    // double f=10.0006;

    // cout<<a<<endl;
    // // cout<<sizeof(b)<<endl;
    // // cout<<sizeof(c)<<endl;
    // // cout<<sizeof(d)<<endl;
    // cout<<sizeof(e)<<endl;
    // cout<<sizeof(f)<<endl;
    // cout<<f<<endl;

    
    // int b=(1,2,3,-100); //assign most latest value to the var "b"
    // cout<<b;

    // char ch1 = 'z';
    // char ch2 = 'a';
    // cout<<int(ch1)+int(ch2)<<endl;
    // cout<<"a = "<<int(ch2)<<endl;
    // cout<<"z = "<<int(ch1)<<endl;

    // int a;
    

    // int N=153039832;
    // int reverseN=0;
    // while(N>0){
    //     int lstdgt = N%10;
    //     reverseN = reverseN*10 + lstdgt;
    //     N=N/10;
    // }
    // cout<<"Reversed N = ";
    // cout<<reverseN<<endl;

    
    


    return 0;
}


