 //Function to convert binary tree into circular doubly linked list.
    Node* bTreeToCList(Node* root) {
        if (root == nullptr) {
            return nullptr;
        }

        Node* head = nullptr;
        Node* tail = nullptr;

        bTreeToCListHelper(root, head, tail);

        if (head != nullptr) {
            tail->right = head;
            head->left = tail;
        }

        return head;
    }

private:
    void bTreeToCListHelper(Node* root, Node*& head, Node*& tail) {
        if (root == nullptr) {
            return;
        }

        bTreeToCListHelper(root->left, head, tail);

        if (head == nullptr) {
            head = root;
        } else {
            tail->right = root;
            root->left = tail;
        }

        tail = root;

        bTreeToCListHelper(root->right, head, tail);
    }
};