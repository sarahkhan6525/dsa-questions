#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int left=0;
    int right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    if(isPalindrome(str)){
        cout<<"is a plaindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}