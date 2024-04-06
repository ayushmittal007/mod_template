
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;

int sum_of_digits(int n){
    int ans = 0;
    while(n){
        ans += n%10;
        n /= 10;
    }
    return ans;
}

int binary_Expo(int a, int b){
    if(b == 0) return 1;
    int res = binary_Expo(a,b/2);
    if(b % 2 == 1) {
        return res*res*a;
    }
    return res*res;
}

int binaryExpoWithMod(int a, int b, int m){
    if(b == 0) return 1;
    int res = binaryExpoWithMod(a,b/2,m);
    if(b % 2 == 1) {
        return ((((res % m) * (res % m)) % m) * (a % m)) % m; 
    }
    return (((res % m) * (res % m)) % m);
}

int modInverse(int a, int m){
    return binaryExpoWithMod(a,m-2,m);
}

int divisionModulo(int a , int b){
    return (a*modInverse(b,mod))%mod;
}

void solve() {

}

signed main() {
ios::sync_with_stdio(0), cin.tie(0);
cout.tie(0);
int T = 1;
cin >> T;
while (T--) {
solve();
}
}