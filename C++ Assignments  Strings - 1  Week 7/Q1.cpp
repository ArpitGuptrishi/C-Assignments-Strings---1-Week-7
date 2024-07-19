#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a String:";
    string s;
    cin>>s;
    int n=s.length();
    cout<<"Input String :";
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    cout<<"Output String:";
    for(int j=0;j<n;j++){
        if(j%2!=0){
            cout<<"#";
        }
        else{
        cout<<s[j];
        }
    }



}