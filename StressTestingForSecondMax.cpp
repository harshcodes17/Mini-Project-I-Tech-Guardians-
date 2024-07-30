#include <bits/stdc++.h>

using namespace std;

int mySol(int n,int a[]){
    if(n==1){
        return -1;
    }
    int second_max = 0;
    sort(a,a+n);
    second_max = a[n-2];
    return second_max;
}

int correctSol(int n,int a[]){
    if(n==1){
        return -1;
    }
    int second_max = 0;
    int maxi = 0;
    sort(a,a+n);
    maxi = a[n-1];
    second_max = -1;
    for(int i=0;i<n;i++){
        if(a[i] != maxi){
            second_max = a[i];
        }
    }
    return second_max;
}

int main(){
    
    srand(time(0));
    int t = rand()%100 + 1;
    while(t--){
        int n = rand()%10 + 1;
        int a[n];
        for(int i = 0; i < n; i++){
            a[i] = rand()%10 + 1;
            
        }
        int myans = mySol(n,a);
        int correctans = correctSol(n,a);
        if(myans != correctans){
            cout << "Wrong Answer" << endl;
            cout << "Correct Answer: " << correctans << endl;
            cout << "My Answer: " << myans << endl;
            cout<<"n: "<<n<<endl;
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout<<endl;
            break;
        }
    }

    return 0;

}