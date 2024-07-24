//brute force would include sorting
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest&&arr[i]<largest){
            slargest=arr[i];
        }
    }
    cout<<slargest;
    return 0;
}