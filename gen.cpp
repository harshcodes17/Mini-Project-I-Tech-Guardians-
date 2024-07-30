#include <bits/stdc++.h>

using namespace std;
// genrating random test cases for 
// constraints 1<=t<=10, 1<=n<=10, 1<=a[i]<=10
int main(){
    srand(time(0));
    int t = rand()%10 + 1;
    while(t--){
        int n = rand()%10 + 1;
        cout << n << endl;
        for(int i = 0; i < n; i++){
            cout << rand()%10 + 1 << " ";
        }
    }
    
    return 0;

}