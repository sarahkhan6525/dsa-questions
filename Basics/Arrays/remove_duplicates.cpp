#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int n, int arr[]){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<remove_duplicate(n,arr);
    return 0;
}