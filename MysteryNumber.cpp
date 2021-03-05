#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n+1];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i <= n;i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n + 1);
    for(int i = 0;i <= n;i++){
        if(b[i] != a[i]){
            cout << b[i];
        }
    }
    delete []a;
    delete []b;
    return 0;
}

