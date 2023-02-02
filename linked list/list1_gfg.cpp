//https://www.youtube.com/watch?v=utc8bwTDjLk&list=PLqM7alHXFySH41ZxzrPNj2pAYPOI8ITe7&index=3&ab_channel=GeeksforGeeks
//date 2 dec 2021 


#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print_list (node * head ){
    node * temp = head ;
    while ( temp != NULL){
        cout << temp->data<<endl;
        temp = temp->next;
    }
    cout <<endl;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

node * head = new node (1);
head->next =  new node (9);
head->next->next =  new node (9);
head->next->next->next =  new node (9);
   
    return 0;
}
