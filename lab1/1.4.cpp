#include <iostream>
using namespace std;

bool isPrime(int);
int countPrime(int, int);

int main(){
    int a,b;
    cin>>a>>b;
    cout<<countPrime(a,b);
}

bool isPrime(int n){
    if (n == 2){
        return true;
    }
    if (n < 2){
        return false;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int countPrime(int a, int b){
    int cnt = 0;
    for (int i = a+1; i < b; i++){
        if (isPrime(i)){
            cnt++;
        }
    }
    return cnt;
}
