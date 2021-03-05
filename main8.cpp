//Bai 4 cau C

#include <iostream>

using namespace std;

int main()
{
    int n,i;

    char daytab[][] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
for(n=1;n<=2;n++){
    for(i=1;i<=12;i++){
    cout << daytab[n][i]<< endl;
}
}cout << endl;
   char daytab2[][] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
};
for(n=1;n<=2;n++){
    for(i=1;i<=12;i++){
    cout << daytab[n][i]<< endl;
}
}
}
//Xoa so dong van chay dc
//Xoa so dong va xoa ca dong va cot ko chay duoc
