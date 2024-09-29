#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int item)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = item;
    }
};

void insertbtree(node *root, int key)
{
    node *t = new node(key);
    node *temp = root;
    while (1)
    {
        if (temp->data > key)
        {
            if (temp->left == NULL)
            {
                temp->left = t;
                cout << "Node entered successfully\n";
                break;
            }
            temp = temp->left;
        }
        else
        {
            if (temp->right == NULL)
            {
                temp->right = t;
                cout << "Node entered succesfully\n";
                break;
            }
            temp = temp->right;
        }
    }
}

void displayinorder(node *root)
{
    node *temp = root;
    if (temp->left != NULL)
    {
        displayinorder(temp->left);
    }
    cout << temp->data << " ";

    if (temp->right != NULL)
    {
        displayinorder(temp->right);
    }
}

void displaypreorder(node *root)
{
    node *temp = root;
    cout << temp->data << " ";

    if (temp->left != NULL)
    {
        displayinorder(temp->left);
    }

    if (temp->right != NULL)
    {
        displayinorder(temp->right);
    }
}

void displaypostorder(node *root)
{
    node *temp = root;

    if (temp->left != NULL)
    {
        displaypostorder(temp->left);
    }

    if (temp->right != NULL)
    {
        displaypostorder(temp->right);
    }
    cout << temp->data << " ";
}

void level_order(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        root = q.front();
        cout << root->data << " ";
        q.pop();
        if (root->left != NULL)
            q.push(root->left);
        if (root->right != NULL)
            q.push(root->right);
    }
}

int height(node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

node *mirrorimage(node *root)
{
    if (root != NULL)
    {
        node *x = new node(root->data);
        x->right = mirrorimage(root->left);
        x->left = mirrorimage(root->right);
        return x;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    node *root = NULL;
    node *p = new node(25);
    root = p;
    insertbtree(root, 20);
    insertbtree(root, 6);
    insertbtree(root, 8);
    insertbtree(root, 9);

    displayinorder(root);
    cout << endl;
    displaypreorder(root);
    cout << endl;
    displaypostorder(root);
    cout << endl;
    displayinorder(mirrorimage(root));
    cout << endl;
    cout << height(root) << endl;
}