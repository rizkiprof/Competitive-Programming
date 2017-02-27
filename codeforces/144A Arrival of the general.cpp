#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a[100],minn=101,maxx=0,imin,imax;
cin>>n;
for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
    if(minn>=a[i]){minn=a[i];imin=i;}
    if(maxx<a[i]){maxx=a[i];imax=i;}
}
if (imin>imax) printf("%d",n-imin+imax-1);
else printf("%d",n-imin+imax-2);
}
