#include <stdlib.h>
#include <stdio.h>

typedef enum TypeTag {
    ADD,
    MUL,
    SUB,
    DIV,
    FIB
} TypeTag;

typedef struct Node {
    TypeTag type;
    int left;
    int right;
} Node;

Node* makeFunc(TypeTag type, int left, int right) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->left = left;
    node->right = right;
    return node;
}

int fibonacci(int n) {
    static int memo[1000] = {0};
    memo[1] = 1;
    for (int i=2; i<=n; i++) {
        memo[i] = memo[i-1]+memo[i-2];
    }
    return memo[n];
}

int calc(Node* node) {
    int left = node->left;
    int right = node->right;
    switch (node->type) {
        case ADD:
            return left + right;
        case MUL:
            return left * right;
        case SUB:
            return left - right;
        case DIV:
            return left / right;
        case FIB:
            return fibonacci(left);
        default:
            return 0;
    }
}

int main() {
    Node *add = makeFunc(ADD, 10, 6);
    Node *mul = makeFunc(MUL, 5, 4);
    Node *sub = makeFunc(SUB, calc(mul), calc(add));
    Node *fibo = makeFunc(FIB, calc(sub), 0);
    printf("%d\n", calc(add));
    printf("%d\n",calc(mul));
    printf("%d\n",calc(sub));
    printf("%d\n",calc(fibo));
    return 0;
}