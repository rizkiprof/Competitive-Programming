#include<bits/stdc++.h>
using namespace std;

int main(){
string s,a,b;
int i,x,y,ax[200]={0},sx[200]={0};
bool OK=true;
cin>>a>>b>>s;
a=a+b;
for(i=0;i<a.length();i++){
    ax[i]=a[i];}
for(i=0;i<s.length();i++){
    sx[i]=s[i];}
sort(ax,ax+a.length());
sort(sx,sx+s.length());
for(i=0;i<max(a.length(),s.length());i++){
    if(ax[i]!=sx[i]){OK=false;break;}
}
if(OK)printf("YES");
else printf("NO");
}
