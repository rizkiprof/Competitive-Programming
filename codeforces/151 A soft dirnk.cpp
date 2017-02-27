#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n,l,k,c,d,p,nl,np,t1,t2,t3,x;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
t1=(k*l)/nl;
t2=(c*d);
t3=p/np;
x=min(t1,t2);
x=min(x,t3);
cout<<x/n;
}