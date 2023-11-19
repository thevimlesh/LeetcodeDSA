struct Node {
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* result = NULL;
        Node* tail = NULL;

        while (head1 != NULL && head2 != NULL) {
            if (head1->data == head2->data) {
                if (result == NULL) {
                    result = new Node(head1->data);
                    tail = result;
                } else {
                    tail->next = new Node(head1->data);
                    tail = tail->next;
                }
                head1 = head1->next;
                head2 = head2->next;
            } else if (head1->data < head2->data) {
                head1 = head1->next;
            } else {
                head2 = head2->next;
            }
        }

        return result;
    }
};
