#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back
#define fr                  first
#define se                  second
#define all(v)              v.begin(),v.end()
#define JOSHI               ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
const ll                    mod = 1e9 + 7;

using namespace std;




//              ********************** Functions Start **********************          //



ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}


bool isprime(ll n){ 
    if (n <= 1) return true;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
            for (ll i = 5; i * i <= n; i = i + 6)
                    { if (n % i == 0 || n % (i + 2) == 0){ return false;}}
    return true;
}

void swap(int &x, int &y) {int temp = x; x = y; y = temp;}

bool ispalin(string s)
{
    for(ll i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}


//              ********************** Functions End **********************          //




void solve()
{
        ll n;
        cin>>n;
        vector<int> v(n);

        rep(0,n)
        {
          cin>>v[i];
          v[i]--;
        }
        vector<int>dummy=v;
        sort(dummy.begin(),dummy.end());
        if(dummy==v)
        {
            rep(0,n)
            {
                cout<<1<<' ';
            }
            cout<<en;
            return;
        }
        vector<int>res(n,0);
        for(int i=0;i<n;i++)
        {
             ll cn=1;
                ll nu=v[i];
                
                while(nu!=i)
                {
                    nu=v[nu];
                    cn++;
                }

                res[i]=cn;
            

        }
         for(auto p:res)
         {
            cout<<p<<' ';
         }
         cout<<en;
}

/*   
     => int overflow
     => array bounds 
     => special cases (n=1?)
     => do smth instead of nothing 
     => stay organized 
     => WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH
     =>Read Stuff At Bottom !


     * +-----+-----------------+
     * |  n  | Worst Algorithm |
     * +-----+-----------------+
     * | 11  | O(n!), O(n^6)   |
     * | 18  | O(2^n * n^2)    |
     * | 22  | O(2^n * n)      |
     * | 100 | O(n^4)          |
     * | 400 | O(n^3)          |
     * | 2K  | O(n^2 log n)    |
     * | 10K | O(n^2)          |
     * | 1M  | O(n log n)      |
     * +-----+-----------------+
     
*/

int main(void)
{

        JOSHI

      // #ifndef ONLINE_JUDGE
      //  freopen("input.txt", "r", stdin);//for input from input.txt
      //  freopen("output.txt", "w", stdout); //for Output.txt
      // #endif
       


      ll test_case=1;
      cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      


  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}
