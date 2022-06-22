#include<bits/stdc++.h>
using namespace std;

void merge( vector<int> &v , int lb , int mid , int ub ){

    int i=lb , j=mid+1 , k=0;
    int size = ub-lb+1;
    int b[size];

    while( i<=mid && j<=ub ){

        if( v[i] < v[j] ){
            b[k] = v[i];
            i++; k++;
        }
        else{
            b[k] = v[j];
            k++; j++;
        }
    }

    while( i<=mid ){
        b[k++] = v[i++]; 
    }

    while( j<=ub ){
        b[k++] = v[j++];
    }

    j=0;
    for( int i=lb ; i<=ub ; i++ ){
        v[i] = b[j++];
    }
    return;
}

void mergesort( vector<int> &v , int lb , int ub ){

    if( lb < ub ){
        int mid = (lb + ub)/2;
        mergesort( v , lb , mid );
        mergesort( v , mid+1 , ub );
        merge( v , lb , mid , ub );
        return;
    }
    return;
}

int main (){

    int num;
    cin >> num;

    vector<int> v(num);
    for( int i=0; i<num ; i++ ){
        cin >> v[i];
    }

    mergesort( v , 0 , num-1 );

    for( int i=0 ; i<num ; i++ ){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}