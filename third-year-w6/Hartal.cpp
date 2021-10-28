#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ve vector
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t; cin >> t;
    ve<int> frisat(10000, 0);
    frisat[6] = frisat[7] = 1;
    for(int i = 6; i< (int)frisat.size(); i +=7){
        frisat[i] = 1;
        if(i + 1 < (int)frisat.size()){
            frisat[i + 1]  = 1;
        }
    }
//     for(auto x: frisat){
//         cout << x << " ";
    
//     }
    // cout <<"\n";
    while(t--){
        int n, p; cin >> n >> p;
        ve<int> parties(p);
        for(int i = 0; i< p;i ++){
            cin >> parties[i];
        }
            ve<int> isstrike(n + 1, 0);

        int ans = 0;
        for(int i = 0; i< p;i ++){
            int day = parties[i];
            while(day <= n){
                // cout << day << " ";
                if(!frisat[day]){
                    isstrike[day] = 1;
                }
                day += parties[i];
                
            }
            // cout <<"\n";
        }
        for(auto x: isstrike){
            ans += x;
        }
        cout <<(ans) << "\n";
        
    }
    return 0;
}
