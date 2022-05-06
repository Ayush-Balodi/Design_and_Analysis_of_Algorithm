#include<bits/stdc++.h>
using namespace std;

bool search( int arr[] , int n , int key ){
    int set = sqrt(n);
    int prev = 0;

    int c = 0;
    while( arr[set-1] < key ){
        prev = set;
        set += sqrt(n);
        if( set >= n ){
            c++;
            cout << c << endl;
            return false;
        }
        //cout << c << endl;
        c++;
    }

    while( arr[prev] < key ){

        prev++;
        
        if( prev == set ){
            c++;
            cout << c << endl;
            return false;
        }
        c++;
    }
    if( arr[prev] == key ){
        c++;
        cout << c << endl;
        return true;
    }
    cout << c << endl;
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