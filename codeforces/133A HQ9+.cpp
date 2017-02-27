#include<iostream>
#include<cstring>
using namespace std;

int main(){
int i;
bool OK=false;
string a;
cin>>a;
i=0;
while(i<a.length()){
    if(a[i]=='H'||a[i]=='Q'||a[i]=='9') {OK=true;break;}
    i++;
}
if(OK) cout<<"YES";
else cout<<"NO";
}
