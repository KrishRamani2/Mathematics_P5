#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int b;
    long long MultUnderModulo(long long a,long long b)
    {
        long long m = (pow(10,9) + 7);

        long long result = ((a%m) * (b%m)) % m;
        return result;
    }
    
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long a;
        long long b;
        cin>>a>>b;
        Solution ob;
        cout<<ob.MultUnderModulo(a,b)<<endl;
    }
    return 0;
}