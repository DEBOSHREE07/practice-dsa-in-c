#include <stdio.h>    // Include standard input/output library: Provides printf and scanf functions.
#include <stdlib.h>   // Include standard library: Provides malloc, free, and exit functions.

// Define the structure for nodes in the linked list.
struct Node {
    int data;           // Integer to store the data of the node.
    struct Node* link;  // Pointer to the next node in the linked list.
};

// Global pointer to the beginning (head) of the linked list.
// It is initialized to NULL since the list is initially empty.
struct Node* start = NULL;

// Function to insert a new node at the beginning of the linked list.
void insertfirst() {
    // Dynamically allocate memory for a new node.
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Check if the memory allocation was successful.
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);  // If allocation fails, terminate the program.
    }
    
    // Prompt the user to enter the data for the new node.
    printf("Enter data to insert: ");
    // Read an integer value from the user and save it in new_node->data.
    if (scanf("%d", &new_node->data) != 1) {
        // If the user input is invalid, free allocated memory, print an error message, and exit.
        free(new_node);
        printf("Invalid input.\n");
        exit(1);
    }
    
    // Insert the new node at the beginning of the linked list.
    // Set the new node's link to the current head of the list.
    new_node->link = start;
    // Update the head of the list to point to this new node.
    start = new_node;
}

// The main function: Entry point of the program.
int main() {
    int choice = 1;  // Control variable for the loop; 1 means "continue inserting nodes".
    
    // Loop that runs as long as the user decides to continue (choice remains 1).
    while (choice == 1) {
        insertfirst();  // Call the function to insert a new node at the beginning.
        
        // Prompt the user whether they want to insert another node.
        printf("Do you want to insert another node? (1 for Yes / 0 for No): ");
        // Read the user's decision.
        if (scanf("%d", &choice) != 1) {
            // Handle invalid input: Print error and exit.
            printf("Invalid input for choice.\n");
            exit(1);
        }
    }
    
    // Traverse the linked list and print each node's value.
    struct Node* temp = start;  // Temporary pointer for traversal.
    printf("\nThe linked list is: ");
    // Loop until temp becomes NULL, indicating the end of the list.
    while (temp != NULL) {
        // Print the current node's data followed by an arrow.
        printf("%d -> ", temp->data);
        // Move to the next node in the list.
        temp = temp->link;
    }
    // After traversal, print "NULL" to indicate the end of the linked list.
    printf("NULL\n");
    
    /* 
    Note: This example does not free the dynamically allocated memory.
    To avoid memory leaks, in a more complete program you should traverse the 
    list and free each node after you're done using them.
    */
    
    return 0;  // Return 0 to indicate that the program terminated successfully.
}
