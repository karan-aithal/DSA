#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Node
{
    // two variables(value)=>(next pointer)
public:
    int value;
    Node *next; // pointer to a Node object    (name-next)
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
    Node *head; //(Node )-pointer to a Node
    Node *tail; //(Node )-pointer to a Node
    int length;

public:
    // Constructor
    LinkedList(int value) // create new Node with value and assign newNode pointer to it
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        // point head and tail pointers to where new node is pointing  //////////////////////////////////
        length = 1;
    }

    // Destructor
    ~LinkedList() // delete new Node with temp pointer
    {
        Node *temp = head;
        while (head)
        {
            head = head->next;
            delete head;
            temp = head;
        }
    }

    void Append(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr) // empty
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode; // tail -> Node.next -> newNode
            tail = newNode;       // tail -> newNode
        }
        length++;
    }

    void Prepend(int value)
    {
        Node *newNode = new Node(value);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    void DeleteFirst()
    {
        if (length == 0)
            return; // if no Node is found

        Node *temp = head;

        if (length == 1) // if 1 Node is found
        {
            head = nullptr; // make head and tail null
            tail = nullptr;
        }
        else
        {
            head = head->next; // point head to next and delete temp(head node)
        }
        delete temp;
        temp--;
    }

    void DeleteLast()
    {
        if (length == 0)
            return; // if no Node is found
        Node *temp = head;
        if (length == 1) // if 1 Node is found
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        { // if more Nodes are found
            Node *pre = head;
            // traverse the list using temp and pre pointers until last node points to null
            while (temp->next)
            {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
        }
        delete temp;
        length--;
    }

    Node *Get(int index)
    {
        if (index < 0 || index >= length)
            return nullptr; // error out of bounds
        Node *temp = head;
        for (int i = 0; i < index; ++i) // traverse to the Index node using a temp pointer and return the pointer
        {
            temp = temp->next;
        }
        return temp;
    }

    bool Set(int index, int value) // Update the index with the given value
    {
        if (index < 0 || index >= length)
            return false;        // error out of bounds
        Node *temp = Get(index); // get the pointer to the indexed node
        if (temp)
        {
            temp->value = value; // set the value using temp pointer
            return true;
        }
        return false;
    }

    void DeleteNode(int index)
    {
        if (index < 0 || index >= length)
            return; // error out of bounds
        if (index == 0)
            return DeleteFirst();
        if (index == length - 1)
            return DeleteLast();

        Node *prev = Get(index - 1); // previous to index node
        Node *temp = prev->next;     // index node

        prev->next = temp->next; // point previous to index's next node
        delete temp;             // delete index node
        length--;
    }

    bool InsertNode(int index, int value) // Insert to index with the given value
    {
        if (index < 0 || index >= length)
            return false; // error out of bounds

        if (index == 0)
        {
            Prepend(value);
            return true; // if index 0 Add in start
        }
        if (index == length)
        {
            Append(value);
            return true; // if index = length Add in last
        }

        Node *newNode = new Node(value);
        Node *temp = Get(index - 1); // temp node points previous to index
        newNode->next = temp->next;  // point newNode.next (newNode->next) to where indexNode(temp->next) is pointing
        temp->next = newNode;        // point temp
        length++;
        return true;
    }

    Node *findMiddleNode()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        // whiel fast is not null and fast->next is not null
        // Move slow one step at a time
        // Move fast two steps at a time
        // slwo will point to middle of list
        // if even middle next node
        // if odd middle node
    }

    bool hasLoop()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
        // whiel fast is not null and fast->next is not null
        // Move slow one step at a time
        // Move fast two steps at a time
        // fast will meet slow pointer if the list is a circular loop
        // then return true
    }

}
;
//////////////////////////////////////        FUNCTIONS         ////////////////////////////////////////////////////////////////////////////////
//.........................................................................................................................

// 1.Append(Add End)
// 2.Prepend(Add Start)
// 3.DeleteFirst
// 4.DeleteLast
// 5.Get
// 6.Set
// 7.InsertNode
// 8.DeleteNode
// 9.findMiddleNode()        // hare and tortoise method (slow and fast)
// 10.hasloop()         // hare and tortoise method (slow and fast)
// 11.FindkthNodefromend(int k)  // hare and tortoise method (slow and fast)
// 12.partitionlist

int main()
    {

    LinkedList *myLinkedList = new LinkedList(2);
    myLinkedList->Append(3);
    myLinkedList->Append(2);
    myLinkedList->Append(1);
    myLinkedList->Prepend(6);
    myLinkedList->DeleteFirst();
    myLinkedList->DeleteLast();
    myLinkedList->Get(3);
    myLinkedList->Set(2, 1);
    myLinkedList->InsertNode(3, 23);
    myLinkedList->DeleteNode(1);
    }