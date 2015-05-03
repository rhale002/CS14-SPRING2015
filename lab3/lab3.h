// Name: Robyn Haley
// SID: 861149793
// Date: 4/21/15
// Lab03

#ifndef LAB3_H
#define LAB3_H

#include <cassert>
#include <stack>
#include <iostream>

using namespace std;

template<typename T>
class TwoStackFixed
{
  private:
    T* array;
    int size;
    int maxtop;
    int s1Place;
    int s2Place;
  
  public:
    TwoStackFixed(int size, int maxtop)
    {
      assert(maxtop * 2 <= size);
      
      this->size = size;
      this-> maxtop = maxtop;
      this->array = new T[size];
      this-> s1Place = 0;
      this-> s2Place = size - 1;
    }
    
    ~TwoStackFixed()
    {
      delete[] array;
    }
    
    void pushStack1(T value)
    {
      assert(!isFullStack1());
      
      array[s1Place] = value;
      s1Place++;
    }
    
    void pushStack2(T value)
    {
      assert(!isFullStack2());
      
      array[s2Place] = value;
      s2Place--;
    }
    
    T popStack1()
    {
      assert(!isEmptyStack1());
      
      s1Place--;
      
      return array[s1Place];
    }
    
    T popStack2()
    {
      assert(!isEmptyStack2());
      
      s2Place++;
      
      return array[s2Place];
    }
    
    bool isFullStack1()
    {
      if(s1Place == maxtop)
      {
        return true;
      }
      return false;
    }
    
    bool isFullStack2()
    {
      if(size - s2Place - 1 == maxtop)
      {
        return true;
      }
      return false;
    }
    
    bool isEmptyStack1()
    {
      if(s1Place == 0)
      {
        return true;
      }
      return false;
    }
    
    bool isEmptyStack2()
    {
      if(s2Place == size - 1)
      {
        return true;
      }
      return false;
    }
    
    T stack1Top()
    {
      assert(!isEmptyStack1());
      
      return array[s1Place - 1];
    }
    
    T stack2Top()
    {
      assert(!isEmptyStack2());
      
      return array[s2Place + 1];
    }
    
    void display()
    {
      for(int i = 0; i < s1Place; i++)
      {
        cout << array[i] << ' ';
      }
      for(int i = s1Place; i < s2Place + 1; i++)
      {
        cout << "  ";
      }
      for(int i = s2Place + 1; i < size; i++)
      {
        cout << array[i] << ' ';
      }
      cout << endl;
    }
};

template<typename T> 
class TwoStackOptimal 
{
  private:
    T* array;
    int size;
    int s1Size;
    int s2Size;
    
  public: 
    TwoStackOptimal(int size)
    {
      this->size = size;
      this->array = new T[size];
      this->s1Size = 0;
      this->s2Size = 0;
    }
    
    ~TwoStackOptimal()
    {
      delete[] array;
    }
    
    void pushFlexStack1(T value)
    {
      assert(!isFullStack1());
      
      array[s1Size] = value;
      
      s1Size++;
    }
    
    void pushFlexStack2(T value)
    {
      assert(!isFullStack2());
      
      array[size - s2Size - 1] = value;
      
      s2Size++;
    }
    
    T popFlexStack1()
    {
      assert(!isEmptyStack1());
      
      s1Size--;
      
      return array[s1Size];
    }
    
    T popFlexStack2()
    {
      assert(!isEmptyStack2());
      
      s2Size--;
      
      return array[size - s2Size - 1];
    }
    
    bool isFullStack1()
    {
      if(size == (s1Size + s2Size))
      {
        return true;
      }
      return false;
    }
    
    bool isFullStack2()
    {
      if(size == (s1Size + s2Size))
      {
        return true;
      }
      return false;
    }
    
    bool isEmptyStack1()
    {
      if(s1Size == 0)
      {
        return true;
      }
      return false;
    }
    
    bool isEmptyStack2()
    {
      if(s2Size == 0)
      {
        return true;
      }
      return false;
    }
    
    T stack1Top()
    {
      assert(!isEmptyStack1());
      
      return array[s1Size - 1];
    }
    
    T stack2Top()
    {
      assert(!isEmptyStack2());
      
      return array[size - s2Size];
    }
    
    void display()
    {
      for(int i = 0; i < s1Size; i++)
      {
        cout << array[i] << ' ';
      }
      for(int i = s1Size; i < size - s2Size; i++)
      {
        cout << "  ";
      }
      for(int i = size - s2Size; i < size; i++)
      {
        cout << array[i] << ' ';
      }
      cout << endl;
    }
};

template<typename T>
void showTowerStatesHelper(int n, stack<T>& A, stack<T>& B, stack<T>& C,
  char a, char b, char c)
{
  if(n == 1)
  {
    cout << "Moved " << A.top() << " from peg " << a << " to " << c << endl;
    C.push(A.top());
    A.pop();
  }
  else
  {
    showTowerStatesHelper(n - 1, A, C, B, a, c, b);
    showTowerStatesHelper(1, A, B, C, a, b, c);
    showTowerStatesHelper(n - 1, B, A, C, b, a, c);
  }
}

template<typename T>
void showTowerStates(int n, stack<T>& A, stack<T>& B, stack<T>& C)
{
  showTowerStatesHelper(n, A, B, C, 'A', 'B', 'C');
}

#endif