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
    reverse(s.begin()+n/2,s.end());
    for(int i=0;i<n;i++){
        cout<<s[i];
            }
}