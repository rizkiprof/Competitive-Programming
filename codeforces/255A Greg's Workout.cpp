#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a,chest=0,bicep=0,backk=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a;
    if(i%3==1)chest+=a;
    if(i%3==2)bicep+=a;
    if(i%3==0)backk+=a;
}
if(chest>bicep&&chest>backk) cout<<"chest";
if(bicep>chest&&bicep>backk) cout<<"biceps";
if(backk>chest&&backk>bicep) cout<<"back";
}
