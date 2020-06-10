#include <bits/stdc++.h>
using namespace std;

int p(int k, int n){
    if (k == 0 && n == 0){
        return 1;
    }
    if ((n <= 0 || k <= 0) && ( n != k != 0)){
        return 0;
    }
    return (p(k, n - k) + p(k - 1, n - 1));
}

int main(){
    cout << p(5, 10);
}