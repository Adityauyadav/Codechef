#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxAdjSum(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n == 2){
            cout << a[0] + a[1] << endl;
        }
        else{
            sort(a.begin(), a.end());
            int sum = a[0] + a[1];
            for(int i=2; i<n; i++){
                int count = 2*a[i];
                sum += count;
            }
            cout << sum << endl;
        }
        

    }
}

int main(){
    maxAdjSum();
    return 0;
}