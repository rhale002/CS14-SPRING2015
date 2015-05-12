// Name: Robyn Haley
// SID: 861149793

// Date: 5/12/15
// Lab06

#include "selectionsort.h"
#include <iostream>
#include <vector>
#include <list>
using namespace std;
 
int main()
{
    cout << "pre:  2 4 5 1 8 9" << endl;
    vector<int> v(6);
    v.at(0) = 2;
    v.at(1) = 4;
    v.at(2) = 5;
    v.at(3) = 1;
    v.at(4) = 8;
    v.at(5) = 9;
   
    selectionsort(v);
   
    cout << "post: ";
    for (int i = 0; i < 6; i++)
    {
        cout << v.at(i) << ' ';
    }
    cout << endl;
   
    cout << endl;
    cout << "pre: ";
    list<int> l;
    while(!l.empty())
    {
        cout << l.front() << ' ';
        l.pop_front();
    }
    cout << endl;
   
    selectionsort(l);
 
    cout << "post: ";
    while(!l.empty())
    {
        cout << l.front() << ' ';
        l.pop_front();
    }
    cout << endl;
   
    cout << endl;
    cout << "pre:  (1,2) (3,-1) (-1,3) (0,0) (2,3) (1,2) (1,-2) (8,10)" << endl;
    list<pair<int,int>> vp;
    vp.push_back(make_pair (1,2));
    vp.push_back(make_pair (3,-1));
    vp.push_back(make_pair (-1,3));
    vp.push_back(make_pair (0,0));
    vp.push_back(make_pair (2,3));
    vp.push_back(make_pair (1,2));
    vp.push_back(make_pair (1,-2));
    vp.push_back(make_pair (8,10));
   
    selectionsort(vp);
   
    cout << "post: ";
    while (!vp.empty())
    {
        cout << "(" << vp.front().first << "," << vp.front().second << ") ";
        vp.pop_front();
    }
   
    cout << endl;
   
    cout << endl;
    cout << "pre:  (10,2) (-3,-1) (-8,0) (1,1) (1,1) (0,0) (10,2) (5,5) (5,-5) (0,0) (10,2)" << endl;
    list<pair<int,int>> vp2;
    vp2.push_back(make_pair (10,2));
    vp2.push_back(make_pair (-3,-1));
    vp2.push_back(make_pair (-8,0));
    vp2.push_back(make_pair (1,1));
    vp2.push_back(make_pair (1,1));
    vp2.push_back(make_pair (0,0));
    vp2.push_back(make_pair (10,2));
    vp2.push_back(make_pair (5,5));
    vp2.push_back(make_pair (5,-5));
    vp2.push_back(make_pair (0,0));
    vp2.push_back(make_pair (10,2));
   
    selectionsort(vp2);
   
    cout << "post: ";
    while (!vp2.empty())
    {
        cout << "(" << vp2.front().first << "," << vp2.front().second << ") ";
        vp2.pop_front();
    }
   
    cout << endl;
   
    cout << endl;
    cout << "pre:  (-1,3) (0,0) (1,-2) (1,2) (1,2) (2,3) (3,-1) (8,10)" << endl;
    list<pair<int,int>> vp3;
    vp3.push_back(make_pair (-1,3));
    vp3.push_back(make_pair (0,0));
    vp3.push_back(make_pair (1,-2));
    vp3.push_back(make_pair (1,2));
    vp3.push_back(make_pair (1,2));
    vp3.push_back(make_pair (2,3));
    vp3.push_back(make_pair (3,-1));
    vp3.push_back(make_pair (8,10));
   
    selectionsort(vp3);
   
    cout << "post: ";
    while (!vp3.empty())
    {
        cout << "(" << vp3.front().first << "," << vp3.front().second << ") ";
        vp3.pop_front();
    }
    cout << endl;
    
    cout << endl << "Testing if stable: " << endl;
    cout << "pre:  1 1 1 1 1 1" << endl;
    vector<int> v2(6);
    v2.at(0) = 1;
    v2.at(1) = 1;
    v2.at(2) = 1;
    v2.at(3) = 1;
    v2.at(4) = 1;
    v2.at(5) = 1;
   
    cout << "Running selectionsort: " << endl;
    selectionsort(v);
    cout << "Copies should be: 0" << endl << "Moves should be: 0" << endl;
   
    cout << "post: ";
    for (int i = 0; i < 6; i++)
    {
        cout << v2.at(i) << ' ';
    }
    cout << endl;
    
    // cout << "pre:  (-1,3) (0,0) (1,-2) (1,2) (1,2) (2,3) (3,-1) (8,10)" << endl;
    // vector<pair<int,int>> vp4;
    // vp4.push_back(make_pair (1,2));
    // vp4.push_back(make_pair (3,-1));
    // vp4.push_back(make_pair (-1,3));
    // vp4.push_back(make_pair (0,0));
    // vp4.push_back(make_pair (2,3));
    // vp4.push_back(make_pair (1,2));
    // vp4.push_back(make_pair (1,-2));
    // vp4.push_back(make_pair (8,10));
   
    // selectionsort(vp4);
   
    // cout << "post: ";
    // for(unsigned i = 0; i < vp4.size(); i++)
    // {
    //     cout << "(" << vp4.at(i).first << "," << vp4.at(i).second << ") ";
    // }
    // cout << endl;
    return 0;
}

