#include<bits/stdc++.h>
using namespace std;
int main(){
    double base;
    double expo1,expo2;
    cin>>base>>expo1>>expo2;
    double res1=pow(base,expo1);
    double res2=pow(base,expo2);
    cout << base << " ^ " << expo1 << " = " << res1 << endl;
    cout << base<<" ^ "<<expo2<<" = "<<res2<<endl;
    return 0;
}