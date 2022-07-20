#include<bits/stdc++.h>
using namespace std;
void countcharctertype(string str){
    int vowels=0;
    int consonant=0;
    int specialchar=0;
    int digit=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            ch=tolower(ch);
            if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
                vowels++;
            }
            else{
                consonant++;
            }
        }
        else if(ch>='0' and ch<='9'){
            digit++;
        }
        else{
            specialchar++;
        }
    }

    cout<<"vowels"<<vowels<<endl;
    cout<<"consonant"<<consonant<<endl;
    cout<<"digit"<<digit<<endl;
    cout<<'special charcater'<<specialchar<<endl;
}

int main(){
    string str="geeks for geeks";
    countcharctertype(str);
    return 0;
}