#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    cout<<"Enter a String:";
    string s;
    cin>>s;
    string rs=s;
    int n=s.length();
    reverse(s.begin(),s.end());
    if(s==rs)
        cout<<"Yes";
    else{
        cout<<"No";
    }
    
}