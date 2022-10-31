#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Array22");
    int n, k, l;
    float a[100] = {};
    pt >> n;
    for (int i = 0; i < n; i++)
    {
        pt >> a[i];
    }
    pt >> k >> l;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (!(i >= (k - 1) && i <= (l - 1))) sum += a[i];
    }
    pt << sum;
}
