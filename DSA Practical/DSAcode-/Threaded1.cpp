#include <iostream>
using namespace std;

struct node
{
public:
    int data;
    node *left;
    node *right;
    bool lThread, rThread;
    node(int val)
    {
        data = val;
        left = right = nullptr;
        lThread = rThread = true;
    }
};

void insert_Node(int key, node* root)
{
    node *p = new node(key);
    if (root->left == nullptr)
    {
        root->left = p;
        p->left = root;
        p->right = root->right;
        root->lThread = false;
        return;
    }
    else
    {
        node *temp = root->left; 
        while (true)
        {
            if (key < temp->data)
            {
                if (temp->lThread == true)
                {
                    p->left = temp->left;
                    temp->left = p;
                    temp->lThread = false;
                    p->right = temp;
                    return;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->rThread == true)
                {
                    p->right = temp->right;
                    temp->right = p;
                    temp->rThread = false;
                    p->left = temp;
                    return;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}

void inOrderTraversal(node *root)
{
    node *current = root->left;
    
    while (current != root)
    {
        while (current->lThread == false)
        {
            current = current->left;
        }

        cout << current->data << " ";

        if (current->rThread == false)
        {
            current = current->right;
        }
        else
        {
            while (current->rThread == true && current->right != root)
            {
                current = current->right;
                cout << current->data << " ";
            }
            current = current->right;
        }
    }
    cout << endl;
}

int main()
{
    node *dummy = new node(999);

    insert_Node(45, dummy);
    insert_Node(32, dummy);
    insert_Node(7, dummy);
    insert_Node(98, dummy);
    insert_Node(62, dummy);

    cout << "Inorder: ";
    inOrderTraversal(dummy);

    return 0;
}
