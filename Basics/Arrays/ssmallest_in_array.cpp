#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    int ssmallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<ssmallest&&arr[i]>smallest){
            ssmallest=arr[i];
        }
    }

    cout<<ssmallest;
    return 0;
}