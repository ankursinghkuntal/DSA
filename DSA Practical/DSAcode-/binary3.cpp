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

void iterativeinorder(node *root)
{
    stack<node *> st;
    node *t = root;
    while (t != NULL || !st.empty())
    {
        while (t != NULL)
        {
            st.push(t);
            t = t->left;
        }
        t = st.top();
        st.pop();
        cout << t->data << " ";
        t = t->right;
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

void iterativepreorder(node *root)
{
    stack<node *> st;
    st.push(root);
    while (st.empty() == false)
    {
        node *temp = st.top();
        cout << temp->data << " ";
        st.pop();
        if (temp->right != NULL)
        {
            st.push(temp->right);
        }
        if (temp->left != NULL)
        {
            st.push(temp->left);
        }
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

void iterativepostorder(node *root)
{
    if (root == NULL)
        return;
    stack<node *> s1, s2;
    s1.push(root);
    while (!s1.empty())
    {
        node *temp = s1.top();
        s1.pop();
        s2.push(temp);
        if (temp->left != NULL)
        {
            s1.push(temp->left);
        }
        if (temp->right != NULL)
        {
            s1.push(temp->right);
        }
    }
    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
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

int preIndex = 0;
node *ctree(int in[], int pre[], int ist, int iend)
{
    if (ist > iend)
        return NULL;
    node *node1 = new node(pre[preIndex++]);

    int inIndex = 0;
    for (int i = ist; i <= iend; i++)
    {
        if (in[i] == node1->data)
        {
            inIndex = i;
            break;
        }
    }
    node1->left = ctree(in, pre, ist, inIndex - 1);
    node1->right = ctree(in, pre, inIndex + 1, iend);
    return node1;
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
    int pre[] = {100, 20, 10, 30, 200, 150, 300};
    int in[] = {10, 20, 30, 100, 150, 200, 300};
    node *node1 = ctree(in, pre, 0, 6);
    displayinorder(node1);
    cout << endl;
}