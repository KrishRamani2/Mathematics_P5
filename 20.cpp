#include<bits/stdc++.h>
using namespace std;
class Roots
{
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int D = b*b - 4*a*c;
        if(D<0)
            return {-1};
        int r1 = floor((-b - sqrt(D)) /(2*a));
        int r2 = floor((-b + sqrt(D)) /(2*a));
        if (r1>r2)
            return {r1,r2};
        return {r2,r1};
    }
};
int main()
{}