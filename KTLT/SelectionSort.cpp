#include <iostream>
using namespace std;

void selectionSort (int a[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        int minValue = a[i];
        for (int j = i + 1; j < n; j++){
            if (a[j] < minValue){
                minIndex = j;
                minValue = a[j];
            }
            a[minIndex] = a[i];
            a[i] = minValue;
        }
    }
}