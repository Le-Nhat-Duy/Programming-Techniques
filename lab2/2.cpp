#include <iostream>
using namespace std;


void buddleSort(int a[], int n){
    for (int i = 1; i < n - 1; i++){
        for (int j = n - 1; j >= i; j--){
            if (a[j] < a[j - 1]){
                swap(a[j],a[j - 1]);
            }
        }
    }
}

void selectionSort (int a[], int n){
    for (int i = 0; i < n; i++){
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

void insertionSort(int a[], int n){
    for (int i = 1; i < n; i++){
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < v){
            a[j] = a[j - 1];
            j--;
        }
        a[j + 1] = v;
    }
}

void insertionSortSentinal(int a[], int n){
    for (int i = n; i > 0; i--){
        a[i] = a[i - 1];
    }
    for (int i = 1; i < n; i++){
        int v = a[i];
        int j = i - 1;
        a[0] = v;
        while (a[i] > v){
            a[j] = a[j - 1];
            j--;
        }
        a[j + 1] = v;
    }
}

void insertionSortBinary(int a[], int n){
    for (int i = 1; i < n; i++){
        int v = a[i];
        int j = i - 1;
        int l = 0;
        int r = i - 1;
        while (l < r){
            int pivot = (l + (r - l)) / 2;
            if (a[pivot] > v){
                r = pivot - 1;
            }
            else
            {
                l = pivot + 1;
            }
        }
        while (j >= l){
            a[j] = a[j - 1];
            j--;
        }
        a[j + 1] = v;
    }
}

void interchangeSort(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}