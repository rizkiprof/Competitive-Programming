#include<bits/stdc++.h>
using namespace std;

int main(){
int n,maxx,minn,y=0,a;
scanf("%d",&n);
scanf("%d",&maxx);
minn=maxx;
n--;
while(n--){
    scanf("%d",&a);
    if(a>maxx) {maxx=a;y++;}
    if(a<minn) {minn=a;y++;}
}
printf("%d",y);
}
