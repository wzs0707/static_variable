#include <iostream>
using namespace std;
void function1()
{
    int a =0;
    static int b = 0;
    a = a+1;
    b = b+1;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        function1();
        cout<<"Call Again"<<endl;

    }
    return 0;
}