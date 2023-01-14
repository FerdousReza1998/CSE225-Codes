#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED class
class FullQueue
{};
class EmptyQueue
{};

template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
    public :
        QueType();
        ~QueType();
        void MakeEmpty();
        void Enqueue(ItemType);
        void Dequeue(ItemType&);
        bool IsEmpty();
        bool IsFull();
        ItemType front_element(); //Function to return the front element of queue
    private:
        NodeType *front, *rear;
};

#endif // QUETYPE_H_INCLUDED
