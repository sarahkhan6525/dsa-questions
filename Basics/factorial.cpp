#include<bits/stdc++.h>
using namespace std;
int main(){
    int fact=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}