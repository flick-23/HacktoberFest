#include "bits/stdc++.h"
using namespace std;

long long merge(int arr[],int l ,int mid, int r){
    long long inv = 0;
    int n1 = mid-l+1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i<n1; i++){
        a[i] = arr[l+i];        
    }
    for (int i = 0; i<n2; i++){
        b[i] = arr[mid+i+l];
    }
    int i = 0, j = 0, k=1;
    while(i<n1 and j<n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            k++;i++;
        }
        else{
            arr[k] = b[j];
            inv += n1 - i;
            k++;j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++; i++;
    }
    return inv;
}

long long mergeSort(int arr[], int l, int r){
    long long inv = 0;
    if(1 < r){
        int mid = (1+r)/2;
        inv += mergeSort(arr,1,mid);
        inv += mergeSort(arr,mid+1,r);
        inv += merge(arr,1,mid,r);
    }

    return inv;
}


int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}
