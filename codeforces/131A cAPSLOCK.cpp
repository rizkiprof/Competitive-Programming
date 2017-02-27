#include<string>
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
bool OK;
string s;
cin>>s;
if(s[0]>=97&&s[1]<=90){
    for(int i=2;i<s.length();i++){
        if(s[i]<=90) OK=true;
        else {OK=false; break;}
    }
    if(OK){
        printf("%c",s[0]-32);
        for(int i=1;i<s.length();i++){
            printf("%c",s[i]+32);
        }
    }
    else cout<<s;
}
else if(s[0]<=90&&s[1]<=90){
    for(int i=2;i<s.length();i++){
        if(s[i]<=90) OK=true;
        else {OK=false; break;}
    }
    if(OK){
        printf("%c",s[0]+32);
        for(int i=1;i<s.length();i++){
            printf("%c",s[i]+32);
        }
    }
    else cout<<s;
}
else cout<<s;
}
