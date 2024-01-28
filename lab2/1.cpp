#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key, int l, int r){
    int pivot = (l + (r - l)) / 2;
    if (! l <= r){
        return -1;
    }
    if (a[pivot] = key){
        return pivot;
    }
    if (a[pivot] > key){
        return binarySearch(a,n,key,pivot + 1, r);
    }
    else{
        return binarySearch(a,n,key,l,pivot - 1);
    }
}

int sequentalSearch(int a[], int n, int key){
    for (int i = 0; i < n; i++){
        if (a[i] == key){
            return i;
        }
    }
    return -1;
}

bool sequentalSearchSentinal(int a[], int n, int key){
    int i = 0;
    a[n] = key + 1;
    while (a[i] < key){
        i++;
    }
    return (a[i] == key);
}



