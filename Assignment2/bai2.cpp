#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node();
    Node(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }

    Node* insert_node(Node* head, int pos, int dat)
    {
        Node* node = new Node(dat);
        if(pos == 0)
        {
            node->next = head;
            head = node;
        }
        else
        {
            Node* p =head;
            while(--pos != 0)
            {
                p=p->next;
            }
            node->next = p->next;
            p->next = node;
        }
        return head;
    }

    Node* delete_node(Node* head, int pos)
    {
        if(pos == 0)
        {
            return head->next;
        }
        else
        {
            head->next = delete_node(head->next, pos-1);
            return head;
        }
    }
};
