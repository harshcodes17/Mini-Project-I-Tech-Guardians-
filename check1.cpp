#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int addition = a[i] + a[j];
            if(addition > maxi){
                maxi = addition;
            }
        }
    }
    cout << maxi << endl;
    return 0;

}