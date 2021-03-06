#include<bits/stdc++.h>
using namespace std;

void heapify( int arr[] , int i , int n ){

    int max = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if( l<n && arr[max] < arr[l] ){
        max = l;
    }

    if( r<n && arr[max]<arr[r] ){
        max = r;
    }

    if( i != max ){

        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;

        heapify( arr , max , n );
    }
    return;
}

void heapsort( int arr[] , int n ){

    for( int i=n/2-1 ; i>=0 ; i-- ){

        heapify( arr, i , n );
    }

    for( int i=n-1 ; i>0 ; i-- ){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify( arr , 0 , i );
    }
    return;
}

int main (){

    int arr[] = {5,4,3,2,1};
    int n=5;

    heapsort( arr , n );

    for( int i=0 ; i<n ; i++ ){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}