#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    string s;

    cin >> n >> m;
    while (m--)
    {
        cin >> s;
        if (s == "fechou")
            n++;
        else
            n--;
    }
    cout << n << endl;

return 0;
}
