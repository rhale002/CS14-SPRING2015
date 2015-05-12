// Name: Robyn Haley
// SID: 861149793

// Date: 5/12/15
// Lab06
 
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
 
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
 
template<typename L>
void selectionsort(L &l)
{
    int copies = 0;
    int moves = 0;
    
    auto min = l.begin();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        min = min_element(it, l.end());
        
        if(min != it)
        {
            moves = moves + 3;
            swap(*it, *min);
        }
    }
    
    cout << "Copies: " << copies << endl;
    cout << "Moves: " << moves << endl;
}
 
#endif

