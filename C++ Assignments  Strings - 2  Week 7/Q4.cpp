#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s,t;
cout<<"Enter String 1:"<<endl;
cin>>s;
cout<<"Enter String 2:"<<endl;
cin>>t;
int i=0;
int count=0;
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s.size()!=t.size()) cout<<"Invalid Input"<<endl;
else{
    while(i<s.size()){
        int res=0;
        res=s[i]-t[i];
        count+=res;
        i++;
    }
}
if(count==0) cout<<"True";
else cout<<"False";
}