
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,i,arr[5001],a,b,c;

    while (sf ("%d",&n) != EOF)
    {
        set <int> mySet;

        for (i=0; i<n; i++)
        {
            sf ("%d",&arr[i]);
            mySet.in(arr[i]);
        }

        if (mySet.size () < 3)
            pf ("NO\n");
        else
        {
            mySet.clear ();
            bool k = false;

            for (i=0; i<n; i++)
            {
                a = arr[i];
                b = arr[a-1];
                c = arr[b-1];

                if ((a != b) && (b != c) && (c != a) && arr[c-1] == a)
                {
                    k = true;
                    pf ("YES\n");
                    break;
                }
            }

            if (!k)
                pf ("NO\n");
        }
    }

    return 0;
}