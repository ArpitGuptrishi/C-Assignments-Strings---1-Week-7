#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
string s;
cout<<"Enter string:";
getline(cin,s);
vector<string>v;
stringstream ss(s);
string temp;
while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());
cout<<v[0];
}

