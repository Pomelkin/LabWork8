#include "pt4.h"
#include <iostream>
using namespace std;

void Solve()
{
    Task("Array91");
    setlocale(LC_ALL, "Russian");
    int k = 0, n, l = 0, count = 0;
    float a[100] = {}, b[100] = {};
    pt >> n;
    
    for (int i = 0; i < n; i++) pt >> a[i]; //���� �������
    for (int i = 0; i < n; i++) b[i] = a[i]; /*������������ �������*/

    pt >> k >> l;

    k -= 1;
    l -= 1;

    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            count += 1;
            b[i] = a[l + count]; /*������(���� i ������ ������ ������) i ����� �� l+count, ��� count - ���-�� ���������� ��������*/
        }
    }
    pt << n-(l-k+1);
    for (int i = 0; i < (n-(l - k + 1)); i++) pt << b[i];
    
}
