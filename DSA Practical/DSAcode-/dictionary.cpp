#include <bits/stdc++.h>
using namespace std;

struct node
{
    string word;
    string meaning;
    node *next;

    node(string word1, string meaning1)
    {
        word = word1;
        meaning = meaning1;
        next = NULL;
    }
};

class hashing
{
    node *hashtable[10];
    string meaning;
    string word;

public:
    hashing()
    {
        for (int i = 0; i < 10; i++)
        {
            hashtable[i] = NULL;
        }
    }
    void insert(int k, string word1, string meaning1)
    {
        node *temp = new node(word1, meaning1);

        if (hashtable[k] == nullptr)
        {
            hashtable[k] = temp;
        }
        else
        {
            node *temp2 = hashtable[k];
            hashtable[k] = temp;
            hashtable[k]->next = temp2;
        }
    }

    void search(int k, string word1)
    {
        int u = 0;
        node *temp = hashtable[k];
        while (temp != nullptr)
        {
            if (temp->word == word1)
            {
                u++;
                cout << "found : " << temp->meaning << endl;
                break;
            }
            temp = temp->next;
        }
        if (u == 0)
        {
            cout << "not found\n";
        }
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << i << " ";
            node *temp = hashtable[i];
            while (temp != nullptr)
            {
                cout << temp->word << " = " << temp->meaning << " ->";
                temp = temp->next;
            }
            cout << "nullptr" << endl;
        }
    }
};
int findmod(string a)
{
    int k = 0;
    int u = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int y = pow(10, u);
        u++;
        int q = int(a[i]);
        q *= y;
        k += q;
        k %= 10;
    }
    return k;
}
int main()
{
    hashing obj;

    for (int i = 0; i < 10; i++)
    {
        string a, b;
        cin >> a;
        getline(cin, b);
        int k = findmod(a);
        obj.insert(k, a, b);
    }
    obj.display();
    int n;
    cin >> n;
    while (n--)
    {
        string x;
        cout << "enter word no to be searched\n";
        cin >> x;
        int k = findmod(x);
        obj.search(k, x);
    }
}
