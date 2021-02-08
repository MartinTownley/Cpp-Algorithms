//
//  main.cpp
//  Array
//
//  Created by sierra on 08/02/2021.
//  Copyright © 2021 sierra. All rights reserved.
//

#include <iostream>

const int N = 1000;

int main(int argc, const char * argv[]) {
    
    //Print out all prime numbers btween 0 and 1000.
    
    int i, j, a[N+1]; //create ints i, j, and array of ints with 1001 elements.
    for (a[1] = 0, i = 2; i <= N; i++)
    {
        a[i] = 1;
    }
    for (i = 2; i <= N/2; i++)
    {
        for (j = 2; j <= N/i; j++)
        {
            a[i*j] = 0;
        }
    }
    for (i = 1; i <= N; i++)
    {
        if (a[i]) {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }
    
    
}
