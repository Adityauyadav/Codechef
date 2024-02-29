#include <iostream>
#include <vector>
using namespace std;

void minMax(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 0;
        if(n%2 == 0){
            n=n/2;
        sum=n*(n+1);
        cout<<sum<<endl;


        }
        else{
            n=n/2;
        sum=n*(n+1)+n+1;
        cout<<sum<<endl;
            
        }

        

    }
}

int main(){
    minMax();
    return 0;
}   