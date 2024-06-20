#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=15;
    int a=0,b=1;
    cout<<a<<", "<<b<<", ";
    for(int i=2;i<num;i++){
        int next_term=a+b;
        a=b;
        b=next_term;
        cout<<next_term<<", ";
    }
    return 0;
}