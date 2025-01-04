#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int circumference = 2 * 3.14 * a;
    // cout<<"Circumference of circle is: "<<circumference<<endl;
    int area = 3.14 * a * a;
    if (area > circumference)
    {
        cout << "Area is greater than circumference";
    }
    else
    {
        cout << "Circumference is greater than area";
    }
    return 0;
}