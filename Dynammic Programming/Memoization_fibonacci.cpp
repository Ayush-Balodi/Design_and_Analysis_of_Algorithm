#include<iostream>
#include<vector>
using namespace std;

int fib( vector<int> &dp , int n ){

    if(n <= 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return (dp[n]=fib( dp , n-1 )+fib( dp , n-2 ));
}

int main (){

    int n;
    cout << "Enter the position of the fibonacci number wanted : ";
    cin >> n;

    vector<int> dp(n+1,-1);

    int result = fib( dp , n );

    for( int i=0 ; i<n+1 ; i++ ){
        cout << dp[i] << endl;
    }
    cout << "The result is : " << result << endl;
    return 0;
}