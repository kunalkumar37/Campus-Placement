#include<bits/stdc++.h>
using namespace std;
string nextWord(string s){
    if(s==""){
        return "a";
    }
    int i=s.length()-1;
    while(s[i]=='z' and i>=0){
        i--; 
    }
    
    if(i==-1){
            s=s+'a';
        }
    else{
            s[i]++;
        }

     return s;
}

int maini(){
    string str = "samez";
    cout << nextWord(str);
    return 0;

}