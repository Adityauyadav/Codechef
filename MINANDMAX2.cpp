#include <iostream>
using namespace std;

void minMax(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 0;
        sum=(n*(n+1)/2)+n-1;
        cout<<sum<<endl;


        

    }
}

int main(){
    minMax();
    return 0;
}   