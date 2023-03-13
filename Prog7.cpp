#include<iostream>
using namespace std;

// void checkPrime(int num){
//     if(num==1){
//         cout<<"Not a Prime"<<endl;
//         return;
//     }    

//     for(int i=2; i<num; i++){

//         if(num%i==0){
//             cout<<"Not a Prime"<<endl;
//             return;
//         }
//     }
//     cout<<"Prime"<<endl;
// }

bool checkPrime1(int num){
    int div=2;
    bool flag;

    if(num==1){
        flag=false;
        return flag;
    }

    while(div<num){
        if(num%div==0){
            flag=false;
            return flag;
        }
        div+=1;
    }
    flag=true;
    return flag;
}

    

int main(){
    
    // int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};

    // int n=sizeof(arr)/sizeof(arr[0]);
    // // cout<<n<<endl;

    // for(int i=0; i<n-1; i++){
    //     if((arr[i]>0) && (arr[i+1]<0)){
    //         swap(arr[i], arr[i+1]);
    //     }
    // }
    
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // for(int i=1; i<=100; i++){ // To print no.s which is not divisible by 3
       
    //     if(i%3==0){
    //         continue;
    //     }else{
    //         cout<<i<<" ";
    //     }
    
        // To check whether a no is prime or not ?
    // int n;
    // cout<<"n = ";
    // cin>>n;

    int a,b;
    cin>>a>>b;

    // checkPrime(n);
    
    for(int num=a; num<=b; num++){
        bool ans=checkPrime1(num);
        if(ans){
            cout<<num<<" ";
        }
    }


    return 0;
}


