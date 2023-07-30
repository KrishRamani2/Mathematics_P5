#include<iostream>
using namespace std;
class Solution
{
    public:
    int I;
    int absolute()
    {
        if(I<0)
        {
            return -I;
        }
        else
        {return I;}
    }
};
int main()
{
    Solution s1;
    s1.I=-11;
    cout<<s1.absolute();
    return 0;
}