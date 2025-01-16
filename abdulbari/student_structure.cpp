#include <iostream>
using namespace std;
struct student
{
    int roll_no;
    int marks;
    string name;
};
int main()
{
    struct student eight_class = {1, 5, "raghav"};
    cout << eight_class.roll_no << endl;
    cout << eight_class.marks << endl;
    cout << eight_class.name << endl;
    return 0;
}