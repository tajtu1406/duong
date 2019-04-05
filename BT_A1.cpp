#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* s1, const char* s2){
    int x1 = strlen(s1);
    int x2 = strlen(s2);
    char* kq = new char[x1 + x2];
    strcpy(kq, s1);
    strcat(kq, s2);
    return kq;
}

int main(){
    char s1[]="Hello";
    char s2[]="World";
    cout << concat(s1,s2);
}

