//
// Created by user on 2024/8/8.
//
#include "Depth-First-Search.h"
#include <stddef.h>
#include <stdio.h>
#include "STACK.h"
//前，中，后序遍历
void preOrderTraversal(const TreeNode *root, Stack *stack) {
    if (root == null) {
        printf("preOrderTraversal : root is NULL\n");
        return;
    }
    // push rootNode into stack
    push(&stack, root);
    while (!isEmpty(stack)) {
        const TreeNode *tmp = pop(&stack);
        printf("%d —> ", tmp->val);
        // 将根节点的右子节点入栈
        if (tmp->right != null) {
            push(&stack, tmp->right);
        }
        // 将根节点的左子节点入栈
        if (tmp->left != null) {
            push(&stack, tmp->left);
        }
    }
}

void inOrderTraversal(const TreeNode *root, Stack *stack);

void postOrderTraversal(const TreeNode *root, Stack *stack);
