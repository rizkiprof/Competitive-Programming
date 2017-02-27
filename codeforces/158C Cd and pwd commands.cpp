#include<bits/stdc++.h>
using namespace std;

int main(){
string command,perintah,program[100];
int n,j,k=1;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>command;
    if(command=="cd") {
        cin>>perintah;
        j=0;
        while(j<perintah.length()){
            if(perintah[j]!='.'){
                while(perintah[j]!='/'&&j<perintah.length()){
                    if(program[k-1]==""&&k!=1)k--;
                        program[k]+=perintah[j];
                        j++;
                }
                k++;j++;
            }
            else {
                k--;
                program[k]="";
                while(perintah[j]!='/'&&j<perintah.length())j++;
                j++;
            }
        }
    }
    else {
        for(int l=1;l<=k;l++){
            cout<<"/"<<program[l];
        }
    cout<<endl;
    }
}
}
