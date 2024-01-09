#include<bits/stdc++.h>
using namespace std;

struct node 
{
    char data;
    int value;
    struct node *next;
};
int main()
{    
    struct node *a;
    struct node*b;
    struct node *c;
    struct node *d;
    struct node *e;

    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    d=(struct node*)malloc(sizeof(struct node));
    e=(struct node*)malloc(sizeof(struct node));

    a->data='A';
    b->data='S';
    c->data='I';
    d->data='F';
    e->value=10;

    a->next=b;
    b->next=c;
    c->next=e;
    e->next=d;
    d->next=NULL;

    while(a!=NULL)
    {
        cout<< a->data;
        a=a->next;
    }
    

    return 0;
}