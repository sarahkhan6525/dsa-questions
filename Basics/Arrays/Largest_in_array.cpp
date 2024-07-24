//this is optimal brute will include sorting and will retrurn the last element
//largest=arr[n-1]
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
     cout<<largest<<endl;
return 0;
}