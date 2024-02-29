#include <iostream>
#include <vector>
using namespace std;

int counter(int n){
    int count = 0;
    int q = n / 2;
    int r = n % 2;
    count = q + r;
    return count;
}


void roomAllocation(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n) ;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = 0;
        for(int i = 0; i<n; ++i){
            ans += counter(a[i]);
        }
        cout << ans << endl;


    }
}

int main(){
    roomAllocation();
    return 0;
}