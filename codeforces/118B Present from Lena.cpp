#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,j=0;
scanf("%d",&n);
for(int x=0;x<=2*n;x++){
    i=n-abs(x-n);
    j=0;
    while(j<n-i){printf("  ");j++;}
    j=i;
    while(j>-i) {printf("%d ",i-abs(j));j--;}
    printf("0\n");
}
}
