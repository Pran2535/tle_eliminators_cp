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
    struct student raghav = {1, 5, "raghav"};
    cout << raghav.roll_no << endl;
    cout << raghav.marks << endl;
    cout << raghav.name << endl;
    return 0;
}