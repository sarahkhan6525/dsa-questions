#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(isAnagram(str1,str2)){
        cout<<"Is an anagram";
    }
    else{
        cout<<"not an anagram";
    }
    return 0;
}