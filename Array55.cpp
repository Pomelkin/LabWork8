#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Array55");
    int k = 0,n, a[100] = {}, b[100] = {};
    pt >> n;
    for (int i = 0; i < n; i++) pt >> a[i];
    if (n % 2 == 0) n -= 1;
    for (int i = 0; i < n; i+=2)
    {
        b[k] = a[i];
        k += 1;
    }
    int size = k;
    pt << size;
    for (int i = 0; i < size; i++) pt << b[i];
}
