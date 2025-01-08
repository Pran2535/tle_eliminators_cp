#include <iostream>
using namespace std;

int main()
{
    int a = 10;         // yaha pe hamne a ko declare karwaiaya hai and then a =10 me dal diya hai and then
    int *p = &a;        //  &a  & operator ka matlab ye hota hai ki isse address kar batata hai
    cout << p << endl;  //  toh yaha pe jo pointer hamne declare kiya hai and then p ke pointer declare kiya hai *p pointer hai jo ki int me dal
    cout << &a << endl; // dete hai ki pointers  me daldiye hai and then pointer ko address & se declare kiya jata hai toh issme address aa rha hai

    return 0;
}