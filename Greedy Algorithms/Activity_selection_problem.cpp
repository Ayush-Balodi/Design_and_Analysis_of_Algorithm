#include<bits/stdc++.h>
using namespace std;

bool compareInt( pair<int,int> &v1 , pair<int,int> &v2 ){
    return (v1.second < v2.second) ;
}

int main (){

    int n;
    cout << "Enter the number of activities : ";
    cin >> n;

    vector<pair<int,int>> v;
    for( int i=0 ; i<n ; i++ ){
        int s , e;
        cin >> s >> e;
        v.push_back({s,e});
    }
    sort( v.begin() , v.end() , compareInt );

    int i=0;
    cout << i << " ";

    for( int j=1 ; j<n ; j++ ){

        if( v[j].first >= v[i].second ){
            cout << j << " ";
            i = j;
        }
    }
    return 0;
}