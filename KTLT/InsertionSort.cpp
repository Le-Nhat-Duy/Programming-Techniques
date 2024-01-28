#include <iostream>
using namespace std;

//Using LinearSearch:
void insertionSor (int a[], int n){
    for (int i = n; i > 0; i--){
        a[i] = a[i - 1];
    }
    for (int i = 1; i <= n; i++){
        int v = a[i];
        int j = i - 1;
        a[0] = v;
        while (a[j] > v){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
}

//Using BinarySearch:
void insertionSort(int a[], int n){
    for (int i = 1; i < n; i++){
        int v = a[i];
        int j = i - 1;
        int l = 0;
        int r = i - 1;
        while (l <= r){
            int pivot = (r + l) / 2;
            if (a[pivot] > v){
                r = pivot - 1;
            }
            else
            {
                l = pivot + 1;
            }
        }
        while (j >= l){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
}

int main(){
    int a[5] = {2,7,8,6,1};
    int n = 5;
    insertionSort(a,n);
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}