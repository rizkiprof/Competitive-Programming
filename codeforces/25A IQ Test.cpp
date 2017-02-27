#include<cstdio>
using namespace std;

int main(){
int n,a[10000],x,d1=0,out,keluar;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&x);
    a[i]=x%2;
    if(a[i]==1) {
        d1++;
        out=i;
    }
    if(a[i]==0) {
        keluar=i;
    }
}
if(d1==1) printf("%d",out);
else printf("%d",keluar);
}
