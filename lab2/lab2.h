// Name: Robyn Haley
// SID: 861149793
// Date: 4/14/15
// Lab02

#ifndef LAB2_H
#define LAB2_H

#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
struct Node
{
    T value;
    Node *next;
    Node (T value) 
        : value(value), next(0)
    {}
};

template <typename T>
class List
{
    private:
        Node<T>* head;
        Node<T>* tail;
        
    public:
        List()
            : head(0), tail(0)
        {}
        
        void print()
        {
            Node<T>* place = head;
            
            for(int i = 0; i < size(); i++)
            {
                cout << place -> value;
                place = place -> next;
            }
        }
        
        void push_front(T value)
        {
            Node<T>* toPush = new Node<T>(value);
            
            if(head == 0)
            {
                head = toPush;
                tail = toPush;
                return;
            }
            
            toPush -> next = head;
            head = toPush;
        }
        
        int size()
        {
            int i = 0;
            
            for(Node<T>* place = head; place != 0; place = place -> next)
            {
                i++;
            }
            
            return i;
        }
        List<T> elementSwap(int p)
        {
            assert(p <= size() - 2 && p >= 0);
            
            
            if(p == 0)
            {
                Node<T>* temp = head -> next;
                head -> next = head -> next -> next;
                temp -> next = head;
                head = temp;
            }
            else
            {
                Node<T>* first = head;
                Node<T>* second = head -> next;
                
                for(int i = 0; i < p - 1; i++)
                {
                    first = first -> next;
                    second = second -> next;
                }
                
                Node<T>* third = second -> next;
                
                first -> next = third;
                second -> next =  third -> next;
                third -> next = second;
                
                if(p == size() - 2)
                {
                    tail = second;
                }
            }
            return *this;
        }
};

#endif