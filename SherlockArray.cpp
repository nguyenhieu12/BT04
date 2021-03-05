#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        int *a = new int[n];
        for(int j = 0;j < x;j++){
            cin >> a[j];
        }
        bool check = false;
        for(int k = 1;k < x;k++){
            int sum1 = 0, sum2 = 0;
            for(int m = 0;m < k;m++) sum1 += a[m];
            for(int n = k + 1;n < x;n++) sum2 += a[n];
            if(sum1 == sum2) check = true;
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
        delete []a;
    }
    return 0;
}

