#include<bits/stdc++.h>
using namespace std ; 
int main(){
    double a,b;
    char op;
    cout<<"enter the operator (+,-,*,/): ";
    cin>>op;
    cout<<"enter the two numbers: "<<endl;
    cin>>a>>b;

    switch(op){
        case '+':
            cout<<a<<op<<b<<"="<< a+b <<endl;
            break;
        case '-':
            cout<<a<<op<<b<<"="<< a-b <<endl;
            break;
        case '*':
            cout<<a<<op<<b<<"="<< a*b <<endl;
            break;
        case '/':
            if(b==0.0){
                cout<<"divide by zero"<<endl;
            }
            else{
                cout<<a<<op<<b<<"="<< a/b <<endl;
            }
            break;
        
        default: 
            cout<<"Invalid operator"<<endl;
        
    }
    return 0 ;
}