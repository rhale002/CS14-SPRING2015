#include <list>
#include <iostream>

using namespace std;

template <typename T>

list<T> mergeList(list<T> a, list<T> b)
{
    list<T> result;
    
    while(a.size() != 0 && b.size() != 0)
    {
        if(result.size() % 2 == 0)
        {
            result.push_back(a.front());
            a.pop_front();
        }
        else
        {
            result.push_back(b.front());
            b.pop_front();
        }
    }
    
    while(a.size() != 0)
    {
        result.push_back(a.front());
        a.pop_front();
    }
    while(b.size() != 0)
    {
        result.push_back(b.front());
        b.pop_front();
    }
    
    return result;
}

template <typename T>

list<T> mergeSortList(list<T> a, list<T> b)
{
    list<T> result;
    
    while(a.size() != 0 && b.size() != 0)
    {
        if(a.front() < b.front())
        {
            result.push_back(a.front());
            a.pop_front();
        }
        else
        {
            result.push_back(b.front());
            b.pop_front();
        }
    }
    
    while(a.size() != 0)
    {
        result.push_back(a.front());
        a.pop_front();
    }
    while(b.size() != 0)
    {
        result.push_back(b.front());
        b.pop_front();
    }
    
    return result;
}

template <typename T>

void rotateList(list<T> &a, unsigned n)
{
    for(int i = 0; i < n; i++)
    {
        a.push_front(a.back());
        a.pop_back();
    }
}

int main()
{
    list<int> a;
    for(int i = 5; i < 10; i++)
    {
        a.push_back(i);
    }
    
    list<int> b;
    for(int i = 0; i < 5; i++)
    {
        b.push_back(i);
    }
    
    list<int> c = mergeList(a, b);
    
    while(c.size() != 0)
    {
        cout << c.front() << ' ';
        c.pop_front();
    }
    cout << endl;
    
    list<int> d = mergeSortList(a, b);
    
    while(d.size() != 0)
    {
        cout << d.front() << ' ';
        d.pop_front();
    }
    cout << endl;
    
    
    rotateList(a, 1000);
    
    while(a.size() != 0)
    {
        cout << a.front() << ' ';
        a.pop_front();
    }
    cout << endl;
}