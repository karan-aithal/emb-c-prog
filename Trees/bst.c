#include <stdio.h>

//       __1__
//      /     \      
//     2       3
//    / \     / \   
//   4   5   6   7

// [ <-*left | key | *right-> ]
////////////////////////////////

struct Node
{
    int key;            // Key value
    struct Node *left;  // left node pointer
    struct Node *right; // right node pointer
};

// Function to create a new node with a given value (malloc) -- Constructor in C++
struct Node *newNode(int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)); // dynamic memory allocation temp

    temp->key = value;
    temp->left = NULL;
    temp->right = NULL;

    return temp; // return new node
};

void inOrder(struct Node *root)
{
    printf("inOrder\n");

    if (root != NULL)
    {
        inOrder(root->left); // Resursively call inOrder with left - root - right

        printf("%d\n", root->key);

        inOrder(root->right);
    }
}

void preOrder(struct Node *root)
{
    printf("pre-Order\n");

    if (root != NULL)
    {
        printf("%d\n", root->key);
        preOrder(root->left); // Resursively call preOrder with root - left - right and print key
        preOrder(root->right);
    }
    else
        return;
}

void postOrder(struct Node *root)
{
    printf("post-Order\n");

    if (root != NULL)
    {
        postOrder(root->left); // Resursively call postOrder with left right root and print key
        postOrder(root->right);
        printf("%d\n", root->key);
    }
    else
        return;
}

void levelOrder(struct Node *root)
{
    //                         ├────┼─────┼─────┼─────┼────┼────┤
    //  <-- FRONT (DEQUEUE)    │ 1  │     │     │     │    │    │   <-- REAR (INSERT)
    //                         ├────┼─────┼─────┼─────┼────┼────┤
    // ** is call a double pointer
    // ** is just a pointer to a pointer
    // queue[0]

    printf("Level-Order\n");

    if (root == NULL)
        return levelOrder;

    // create a Queue and enqueue the root node
    // Create a Queue with 100 size
    struct Node **queue = (struct Node **)malloc(sizeof(struct Node *) * 100);

    int front = 0, rear = 0;
    queue[rear++] = root; // Store Root element into queue , rear = 1

    while (front < rear) // Make sure Queue is not empty
    {
        // Dequeue a node from the queue
        struct Node *current = queue[front++];              // Use Front iterator for dequeue - Delete or Fetch

        printf("%d: ", current->key);                       // print the node value

        // Enqueue the left child if it exists
        if (current->left != NULL)
        {
            queue[rear++] = current->left;                  // Use Rear iterator for enqueue - Insert element
        }

        // Enqueue the right child if it exists
        if (current->right != NULL)
        {
            queue[rear++] = current->right; // Use Rear iterator for enqueue - Insert element
        }
    }

    // Free the queue memory
    free(queue);
    printf("\n");
}


void iterativePreOrder(struct Node *root) // without Reccursion
{

    // using stack
//  ├────┤
//  │    │
//  ├────┤
//  │    │
//  ├────┤
//  │    │
//  ├────┤
//  │    │
//  ├────┤
//  │ 1  │
//  ├────┤


   printf("iterativeOrder\n");

   if(root==NULL) return iterativePreOrder;




}

int main()
{

}