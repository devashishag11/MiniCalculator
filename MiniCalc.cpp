#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
char op;
cout<<"enter a"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
cout<<"enter operation"<<endl;
cin>>op;
switch(op){

case '+': cout<<(a+b)<<endl;
break;

case '-': cout<<(a-b)<<endl;
break;
case '*': cout<<(a*b)<<endl;
break;
case '/': cout<<(a/b)<<endl;
break;
case '%': cout<<(a%b)<<endl;
break;
default:cout<<"enter a valid argument"<<endl;
}

    return 0;
}


