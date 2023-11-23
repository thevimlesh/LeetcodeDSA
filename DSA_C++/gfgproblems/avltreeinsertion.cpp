int height(Node* N){
    if(N==NULL){
        return 0;
    }
    return N->height;
}

int getBalance(Node* N){
    if(N==NULL){
        return 0;
    }
    return height(N->left) - height(N->right);
}

Node* rightRotation(Node* y){
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + std::max(height(y->left), height(y->right));
    x->height = 1 + std::max(height(x->left), height(x->right));

    return x;
}

Node* leftRotation(Node* x){
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + std::max(height(x->left), height(x->right));
    y->height = 1 + std::max(height(y->left), height(y->right));

    return y;
}

Node* insertToAVL(Node* node, int data) {
    if(node == NULL){
        return new Node(data);
    }

    if(data < node->data){
        node->left = insertToAVL(node->left, data);
    } else if(data > node->data){
        node->right = insertToAVL(node->right, data);
    } else {
        // Duplicate data is not allowed in AVL tree
        return node;
    }

    node->height = 1 + std::max(height(node->left), height(node->right));

    int balance = getBalance(node);

    // Left Left Case
    if(balance > 1 && data < node->left->data){
        return rightRotation(node);
    }

    // Right Right Case
    if(balance < -1 && data > node->right->data){
        return leftRotation(node);
    }

    // Left Right Case
    if(balance > 1 && data > node->left->data){
        node->left = leftRotation(node->left);
        return rightRotation(node);
    }

    // Right Left Case
    if(balance < -1 && data < node->right->data){
        node->right = rightRotation(node->right);
        return leftRotation(node);
    }

    return node;
}