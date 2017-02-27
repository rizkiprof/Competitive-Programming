#include<bits/stdc++.h>
using namespace std;

int main(){
int x[10]={0},a,b,c,d,y=0;
cin>>a;
x[1]++;
cin>>b;
if(b==a)x[1]++; else x[2]++;
cin>>c;
if(c==a)x[1]++;
else if(c==b) x[2]++;
else x[3]++;
cin>>d;
if(d==a)x[1]++;
else if(d==b) x[2]++;
else if(d==c) x[3]++;
else x[4]++;
if(x[1]>1)y=x[1]-1;
if(x[2]>1)y+=x[2]-1;
if(x[3]>1)y+=x[3]-1;
cout<<y;
}
