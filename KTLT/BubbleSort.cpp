#include <iostream>
using namespace std;

void bubbleSort(int a[], int n){
    for (int i = 1; i < n; i++){
        for (int j = n - 1; j >= i; j--){
            if (a[j] > a[j - 1]){
                swap(a[j], a[j - 1]);
            }
        }
    }
}