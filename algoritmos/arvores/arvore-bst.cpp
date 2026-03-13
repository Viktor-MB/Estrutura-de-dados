#include <cstdio>
#include <iostream>

using namespace std;

class Node {
public:
    int alvo;
    Node* esquerda;
    Node* direita;
    Node(int value) { alvo = value; esquerda = nullptr; direita = nullptr; }
};

Node* insert(Node* root, int key) {
    if (root == nullptr) return new Node(key);
    if (key < root->alvo) root->esquerda = insert(root->esquerda, key);
    else if (key > root->alvo) root->direita = insert(root->direita, key);
    return root;
}

Node* minValueNode(Node* node) {
    Node* current = node;
    while (current->esquerda != nullptr) current = current->esquerda;
    return current;
}

Node* remove(Node* root, int key) {
    if (root == nullptr) return root;
    if (key < root->alvo) root->esquerda = remove(root->esquerda, key);
    else if (key > root->alvo) root->direita = remove(root->direita, key);
    else {
        if (root->esquerda == nullptr) {
            Node* temp = root->direita; delete root; return temp;
        } else if (root->direita == nullptr) {
            Node* temp = root->esquerda; delete root; return temp;
        }
        Node* temp = minValueNode(root->direita);
        root->alvo = temp->alvo;
        root->direita = remove(root->direita, temp->alvo);
    }
    return root;
}

void emOrdem(Node* node) {
    if (node != nullptr) {
        emOrdem(node->esquerda);
        cout << node->alvo << " ";
        emOrdem(node->direita);
    }
}