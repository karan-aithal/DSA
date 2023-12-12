class Node{
// two variables(value)=>(next pointer)
public:
int value;
Node* next;  // pointer to a Node object    (name-next)
    //  (next = 0x22372b12190)
    //  (*next = value)

    Node(int value) // constructor of 1st Node
    {    
        this->value = value;
        next = nullptr; 
    }
};

class LinkedList
{
    private:
    // head , tail , lenght of the LL
    Node* head;
    Node* tail;
    int length;

// constructor
    LinkedList(int value) // create new Node with value and assign newNode pointer to it 
    {
        Node* newNode = new Node(value);
        head = newNode;  
        tail = newNode;
        // point head and tail pointers to where new node is pointing  //////////////////////////////////
        length = 1;
    }

// destructor
    ~LinkedList() // delete new Node with temp pointer 
    {
        Node* temp = head;
        while (head)
        {
            head = head->next;
            delete head;
            temp = head;
        }
          
    }
};