struct Node *reverse(Node *head)
    {
        struct Node *curr = head;
        struct Node *next = NULL;
        struct Node *prev = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        
        struct Node* temp = NULL;
        struct Node* head = NULL;
        
        if(node1 == NULL)
            return reverse(node2);
            
        if(node2 == NULL)
            return reverse(node1);
            
        while(node1 && node2)
        {
            while(node1 && node2 && node1->data <= node2 -> data)
            {
                //cout << "node1 data: " << node1->data << endl; 
                if(temp)
                {
                    temp->next = node1;
                    temp = temp->next;
                }
                else
                {
                    temp = node1;
                    head = temp;
                }
                node1 = node1->next;
            }
            while(node1 && node2 && node2->data <= node1 -> data)
            {
                //cout << "node2 data: " << node2->data << endl; 
                if(temp)
                {
                    temp->next = node2;
                    temp = temp->next;
                }
                else
                {
                    temp = node2;
                    head = temp;
                }
                node2 = node2->next;
            
            }
        }
        while(node1)
        {
                temp->next = node1;
                temp = temp->next;
                node1 = node1->next;
        }
        while(node2)
        {
                temp->next = node2;
                temp = temp->next;
                node2 = node2->next;
        }
        return reverse(head);
        
        
        // your code goes here
    }
