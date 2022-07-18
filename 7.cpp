//friendly pairs
#include<bits/stdc++.h>
using namespace std;
int getdivisorsum(int n){
    int sum=0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            if(i==1){
                sum=sum+i;
            }
            else if(i==n/i){
                sum=sum+i;
            }
            else{
                sum=sum+i+n/i;
            }
        }
    }
    return sum;
}

int main(){
    int num1=30,num2=140;
    int sum1=getdivisorsum(num1);
    int sum2=getdivisorsum(num2);
    if(sum1/num1==sum2/num2){
        cout<<num1<<num2<<endl;
    }
    else{
        cout<<"no";
    }
}