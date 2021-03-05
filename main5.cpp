//Bai 4 cau a

#include <iostream>
using namespace std;
int main()
{
    char a[5] = {1, 4, 3, 2, 5};
    cout << a[-1] << endl;
    cout << a[5] << endl;
    cout << a[6] << endl;
    cout << a[7] << endl;
    cout << a[8] << endl;
    return 0;
}

//Bai 4 cau b


#include <iostream>
using namespace std;
int main()
{
    char a[5];
    a[-1] = '1';
    a[5] = '2';
    a[6] = '3';
    cout << a[-1] << endl;
    cout << a[5] << endl;
    cout << a[6] << endl;
    return 0;
}
