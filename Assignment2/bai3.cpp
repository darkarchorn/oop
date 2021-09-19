#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

int count(DoublyLinkedListNode* node)
{
    int dem =0;
    while(node!=nullptr)
    {
        if(node->next->next == nullptr || node->next == nullptr || node ==nullptr) return dem;
        else
        {
            if(node->next->data == (node->data + node->next->next->data) dem++;
        }
        return dem;
    }
}
