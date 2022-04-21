#include<iostream>
using namespace std;

bool search( int arr[] , int n , int key ){

    int c=0;
    for( int i=0 ; i<n ; i++ ){
        if( arr[i] == key ){
            c++;
            cout << "The number of comparisons are : " << c << endl;
            return true;
        }
        c++;
    }
    cout << "The number of comparisons are : " << c << endl;
    return false;
}

int main (){
    
    int num;
    cout << "Enter the size of the array : ";
    cin >> num;

    int arr[num];
    for( int i=0 ; i<num ; i++ ){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to be searched : ";
    cin >> key;

    bool b = search( arr , num , key );

    if( b == true ){
        cout << "Element is found." << endl;
    }
    else{
        cout << "Element is not found." << endl;
    }
    return 0;
}