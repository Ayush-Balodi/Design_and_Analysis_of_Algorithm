/*
    Graphs can be create via adjacency matrix or a adjacency matrix.
    Here it is the the imlementation of graph using adjacency list.
        2
      /  \ 
    1  -  3 - 4
           \ /
            5
*/
#include<iostream>
#include<vector>

using namespace std;

void adj( vector<int> arr[] , int s , int e ){

    arr[s].push_back(e);
    arr[e].push_back(s);

    return;
}

void printadj( vector<int> arr[] , int n ){

    for( int i=0 ; i<n ; i++ ){

        cout << "Adjacency list of vertex " << i << "\n Head";
        
        for(auto x : arr[i]){
            cout << "->" << x ;
        }
        cout << endl;
    }
    return;
}

int main (){
    int n;
    cout << "Enter the number of verteces : ";
    cin >> n;

    vector<int> arr[n];

    int num=1 , e , s;
    while( num ){

        cout << "Enter strt node , end node : ";
        cin >> s >> e;

        adj ( arr , s , e );

        cout << "wnat to add 1:0 => " ;
        cin >> num;
    }

    printadj ( arr , n );

    return 0;
}