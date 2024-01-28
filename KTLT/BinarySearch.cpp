#include <iostream>
using namespace std;

int binarySearch (int a[], int n, int x){
    int l = 0;
    int r = n - 1;
    while (l < r){
        int pivot = (r - l) / 2;
        if (a[pivot] == x){
            return pivot;
        }
        if (a[pivot] > x){
            r = pivot - 1;
        }
        if (a[pivot] < x){
            l = pivot + 1;
        }
    }
}