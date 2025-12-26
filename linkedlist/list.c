#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// Define the node structure using typedef for convenience
typedef struct Node {
    int data;          // Data field (can be any data type)
    struct Node* next; // Pointer to the next node
} Node;

// Global head pointer, points to the first node
Node* head = NULL;

// Function to create a new node
Node* createNode(int data) {
    // Allocate memory for the new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data; // Assign data
    newNode->next = NULL; // New node is initially the last in its immediate context
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(int data) {
    Node* newNode = createNode(data);
    newNode->next = head; // Link new node to the current head
    head = newNode;        // Update the head to the new node
}

// Function to traverse and print the linked list
void printList() {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n");
}

// Function to free the memory used by the linked list (to prevent memory leaks)
void freeList() {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
	temp = NULL;
    }
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    printf("Linked List: ");
    printList(); // Output: Linked List: 30 -> 20 -> 10 -> NULL
    
    // Remember to free allocated memory
    freeList();
    return 0;
}

