#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    int tabA[] = {1,2,3};
    int tabB[] = {4,5,6,7};
    int tabC[] = {1337,0,1};
    int *tabD[3] = {tabA, tabB, tabC};
    int *(*wsk)[3];
    wsk = &tabD;
    cout<<**(*wsk+2)<<endl;
    return 0;
}
