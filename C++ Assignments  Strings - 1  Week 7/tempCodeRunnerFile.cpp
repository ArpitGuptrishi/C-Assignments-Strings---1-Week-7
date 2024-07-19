int count=0;
    for(int j=0;j<n;j++){
        if(s[j]=="a"|| s[j]=="A" || s[j]=="e" || s[j]=="E" || s[j]=="i" || s[j]=="I" || s[j]=="o" || s[j]=="O" || s[j]=="u" || s[j]=="U" ){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<"Number of Consonents:"<<count;