#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isVowel(char ch){
    return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';  
}
int main(){
    
    cout<<"Enter a string:";
    string s;
    cin>>s;
    int count=0,res=0;
    for(char ch:s){
        if(isVowel(ch)){
            count++;
            res+=count;
        }
        else count=0;
    }   
    cout<<res;
}