#include <iostream>
using namespace std;

struct node
{
    int value;
    node* address;
};

int main()
{
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();
    node* n4 = new node();

    n1->address = n2;
    n2->address = n3;
    n3->address = n4;
    n4->address = NULL;

    node* n0 = new node();
    n0->address = n1;

    n0->value = 10;
    n1->value = 20;
    n2->value = 5;
    n3->value = 15;
    n4->value = 30;

    int sum = 0;

    for (node* i = n0; i != NULL; i = i->address)
    {
        sum = sum + i->value;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}