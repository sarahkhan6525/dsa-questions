#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int left=0;
    int right=str.length()-1;
    reverse(str.begin(),str.end());
    cout<<str;
}