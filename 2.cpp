#include<iostream>
using namespace std;
bool islowecasevowel(int c){
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

bool isuppercasevowel(int c){
    return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

}
int main(){
    char c;
    cout<<"enter the alphabet";
    cin>>c;
    if(!isalpha(c)){
        cout<<"not alphabet";
    }
    else if(islowecasevowel(c) || isuppercasevowel(c)){
            cout<<"c is a vowel";
    }
    else{
        cout<<"c is not vowel";
    }
    return 0;
}