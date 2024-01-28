#include <iostream>
#include <cstring>
using namespace std;

void inputString (char[]);
void printString(char[]);
int countCapital(char[]);
int countApperance(char[], char);
int countWord(char[]);

int main(){
    char c[100];
    char x ='t';
    inputString(c);
    cout<<countCapital(c)<<endl;
    cout<<countApperance(c,x)<<endl;
    cout<<countWord(c);
}

void inputString(char c[]){
    cin.getline(c,99);
}

void printString(char c[]){
    cout<<c;
}

int countCapital(char c[]){
    int len = strlen(c);
    int cnt = 0;
    for (int i = 0; i < len; i++){
        if (c[i] >= 'A' && c[i] <= 'Z'){
            cnt++;
        }
    }
    return cnt;
}

int countApperance(char c[], char x){
    int len = strlen(c);
    int cnt = 0;
    for (int i = 0; i < len; i++){
        if (c[i] == x){
            cnt++;
        }
    }
    return cnt;
}

int countWord(char c[]){
    int len = strlen(c);
    int cnt = 0;
    for (int i = 0; i < len; i++){
        if(c[i] == ' '){
            cnt++;
        }
    }
    return ++cnt;
}
