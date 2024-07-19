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
    int count=0;
    for(int j=0;j<n;j++){
        if(s[j]== 'a'|| s[j]== 'A'|| s[j]== 'e'|| s[j]== 'E'|| s[j]== 'i'|| s[j]== 'I'|| s[j]== 'o'|| s[j]== 'O'|| s[j]== 'u'|| s[j]== 'U'  ){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<"Number of Consonents:"<<count;
    
    
}