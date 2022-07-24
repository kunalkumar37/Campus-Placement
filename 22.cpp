#include<bits/stdc++.h>
using namespace std;
bool match(char*first,char*second){

    if(*first=='\0' and *second=='\0'){
        return true;

    }

    if(*first=='*'){
        while(*(first+1)=='*'){
            first++;

        }

    }

    if(*first=='*' and *(first+1)!='\0' and *second=='\0'){
        return false;
    }

    if(*first=='?' or *first==*second){
        return match(first+1,second+1);
    }
if(*first=='*'){
    return match(first+1,second) or match(first,second+1);
}

return false;

}
void test(char*first,char*second){
    match(first,second)?puts("yes"):puts("no");
}

int main(){
   test("g*ks", "geeks"); // Yes
    test("ge?ks*", "geeksforgeeks"); // Yes
    test("g*k", "gee"); // No because 'k' is not in second
    test("*pqrs",
         "pqrst"); // No because 't' is not in first
    test("abc*bcd", "abcdhghgbcd"); // Yes
    test("abc*c?d", "abcd"); // No because second must have
                             // 2 instances of 'c'
    test("*c*d", "abcd"); // Yes
    test("*?c*d", "abcd"); // Yes
    test("geeks**", "geeks"); // Yes
    return 0;
}