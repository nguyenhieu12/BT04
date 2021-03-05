#include <iostream>

using namespace std;

bool check(string s1, string s2)
{
    for(int i = 0;i < s1.length();i++){
        if(s1[i]!=s2[s1.length()-1-i])
            return false;
    }
    return true;
}

int main(){
   int n;
   cin >> n;
   string s[1000];
   for(int i = 0;i < n;i++){
      cin >> s[i];
   }
   for(int i = 0;i < n - 1;i++){
      for(int j = i + 1;j < n;j++){
        if(check(s[i], s[j])){
            cout << s[i].length() << endl;
            cout << s[i][s[i].length()/2];
        }
      }
   }
   return 0;
}
