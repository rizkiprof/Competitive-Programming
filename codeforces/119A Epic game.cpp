#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int gcd(int a,int b){
if (a==0) return b;
else return gcd(b%a,a);}

int main(){
int a,b,n,i=0;
cin>>a>>b>>n;
while(n>0){
    if(i%2==0)n-=gcd(a,n);
    else n-=gcd(b,n);
    i++;
}
if(i%2==1) cout<<0;
else cout<<1;
}
