#include <bits/stdc++.h>

using namespace std;

const int DEGREE = 5;
const int MAX_KEYS = 2*DEGREE - 1 , MAX_CHILDREN = MAX_KEYS + 1;
struct Node {
    int n; // number of keys
    int key [MAX_KEYS];
    Node* child [MAX_CHILDREN];
    bool leaf;
};

Node* BtreeSearch(Node* node , int k){
    int i = 0;
    while(i < node->n && node->key[i] < k)
    {
    i++;
    }
    if(i < node->n && node->key[i] == k)
        return node;
    if(node->leaf)
        return nullptr;
    return BtreeSearch(node->child[i] , k);


}
int main()
{

    return 0;
}
