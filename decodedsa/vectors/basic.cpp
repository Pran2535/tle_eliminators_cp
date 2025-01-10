#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // here we are initializing the vector v with size 0 and capacity 0;
    // vector<int> v1(5);
    // // here se are initializing the vector v1 with size 5  and default value 0;
    // // now ab size or default value ke sath ki baari hai
    // vector<int> v2(5, 10);
    // here we are initializing the vector v2 with size 5 and default value 10;
    v.push_back(6);
    v.push_back(10);
    v.push_back(12);
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}