#include<iostream>
using namespace std;

bool binary_search( int arr[] , int *low , int *high , int length , int key ){

    int mid;
    while( *low <= *high ){
        mid = (*low+*high)/2;
        if( arr[mid] == key ){
            return true;
        }
        else if( arr[mid] < key ){
            *low = mid+1;
        }
        else{
            *high = mid-1;
        }
    }
    return false;
}

int main (){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << " Enter teh elements in the array: ";
    for( int i=0 ; i<n ; i++ ){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    int low = 0, high=n-1;
    if( binary_search( arr, &low, &high, n, key ) ){
        cout << "True, we found the key." << endl;
    }
    else{
        cout << "False, we are not able to find the key." << endl;
    }
    return 0;
}