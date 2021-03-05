//Bai 2 PHAN C

# include <iostream>
using namespace std;
int main ()
{
    string str;
    int i;
    cin >> str;
    int n = str.length();
    for (i=0; i<n; i++)
    {
       if (str[i] != str[n-i-1])
       {
           cout << "NO";
           return 0;
       }
    }
    cout << "YES";
}
