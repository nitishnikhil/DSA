#define ll long long

class Solution {
ll mul(ll a , ll b) {
    ll ans = 0;

    while(b > 0) {
        if(b & 1) 
           ans += a;

        a = a << 1;
        b = b >> 1;   
    }

    return ans;
}

public:
    int divide(int d, int s) {
        ll lo = 0 , hi = 2147483648;
        
        ll D = abs((ll)d) , S = abs((ll)s);

        // cout << D << " " << S << "\n";
        ll ans = 0;

        while(lo <= hi) {
            ll mid = (lo + hi) >> (ll)1;

            // cout << mid << " %\n";

            if(mul(mid , S) > D) {
                hi = mid - 1;
            } else {
                ans = mid;
                lo = mid + 1;
            }
        }

    

        if((d >= 0 && s >= 0) || (d <= 0 && s <= 0)) {
        //    cout << ans << " #\n";
           return min(ans , (ll)2147483647);
        } else {
            return max(-ans , (ll)-2147483648);
        }
    }
};