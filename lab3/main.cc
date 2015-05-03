// Name: Robyn Haley
// SID: 861149793
// Date: 4/21/15
// Lab03
#include "lab3.h"
#include <stack>

#include <iostream>

using namespace std;

int main()
{
  //TWOSTACKFIXED TESTING BELOW:
  cout << "TwoStackFixed Testing Below:" << endl;
  TwoStackFixed<int> tSF(10, 5);
  
  if(tSF.isEmptyStack1())
  {
    cout << "Stack 1 is empty!" << endl;
  }
  
  if(tSF.isEmptyStack2())
  {
    cout << "Stack 2 is empty!" << endl;
  }
  
  cout << "Pushing stack 1: " << endl;
  for(int i = 0; i < 5; i++)
  {
    tSF.pushStack1(i);
    tSF.display();
  }
  cout << endl;
  
  cout << "Pushing stack 2: " << endl;
  for(int i = 0; i < 5; i++)
  {
    tSF.pushStack2(i);
    tSF.display();
  }
  cout << endl;
  
  if(tSF.isFullStack1())
  {
    cout << "Stack 1 is full!" << endl;
  }
  if(tSF.isFullStack2())
  {
    cout << "Stack 2 is full!" << endl;
  }
  
  //tSF.pushStack1(9);
  //tSF.pushStack2(9);

  cout << "Popping stack 1: ";
  while(!tSF.isEmptyStack1())
  {
    cout << tSF.popStack1();
  }
  cout << endl;
  tSF.display();
  cout << endl;
  
  cout << "Popping stack 2: ";
  while(!tSF.isEmptyStack2())
  {
    cout << tSF.popStack2();
  }
  cout << endl;
  tSF.display();
  cout << endl;
  
  if(tSF.isEmptyStack1())
  {
    cout << "Stack 1 is empty!" << endl;
  }
  
  if(tSF.isEmptyStack2())
  {
    cout << "Stack 2 is empty!" << endl;
  }
  cout << endl;
  
  //TwoStackOptimal Testing below
  cout << "TwoStackOptimal Testing Below:" << endl;
  TwoStackOptimal<int> tso(10);
  
  if(tso.isEmptyStack1())
  {
    cout << "Stack 1 is empty!" << endl;
  }
  if(tso.isEmptyStack2())
  {
    cout << "Stack 2 is empty!" << endl;
  }
  
  cout << "Pushing stack 1: " << endl;
  for(int i = 0; i < 5; i++)
  {
    tso.pushFlexStack1(i);
    tso.display();
  }
  cout << endl;
  cout << "Pushing stack 2: " << endl;
  for(int i = 0; i < 5; i++)
  {
    tso.pushFlexStack2(i);
    tso.display();
  }
  cout << endl;
  
  if(tso.isFullStack1())
  {
    cout << "Stack 1 is full!" << endl;
  }
  if(tso.isFullStack2())
  {
    cout << "Stack 2 is full!" << endl;
  }
  
  cout << "Popping stack 1: ";
  while(!tso.isEmptyStack1())
  {
    cout << tso.popFlexStack1();
  }
  cout << endl;
  tso.display();
  cout << endl;
  cout << "Popping stack 2: ";
  while(!tso.isEmptyStack2())
  {
    cout << tso.popFlexStack2();
  }
  cout << endl;
  tso.display();
  cout << endl;
  
  if(tso.isEmptyStack1())
  {
    cout << "Stack 1 is empty!" << endl;
  }
  if(tso.isEmptyStack2())
  {
    cout << "Stack 2 is empty!" << endl;
  }
  cout << endl;
  
  //Tower of hanoi testing below:
  cout << "Tower of hanoi testing below:" << endl;
  
  stack<int> A;
  
  // A.push(7);
  A.push(6);
  A.push(5);
  A.push(4);
  A.push(3);
  A.push(2);
  A.push(1);
  
  stack<int> B;
  stack<int> C;
  
  showTowerStates(A.size(), A, B, C);
  
  unsigned a = A.size();
  unsigned b = B.size();
  unsigned c = C.size();
  
  cout << "A: " << endl;
  for(unsigned i = 0; i < a; i++)
  {
    cout << A.top() << endl;
    A.pop();
  }
  cout << "B: " << endl;
  for(unsigned i = 0; i < b; i++)
  {
    cout << B.top() << endl;
    B.pop();
  }
  cout << "C: " << endl;
  for(unsigned i = 0; i < c; i++)
  {
    cout << C.top() << endl;
    C.pop();
  }
  
  return 0;
}