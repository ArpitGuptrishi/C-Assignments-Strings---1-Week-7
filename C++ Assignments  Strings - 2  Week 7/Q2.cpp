#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter a String:"<<endl;
    string s;
    cin>>s;
    int n=s.size();
    sort(s.begin(),s.end());
    int i=0;
    while(i<=n){
        if (s[n-(i+1)]!=s[n-(i+2)]){
            cout<<s[n-(i+2)];
            break;
        }
        else{
            i++;
        }
    }
}