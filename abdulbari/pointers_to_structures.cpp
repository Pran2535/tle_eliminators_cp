#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    Rectangle rect1 = {5, 10};
    Rectangle *p = &rect1;
    // p.length=20;   this will give us error because pointer is just address we need to convert it into the variable
    // so  we are using *p.length but it will not work still because . operator has more precedance than *;
    // *p.length=20;
    (*p).length = 20; // it will work because p is first getting converted into the pointer to length operator
    cout << (*p).length << endl;

    p->length = 40; // and the same functioanlity is given by -> operator
    cout << p->length;
    return 0;
}