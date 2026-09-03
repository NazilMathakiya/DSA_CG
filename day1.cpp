#include <iostream>
using namespace std;

struct Box {
    int x;
    Box* address;
};

int main() {

    Box* b1 = new Box();
    b1->x = 10;

    Box* b2 = new Box();

    b1->address = b2;

    cout << b1->address << endl;
    cout << b2 << endl;

    return 0;
}