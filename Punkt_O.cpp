#include<iostream>

using namespace std;

int main()
{
    int x, n;
    cin >> n;
    bool est = false;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            est = true;
            break;
        }
    }
    if (est)
        cout << "YES";
    else
        cout << "NO";

}