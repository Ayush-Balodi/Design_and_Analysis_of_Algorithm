#include<iostream>
using namespace std;

/*This function is performing insertion sort*/
void sort( int nums[] , int n ){

    for( int i=1 ; i<n ; i++ ){
        int current = nums[i];
        int j=i-1;

        while( nums[j] > current && j>=0 ){
            nums[j+1]= nums[j];
            j--; 
        }
        nums[j+1] = current;
    }
    return;
}

int main (){
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements : ";
    for( int i=0 ; i<n ; i++ ){
        cin >> arr[i];
    }

    sort( arr , n );

    cout << "Sorted array : ";
    for( int i=0 ; i<n ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}