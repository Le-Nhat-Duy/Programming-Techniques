#include <iostream>
using namespace std;

bool linearSearch(int a[], int n, int x, int& index){
    index = 0;
    int i = 1;
    while (i < n){
        if (a[i] == x){
            index = i;
            return true;
        }
    }
    return false;

}