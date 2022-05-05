#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int n,t,i,j;
string s;
cin>>n>>t;
getchar();
getline(cin,s);

for(i=0;i<t;i++){

for(j=0;j<s.size();j++){
if(s[j]=='B' && s[j+1]=='G')
{
        s[j]='G';
        s[j+1]='B';
        j++; // This is for Incrementing j one more field to avoid repeat BG check, which already done.
}

}
}
cout<<s<<endl;



return 0;
}
