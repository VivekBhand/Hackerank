class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        // if (!del)
        // return;
        // Node **temp;
        // temp = &del;
        // //Node *temp;
        // //temp = del->next->next;
        // temp = &(del->next);
        // *del = **temp;
        
        //2nd method
        
        // Node *temp = del->next;
        // del->data = temp->data;
        // del->next = temp->next;
        
        //3rd method 
        struct Node* prev;
        if (del == NULL)
            return;
        else {
            while (del->next != NULL) {
                del->data = del->next->data;
                prev = del;
                del = del->next;
            }
        prev->next = NULL;
    }
        
       // Your code here
    }

};
