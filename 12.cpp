#include<bits/stdc++.h>
using namespace std;
void ispalindrome(char str[]){
    int l=0;
    int h=strlen(str)-1;
    while(h>l){
        if(str[l++]!=str[h--]){
            cout<<"is not palindrome ";
            return;
        }

    }
    cout<<"is palindrome";

}
int main(){
    ispalindrome("abba");
    ispalindrome("abbccbba");
    ispalindrome("geeks");
}