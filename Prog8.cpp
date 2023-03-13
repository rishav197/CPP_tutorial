#include<iostream>
using namespace std;


int getSearch(int arr[], int num, int l, int r){
   int flag=0; // when missing was not found
   if(l<=r){

       int mid=l+(r-l)/2;

       if((l>r) && (flag==1)){
           return mid;
       }

       if(arr[mid]==num){
           flag=0;
       }
       if(arr[mid]>num){
            flag=1;
            return getSearch(arr,num,l,mid-1);
       }
       if(arr[mid]<num){
            flag=1;
            return getSearch(arr,num,mid+1,r);
       }
   }
}

int main() {
    int n;
    cin>>n;

    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++){
        getSearch(arr,i,0,n-1-1);
    }
    return 0;
}