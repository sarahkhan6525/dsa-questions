#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,x1,x2,realPart,imaginaryPart;
    cin>>a>>b>>c;
    float d=b*b-4*a*c;
    if(d>0){
        x1=(-b+sqrt(d)/(2*a));
        x2=(-b-sqrt(d)/(2*a));
        cout<<"Roots are real and different"<<endl;
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else if(d==0){
        cout<<"Roots are real and equal"<<endl;
        x1=-b/2*a;
        cout<<"x1=x2="<<x1<<endl;
    }
    else{
        realPart=-b/2*a;
        imaginaryPart=sqrt(-d)/2*a;
        cout<<"Roots are complex and different"<<endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}