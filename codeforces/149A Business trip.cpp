#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a>b;
}
int main(){
int n,i,x=0,a[13]={0};
cin>>n;
for(i=1;i<=12;i++){
    cin>>a[i];
}
i=0;
sort(a+1,a+1+12,cmp);
while(x<n&&i<12){
    i++;
    x+=a[i];
}
if(x<n)cout<<"-1";
else cout<<i;
}
