#include <iostream>
using namespace std;

int check(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

void inplaceAlgorithms(int a[], int n)
{
    //move all odd numbers to right side and all even number to left side
    int l = 0;
    int r = n - 1;
    while (l < r){
        while (l < r && check(a[l]) == 2){
            l++;
        }
        while (l < r && check(a[r]) == 1){
            r--;
        }
        if (l <= r){
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
    //Sort
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
    for (int i = r + 1; i < n; i++) {
        int v = a[i];
        int j = i - 1;
        while (j >= r + 1 && a[j] < v) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
}

int main()
{
    int a[5] = {2, 7, 8, 6, 1};
    int n = 5;
    inplaceAlgorithms(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}