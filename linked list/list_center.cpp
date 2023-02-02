// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends

class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        int count = 1; // since you are already on head
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        ptr = head;
        int i = count / 2 ;
        // cout<<count<<endl;
        while (i--)
        {   
            ptr = ptr->next;
        }

        return ptr->data;

        return -1;
    }
}
;

// { Driver Code Starts.

int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}
// } Driver Code Ends