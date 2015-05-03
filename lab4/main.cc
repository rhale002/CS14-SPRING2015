// Name: Robyn Haley
// SID: 861149793

// Date: 5/3/15
// Lab04
#include <iostream>
#include <cstdlib>
#include "lab4.h"

using namespace std;

int main(int argc, char *argv[])
{
    // int k = *argv[1] - '0' - argc + argc;
    int k = atoi(argv[1]) - argc + argc;
    
    print(k);
    
    return 0;
}