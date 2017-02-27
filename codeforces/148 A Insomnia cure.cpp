#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
bool dp[100001];
int a,b,n,m,d,i=1,hasil;
cin>>a>>b>>m>>n>>d;
memset(dp,true,sizeof(dp));
while(a*i<=d){
    dp[a*i]=false;i++;
}
i=1;
if(b%a!=0){
    while(b*i<=d){
        dp[b*i]=false;i++;
    }
}
i=1;
if(m%a!=0&&m%b!=0){
    while(m*i<=d){
        dp[m*i]=false;i++;
    }
}
i=1;
if(n%a!=0&&n%b!=0&&n%m!=0){
    while(n*i<=d){
        dp[n*i]=false;i++;
    }
}
hasil=d;
for(i=1;i<=d;i++) {if(dp[i]==true) hasil--;}
cout<<hasil;
}
