#include<bits/stdc++.h>
using namespace std;

int main(){
int n,A[25][60]={0},h,m,x=1;
cin>>n;
for(int i=1;i<=n;i++){
    scanf("%d%d",&h,&m);
    A[h][m]++;
}
for(int i=0;i<=23;i++){
    for(int j=0;j<=59;j++){
        if(A[i][j]>x) x=A[i][j];
    }
}
printf("%d",x);
}
