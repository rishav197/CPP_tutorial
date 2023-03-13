#include<iostream>
using namespace std;


        //Passing Pointers to a function
void Swap(int *a, int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}

int main(){
    int a, b;
    a=10,b=5;

    int *aptr,*bptr;
    aptr=&a;
    bptr=&b;
    cout<<"Pre Swapping"<<endl;
    cout<<a<<" "<<b<<endl;
    Swap(aptr,bptr);
    cout<<"Post Swapping"<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}


// int main(){
   
//     // int a=10;
//     // int *aptr=&a;

//     // cout<<*aptr<<endl;
//     // cout<<"Adress of a = "<<aptr<<endl;

//     // *aptr=20;
//     // cout<<"a = "<<a<<endl;          

//             // Iterate in the Array via Pointer
//     // int arr[] = {10,20,30,40};
//     // // cout<<*arr<<endl;

//     // // cout<<arr<<endl;
//     // int *ptr=arr;
//     // // for(int i=0; i<4; i++){
//     // //     cout<<*ptr<<" ";
//     // //     ptr++;
//     // // }
//     // // OR
//     // for(int i=0; i<4; i++){
//     //     cout<<*(ptr+i)<<" ";
//     // }

//    return 0;
// }

