#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <memory>
#include <ctime>
 
using namespace std;
 
int main()
{
    int numR = 0;
    int numP1 = 0;
    int numP2 = 0;
    int A = 0;
    int B = 0;
    vector<int> arrR;
    vector<int> arrP1;
    vector<int> arrP2;
 
    // read r1
    scanf("%d", &numR);
 
    while(numR-->0)
    {
        int n = 0;
        scanf("%d", &n);
        arrR.push_back(n);
    }
    sort(arrR.begin(), arrR.end());
 
    // read p1
    scanf("%d", &numP1);
    while(numP1-->0)
    {
        int n = 0;
        scanf("%d", &n);
        arrP1.push_back(n);
    }
    sort(arrP1.begin(), arrP1.end());
 
    // read p2
    scanf("%d", &numP2);
    while(numP2-->0)
    {
        int n = 0;
        scanf("%d", &n);
        arrP2.push_back(n);
    }
    sort(arrP2.begin(), arrP2.end());
 
    // read A and B
    scanf("%d %d", &A, &B);
 
    double r = (double)(arrR[arrR.size() - 1]);
    double p1 = (double)(arrP1[arrP1.size() - 1]);
    double p2 = (double)(arrP2[0]);
    double ret = sqrt(r * r * p1 * (double)(B) / (p1 * (double)(B) + p2 * (double)(A)));
    printf("%lf\n", ret);
 
    return 0;
}
