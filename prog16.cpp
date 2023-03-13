#include<bits/stdc++.h>
using namespace std;

void checkPrime(int num){
    if(num==1){
        // cout<<"Not Prime"<<endl; 
        return;
    }
        
    for(int i=2; i<num; ++i){
        // cout<<i<<endl;
        if(num%i==0){
            // cout<<"Not Prime"<<endl;
            return;
        }
    }
    // cout<<"Prime"<<endl;   
    cout<<num<<" " ;
}

void Swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    // int n; cin>>n;
    // checkPrime(n);

    // int a, b; 
    // cin>>a>>b;
    // for(int num=a; num<=b; ++num){
    //     checkPrime(num);
    // }

    // int a=10;
    // int *b;
    // b = &a;
    // cout<<&a<<endl;
    // cout<<*(&a)<<endl;
    // cout<<*b<<endl;
    /*
    int a = 10;
    int b = 90;
    int *aptr = &a;
    int *bptr = &b;

    float flt = 4/3;
    cout<<(*aptr + *bptr)<<endl;
    cout<<(*aptr - *bptr)<<endl;
    cout<<(*aptr * *bptr)<<endl;
    cout<<(float(*aptr) / float(*bptr))<<endl;
    cout<<(float(*aptr) / *bptr)<<endl;
    cout<<(*aptr / float(*bptr))<<endl;
    */

   //Pointers and Arrays

    // int arr[] = {10, 20, 30, 40, 50};
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // for(int i=0; i<5; ++i){
    //     cout<<*(arr+i)<<" ";
    // }

    // int *ptr = arr;
    // for(int i=0; i<5; ++i){
    //     cout<<*ptr<<" ";
    //     ++ptr;
    // }

    /* 
    //Passing pointer to a function

    int a = -40;
    int b = -60;

    cout<<"Before Swap:"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    Swap(&a,&b);
    cout<<"After Swap:"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    */

   

   


    return 0;
}

