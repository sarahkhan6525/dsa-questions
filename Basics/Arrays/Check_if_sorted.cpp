#include<bits/stdc++.h>
using namespace std;
bool isSorted(int n, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i-1]){
            return true;
        }
        return false;
    }
    return false;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(n,arr)){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}
