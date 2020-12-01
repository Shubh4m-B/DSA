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

struct Node *head0 = NULL;

void newNode(struct Node *head, int val)
{
    struct Node *ptr = head;
    struct Node *temp = new Node(val);

    if (head->next == NULL)
        head->next = temp;

    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
    }
}

void merge_list(struct Node *head1, struct Node *head2)
{
    struct Node *ptr1 = head1, *ptr2 = head2, *curr = NULL;

    if (ptr1->data < ptr2->data)
    {
        head0 = head1;
        curr = head1;
        if (ptr1->next != NULL)
            ptr1 = ptr1->next;

        else
        {
            ptr1->next = ptr2;
            return;
        }
    }
    else
    {
        head0 = head2;
        curr = head2;
        if (ptr2->next != NULL)
            ptr2 = ptr2->next;

        else
        {
            ptr2->next = ptr1;
            return;
        }
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr2->data <= ptr1->data)
        {
            curr->next = ptr2;
            curr = ptr2;
            if (ptr2->next == NULL)
            {
                curr->next = ptr1;
                ptr2 = NULL;
            }
            else
                ptr2 = ptr2->next;
        }
        else
        {
            curr->next = ptr1;
            curr = ptr1;
            if (ptr1->next == NULL)
            {
                curr->next = ptr2;
                ptr1 = NULL;
            }
            else
                ptr1 = ptr1->next;
        }
    }
}

void printList(struct Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    struct Node *head1 = new Node(1);
    newNode(head1, 4);
    newNode(head1, 4);
    newNode(head1, 4);

    printList(head1);

    struct Node *head2 = new Node(0);
    newNode(head2, 2);
    newNode(head2, 3);
    newNode(head2, 4);

    printList(head2);

    merge_list(head1, head2);

    printList(head0);
    return 0;
}