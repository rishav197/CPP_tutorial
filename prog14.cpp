#include <bits/stdc++.h>
using namespace std;
/* Brush up-->Recursion */

void funcLR(int n, int arr[], int i){
    if(i==n){
        cout<<endl;
        return;
    }
    cout<<arr[i]<<" ";
    funcLR(n,arr,++i);

}

void funcRL(int n, int arr[], int i){
    if(i==0){
        cout<<arr[i]<<endl;
        return;
    }
    cout<<arr[i]<<" ";
    funcRL(n,arr,--i);
}

void strLR(int n, string s, int i, string ans){
    if(i==n){
        cout<<ans<<endl;
        return;
    }
    char ch = s[i];
    strLR(n,s,++i,ans+ch);
}

void strRL(int n, string s, int i, string ans){
    if(i==0){
        ans = ans+s[i];
        cout<<ans<<endl;
        return;
    }
    char ch = s[i];
    strRL(n,s,--i,ans+ch);
}

int main(){

    // int arr[] = {2,4,5,6,7,8,0,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"n = "<<n<<endl;

    // funcLR(n, arr, 0);
    // funcRL(n, arr, n-1);

    // string s = "APPLE";
    // int n = s.length();
    // cout<<"n = "<<n<<endl;
    // strLR(n,s,0,"");
    // strRL(n,s,n-1,"");

    return 0;
}