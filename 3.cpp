#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n){
    int count=0;
    if(n<2){
        return false;
    }

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int lower,upper;
    lower=1,upper=100;
    for(int i=lower;i<=upper;i++){
        if(isprime(i)){
            cout<<i<<" ";
            
        }
    }
}