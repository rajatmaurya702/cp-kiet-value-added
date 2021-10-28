#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(auto &x: arr){
            cin >> x;
        }
        int min_ = 1e9;
        int ans = 1;
        for(int i = 1; i<=100; i++){
            int temp = 0;
            for(int j = 0; j < n; j++){
                temp += abs(arr[j] - i);
            }
            if(temp < min_){
                 min_= min(temp, min_);
                ans = i;
            }
           
        }
        cout << ans << "\n";
    }
    return 0;
}
