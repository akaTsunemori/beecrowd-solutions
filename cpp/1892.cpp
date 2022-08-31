#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Node
{
    public:
        string data;
        Node *left;
        Node *right;
        long long int height;
        long long int size;
};

long long int get_height(Node* tree)
{
    if (tree == NULL) return 0;
    return tree->height;
}

long long int get_size(Node* tree)
{
    if (tree == NULL) return 0;
    return tree->size;
}

long long int get_balance(Node* tree)
{
    if (tree == NULL) return 0;
    return get_height(tree->left) - get_height(tree->right);
}

Node* new_node(string data)
{
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    node->size = 1;
    return node;
}

Node* left_rotation(Node* node)
{
    Node *left = node->right;
    Node *right = left->left;
    left->left = node;
    node->right = right;
    node->size = get_size(node->left) + get_size(node->right) + 1;
    left->size = get_size(left->left) + get_size(left->right) + 1;
    node->height = max(get_height(node->left), get_height(node->right)) + 1;
    left->height = max(get_height(left->left), get_height(left->right)) + 1;
    return left;
}

Node* right_rotation(Node* node)
{
    Node *right = node->left;
    Node *left = right->right;
    right->right = node;
    node->left = left;
    node->size = get_size(node->left) + get_size(node->right) + 1;
    right->size = get_size(right->left) + get_size(right->right) + 1;
    node->height = max(get_height(node->left), get_height(node->right)) + 1;
    right->height = max(get_height(right->left), get_height(right->right)) + 1;
    return right;
}

Node* insert(Node* node, string data, long long int* result)
{
    if (node == NULL) {
        return new_node(data);
    }
    if (data < node->data) {
        node->left = insert(node->left, data, result);
        *result += 1 + get_size(node->right);
    }
    else {
        node->right = insert(node->right, data, result);
    }
    node->size = get_size(node->left) + get_size(node->right) + 1;
    node->height = max(get_height(node->left), get_height(node->right)) + 1;
    long long int balance = get_balance(node);
    if (balance > 1) {
        if (data < node->left->data) {
            return right_rotation(node);
        }
        else {
            node->left = left_rotation(node->left);
            return right_rotation(node);
        }
    }
    if (balance < -1) {
        if (data > node->right->data) {
            return left_rotation(node);
        }
        else {
            node->right = right_rotation(node->right);
            return left_rotation(node);
        }
    }
    return node;
}

long long int get_inversions(vector<string> ranking)
{
    Node* node = NULL;
    long long int result = 0;
    for (string rank: ranking) {
        node = insert(node, rank, &result);
    }
    return result;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int n;
    vector<string> ranking;
    while (cin >> n) {
        ranking.clear();
        string aux;
        for (n; n > 0; n--) {
            cin >> aux;
            ranking.push_back(aux);
        }
        cout << get_inversions(ranking) << '\n';
    }
    return 0;
}