#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <queue>
#include <utility>
#include <stack>

using namespace std;

void preorderPrintHelper(int m, int n, int k)
{
    if(n + m >= k)
    {
        return;
    }
    
    cout << m << ' ' << n << endl;
    
    preorderPrintHelper(2 * m - n, m, k);
    preorderPrintHelper(2 * m + n, m, k);
    preorderPrintHelper(m + 2 * n, n, k);
}

void preorderPrint(int k)
{
    preorderPrintHelper(2, 1, k);
    preorderPrintHelper(3, 1, k);
}

void postorderPrintHelper(int m, int n, int k)
{
    if(n + m >= k)
    {
        return;
    }
    
    postorderPrintHelper(2 * m - n, m, k);
    postorderPrintHelper(2 * m + n, m, k);
    postorderPrintHelper(m + 2 * n, n, k);
    
    cout << m << ' ' << n << endl;
}

void postorderPrint(int k)
{
    postorderPrintHelper(2, 1, k);
    postorderPrintHelper(3, 1, k);
}

void sortedPrintHelper(int m, int n, int k, priority_queue<pair<int, pair<int, int> > > &q)
{
    if(n + m >= k)
    {
        return;
    }
    
    q.push(pair<int, pair<int, int> > (m + n, pair<int,int> (m, n)));
    
    sortedPrintHelper(2 * m - n, m, k, q);
    sortedPrintHelper(2 * m + n, m, k, q);
    sortedPrintHelper(m + 2 * n, n, k, q);
}

void sortedPrint(int k)
{
    priority_queue<pair<int, pair<int,int> > > q;
    
    sortedPrintHelper(2, 1, k, q);
    sortedPrintHelper(3, 1, k, q);
    
    stack<pair<int,int> > s;
    
    while(!q.empty())
    {
        s.push(q.top().second);
        q.pop();
    }
    
    while(!s.empty())
    {
        cout << s.top().first << ' ' << s.top().second << endl;
        s.pop();
    }
}

void print(int k)
{
    cout << "pre-order" << endl;
    preorderPrint(k);
    
    
    cout << "post-order" << endl;
    postorderPrint(k);
    
    cout << "sorted" << endl;
    sortedPrint(k);
}

#endif