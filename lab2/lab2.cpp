// Name: Robyn Haley
// SID: 861149793
// Date: 4/14/15
// Lab02

#include "lab2.h"

#include <iostream>
#include <forward_list>

using namespace std;

int primeCount(forward_list<int> lst);
bool isPrime(int i);
template <typename T>
void listCopy(forward_list<T> L,forward_list<T>& P);
template <typename T>
void printLots (forward_list<T> L, forward_list<int> P);

int main()
{
    //Test PrimeCount
    cout << "PRIME COUNT FUNCTION TESTING BELOW:" << endl;
    forward_list<int> lst;
    for(int i = 0; i < 10; i++)
    {
        lst.push_front(i);
    }
    cout << "lst PrimeCount: " << primeCount(lst) << endl << endl;
    
    //Test list class and function
    cout << "LIST CLASS AND FUNCTION TESTING BELOW:" << endl;
    List<int> intlst;
    for(int i = 0; i < 5; i++)
    {
        intlst.push_front(i);
    }
    cout << "Starting List: ";
    intlst.print();
    cout << endl;
    
    cout << "Swap second and third element: ";
    intlst.elementSwap(1);
    intlst.print();
    cout << endl;
    
    cout << "Swap first and second element: ";
    intlst.elementSwap(0);
    intlst.print();
    cout << endl;
    
    cout << "Swap fourth and fifth element: ";
    intlst.elementSwap(3);
    intlst.print();
    cout << endl << endl;
    
    List<int> intlst2;
    for(int i = 0; i < 2; i++)
    {
        intlst2.push_front(i);
    }
    cout << "Starting list: ";
    intlst2.print();
    cout << endl;
    
    cout << "Swap first and second element: ";
    intlst2.elementSwap(0);
    intlst2.print();
    cout << endl << endl;
    
    // cout << "Swap second and third element: ";
    // intlst2.elementSwap(1);
    // intlst2.print();
    // cout << endl << endl;
    
    //Test List copy function
    cout << "TESTING LIST COPY FUNCTION BELOW:" << endl;
    forward_list<int> base;
    forward_list<int> canvas;
    
    for(int i = 0; i < 3; i++)
    {
        base.push_front(i);
    }
    
    for(int i = 3; i < 6; i++)
    {
        canvas.push_front(i);
    }
    
    listCopy(base, canvas);
    
    
    cout << "Result list: ";
    for(int i = 0; i < 6; i++)
    {
        cout << canvas.front();
        canvas.pop_front();
    }
    cout << endl << endl;
    
    //Test Print lots below
    cout << "TESTING PRINTLOTS FUNCTION BELOW: " << endl;
    forward_list<int> L;
    forward_list<int> P;
    
    for(int i = 6; i > 0; i--)
    {
        L.push_front(i);
    }
    
    // P.push_front(8);
    P.push_front(5);
    P.push_front(3);
    P.push_front(2);
    P.push_front(0);
    
    cout << "PrintLots Output: ";
    printLots(L, P);
    cout << endl;
    
    cout << "Starting L list: ";
    for(int i = 0; i < 6; i++)
    {
        cout << L.front();
        L.pop_front();
    }
    cout << endl;
    
    cout << "Starting P list: ";
    for(int i = 0; i < 4; i++)
    {
        cout << P.front();
        P.pop_front();
    }
    cout << endl;
    
    return 0;
}

bool isPrime(int i)
{
    if(i == 0 || i == 1)
    {
        return false;
    }
    
    for(int j = 2; j < i; j++)
    {
        if(i % j == 0)
        {
            return false;
        }
    }
    
    return true;
}

int primeCount(forward_list<int> lst)
{
    if(lst.empty())
    {
        return 0;
    }
    
    if(isPrime(lst.front()))
    {
        lst.pop_front();
        
        return 1 + primeCount(lst);
    }
    else
    {
        lst.pop_front();
        
        return primeCount(lst);
    }
}

template <typename T>
void listCopy(forward_list<T> L,forward_list<T>& P)
{
    forward_list<T> P2;
    
    while(!P.empty())
    {
        P2.push_front(P.front());
        P.pop_front();
    }
    
    while(!L.empty())
    {
        P.push_front(L.front());
        L.pop_front();
    }
    
    while(!P2.empty())
    {
        P.push_front(P2.front());
        P2.pop_front();
    }
}

template <typename T>
void printLots (forward_list<T> L, forward_list<int> P)
{
    int i = 0;
    
    while(!P.empty())
    {
        while(i < P.front())
        {
            if(L.empty())
            {
                throw 1;
            }
            
            L.pop_front();
            i++;
        }
        cout << L.front();
        
        P.pop_front();
    }
}