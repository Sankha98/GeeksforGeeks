#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;
 
// #define ff              first
// #define ss              second
// #define int             long long
// #define pb              push_back
// #define mp              make_pair
// #define pii             pair<int,int>
// #define vi              vector<int>
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define setbits(x)      __builtin_popcountll(x)
// #define zrobits(x)      __builtin_ctzll(x)
// #define mod             1000000007
// #define inf             1e18
// #define ps(x,y)         fixed<<setprecision(y)<<x
// #define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}

int remove_duplicate(int arr[],int n)
{
    int *temp = NULL;
    temp = new int[n];
    if(n == 0 || n == 1)
    {
        return n;
    }
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        if(arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++)
    {
        /* code */
        arr[i] = temp[i];
    }
    return j;
}

int main()
{
    c_p_c();
    w(t)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        int N = remove_duplicate(arr,n);
        for (int i = 0; i < N; i++)
        {
            /* code */
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}