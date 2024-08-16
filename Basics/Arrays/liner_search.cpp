#include<bits/stdc++.h>
using namespace std;
int linear_search(int n,int key,int arr[]){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linear_search(n,key,arr);
}