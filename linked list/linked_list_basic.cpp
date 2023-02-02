#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int x) // constructor
    {
        data = x;
        next = NULL;
    }
};
node* input( ){
    int data1;
    cin>>data1;
    node * head = new node(data1);
    node * temp = head ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int data ;
    cin >>data ;
    node * head = new node (data); // calling constructor
    node * tail = head;
    int count;
    for (int  i = 0; i < count; i++)
    {
      cin>>data ;
      tail->next = new node ( data);
      tail = tail->next; 
    }
    

    return 0;
}