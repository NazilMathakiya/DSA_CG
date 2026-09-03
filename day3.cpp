#include <iostream>
using namespace std;


struct node{
    int  value;
    node* address;
};

int main(){

    node* n0 = new node();
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();

    n0->address = n1;
    n1->address = n2;
    n2->address = n3;
    n3->address = NULL;

    node* n4 = new node();
    n4->address = NULL; 

    node* i = n0;

    for(i = n0; i->address != NULL; i = i->address){

    }
    i->address = n4;    



    return 0;
}