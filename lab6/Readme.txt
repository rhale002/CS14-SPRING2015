Name: Robyn Haley
SID: 861149793

Date: 5/12/15
Lab06

Question 2

A.)
    Our selection sort is stable because if the min value we find is the same as
    where it started then the item does not get swapped. Also the way in which 
    we found our min element to swap with is by using the min_element function
    from the algorithm library which does this:
    
    template <class ForwardIterator>
    ForwardIterator min_element ( ForwardIterator first, ForwardIterator last )
    {
      if (first==last) return last;
      ForwardIterator smallest = first;
    
      while (++first!=last)
        if (*first<*smallest) 
          smallest=first;
      return smallest;
    }
    
    Based on this we can see that if the start equals end then we do nothing and
    just return the last. We can also see that they only make a change to the
    smallest if first is less than smallest. Thus if the elements were equal
    there would be no change on our iterator and thus we would perform no swap. 
    
    Another good indicator of our program being stable is how our number of 
    moves and copies is equivalent to the number within the provided test cases. 
    
B.)
    Our testing is all within our main. The primary testing program for if it is 
    stable is:
    
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
    
    This tests if the sort is stable becuase if it was not stable then we would 
    be doing any swaps/copies. Because we do no copies or swaps it is stable.