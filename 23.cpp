#include<iostream>
using namespace std;
class solution
{
    public:
    int count=0;
    int n;
    bool divisor()
    {
        for(int i=1;i<=n;i++)
        {
            int k=i;
            for(int j=1;j<=k;j++)
            {
                if(k%j==0)
                {
                    ++count;
                }
            }
        }
        if(count==3)
        {return true;}
        else 
        {return false;}
    }
};
int main()
{
    solution s1;
    s1.n = 10;
    cout<<s1.divisor();
    return 0;
}