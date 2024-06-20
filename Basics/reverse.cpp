#include<bits/stdc++.h>
using namespace std;
int main (){
    int num,reverse=0,rem;
    cin>>num;
    do{
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }while(num!=0);
    cout<<reverse;
    return 0;
}