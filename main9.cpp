//Bai 5


# include <iostream>
# include <ctime>
# include <cstdlib>

using namespace std;
int main()
{
    srand (time(NULL));
    int tempt;
    int s[30];
    for (int i=1; i<=30; i++)
        s[i] = rand ()%100 +1;
    for (int i=1; i<=30; i++)
    {
        for (int j=i+1; j<=30; j++)
        {
            if(s[i]>s[j])
            {
                tempt = s[i];
                s[i] = s[j];
                s[j] = tempt;
            }
        }
    }
    for (int i=1; i<=30; i++)
        cout << s[i] << " ";

}
