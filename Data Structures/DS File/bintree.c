#include <stdio.h>
#include <stdlib.h>
struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
};
typedef struct BST NODE;
NODE *node;
NODE *createtree(NODE *node, int data)
{
    if (node == NULL)
    {
        NODE *temp;
        temp = (NODE *)malloc(sizeof(NODE));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (data < (node->data))
    {
        node->left = createtree(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = createtree(node->right, data);
    }
    return node;
}
void inorder(NODE *node)
{
    if (node != NULL)
    {
        inorder(node->left);
        printf("%d\t", node->data);
        inorder(node->right);
    }
}
void preorder(NODE *node)
{
    if (node != NULL)
    {
        printf("%d\t", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
void postorder(NODE *node)
{
    if (node != NULL)
    {
        postorder(node->left);
        postorder(node->right);
        printf("%d\t", node->data);
    }
}
NODE *findMin(NODE *node)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->left)

        return findMin(node->left);
    else
        return node;
}
void main()
{
    int data, ch, i, n;
    NODE *root = NULL;
    while (1)
    {
        printf("\n-> 1. Insertion in Binary Search Tree");
        printf("\n-> 2. Inorder\n 3. Preorder\n 4. Postorder\n 5.Exit");
        printf("\n-> Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter N value: ");
            scanf("%d", &n);
            printf("\nEnter the values to create BST \n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &data);
                root = createtree(root, data);
            }
            break;
        case 2:
            printf("\n Inorder Traversal: \n");
            inorder(root);
            break;
        case 3:
            printf("\n Preorder Traversal: \n");
            preorder(root);
            break;
        case 4:
            printf("\n Postorder Traversal: \n");
            postorder(root);
            break;
        case 5:
            exit(0);
        default:
            printf("\n Wrong option");
            break;
        }
    }
}