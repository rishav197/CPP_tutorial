#include<iostream> 
#include<string>
#include<climits> 
using namespace std;

void increment(int *ptr){
    *ptr += 5;
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

    /* MIN MAX */
    // int arr[]={-9,-8,7,6,5,4,3,2,1,0};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int maxNum=INT_MIN;
    // int minNum=INT_MAX;
    // // cout<<minNum<<endl;

    // for(int i=0; i<n; i++){
    //     if(arr[i]<minNum){
    //         minNum=arr[i];
    //     }
    //     if(arr[i]>maxNum){
    //         maxNum=arr[i];
    //     }
    // }
    // cout<<"Max Num = "<<maxNum<<endl;
    // cout<<"Min Num = "<<minNum<<endl;

    /* Max till ith idx */
    // int arr[]={1,0,5,4,6,8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int mx=INT_MIN;
    // for(int i=0; i<n; i++){
    //     mx=max(mx,arr[i]);
    //     cout<<mx<<" ";
    // }


    /* Sub arrays */
    // int arr[]={1,2,0,7,2};
    // int n=5;
    // int curr;
    // for(int i=0; i<n; i++){
    //     curr=0;
    //     for(int j=i; j<n; j++){
    //        curr+=arr[j];
    //        cout<<curr<<endl;
    //     }
    // }

    // int a = 10;
    // int *aptr;
    // aptr=&a;
    // int *bptr;
    // bptr=aptr;
    // int *cptr;
    // cptr=bptr;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<*aptr+90<<endl;
    // cout<<*cptr<<endl;
    // *aptr=-10;
    // cout<<*cptr<<endl;

    // char ch = 'b';
    // char *chptr=&ch;
    // string s="ac";
    // cout<<ch<<endl;
    // cout<<s+*chptr<<endl;

    /* Pointers and Arrays */
    // int n; cin>>n; int arr[n];
    // for(int i=0; i<n; i++){ cin>>arr[i]; }
    // int arr[]={2,3,2,2}; int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Print"<<endl;
    // int *ptr = arr;
    // // cout<<*arr<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<*ptr+10<<" ";
    //     ptr++;
    // } cout<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<*(arr+i)<<" ";
    // }

    /* Pointer to Pointer(IMPORTANT) */
    // int a=10;
    // int *ptr;
    // ptr=&a; //ptr stores address of var a
    // cout<<*ptr<<endl;
    // int **ptr2;
    // ptr2=&ptr; //ptr2 stores address of var ptr
    // cout<<**ptr2<<endl;

    /* Passing ptr to a function */
    // int a=10;
    // int *aptr=&a;
    // cout<<a<<endl;
    // increment(aptr);
    // cout<<a<<endl;

    /* SWAP by using pointers */ 
    // int a, b;
    // a = 10;
    // b = -5;
    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;
    // swap(&a,&b);
    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;




    return 0;
}