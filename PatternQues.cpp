#include<iostream>
using namespace std;

int main(){
    
    // Ques1
    // int row, col;
    // cin>>row>>col;

    // for (int i = 1; i<=row; i++)
    // {
    //     for(int j=1; j<=col; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // Ques2
    // int row,col;
    // cin>>row>>col;
    
    // for(int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         if(i==1 || i==row || j==1 || j==col){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
        

    // Ques3
    // int n;
    // cin>>n;

    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // Ques4
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Ques5 

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    // Ques6

    // int n;
    // cin>>n;
    // int count=1;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }


    // Ques7
    // int n;
    // cin>>n;
    // // Upper Part
    // for(int i=1; i<=n; i++){
    //     int empty_space=2*n-2*i;
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=1; j<=empty_space; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // // Lower Part
    // for(int i=n; i>=1; i--){
    //     int empty_space=2*n-2*i;
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=1; j<=empty_space; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Ques8
    // in
    
    // Ques9
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Ques11
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // Ques12
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     int j;
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     int k=i;
    //     for(; j<=n; j++){
    //         cout<<k--<<" ";
    //     }
    //     k=2;
    //     for(; j<=n+i-1; j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }


    // Ques13
    int n;
    cin>>n;

    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        cout<<"last digi = "<<lastdigit<<endl;
        reverse=reverse*10 + lastdigit;
        cout<<"reverse ="<<reverse<<endl;
        n=n/10;
    }
    cout<<reverse<<endl;


    return 0;
}