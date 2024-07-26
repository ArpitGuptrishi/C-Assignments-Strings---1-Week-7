#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter a String:"<<endl;
    string s;
    cin>>s;
    string Ostring;
    Ostring=s;
    reverse(s.begin(),s.end());
    cout<<Ostring+s;
    
}