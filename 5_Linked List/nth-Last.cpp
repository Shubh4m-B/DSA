#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void printNthFromLast(struct Node *head, int n)
{
    struct Node *p = head;
    struct Node *q = head;

    while (n - 1 != 0 && p != NULL)
    {
        p = p->next;
        n--;
    }

    if (p == NULL)
    {
        cout << "Not present, linked list too short";
        exit(0);
    }

    p = p->next;

    while (p != NULL)
    {
        p = p->next;
        q = q->next;
    }

    cout << q->data;
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    struct Node *head = NULL;
    push(&head, 61);
    push(&head, 62);
    push(&head, 63);
    push(&head, 64);

    int n;
    cin >> n;
    printNthFromLast(head, n);
    return 0;
}
