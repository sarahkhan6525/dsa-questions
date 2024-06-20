#include<bits/stdc++.h>
using namespace std;
int main(){
    int div,num,sum=0;
    cin>>num;
    for(int i=1;i<num;i++){
        div =num%i;
        if(div==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"perfect";
    }
    else{
        cout<<"not a perfect no.";
    }
    return 0;
}