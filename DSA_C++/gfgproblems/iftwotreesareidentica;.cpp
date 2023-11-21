class Solution
{
    public:
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        // If both trees are empty, they are identical.
        if (r1 == nullptr && r2 == nullptr)
            return true;

        // If one tree is empty and the other is not, they are not identical.
        if (r1 == nullptr || r2 == nullptr)
            return false;

        // Check if the current nodes' data are equal.
        if (r1->data != r2->data)
            return false;

        // Recursively check left and right subtrees.
        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
    }
};
