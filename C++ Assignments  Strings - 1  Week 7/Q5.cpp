#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a String:";
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
            count=count*10+ s[i]-48;
    }
    cout<<count;

}