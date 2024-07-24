#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int count=0;
    cin>>str;
    char check;
    cin>>check;
    for(int i=0;i<str.length();i++){
        if(str[i]==check){
            count++;
        }
    }
    cout<<count;
}