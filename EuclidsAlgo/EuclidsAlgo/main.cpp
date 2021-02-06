//
//  main.cpp
//  EuclidsAlgo
//
//  Created by sierra on 06/02/2021.
//  Copyright © 2021 sierra. All rights reserved.
//

#include <iostream>

int gcd(int u, int v) {
    int t;
    while (u > 0)
    {
        if (u < v) //switch their places
        {
            t = u; //store u in t
            u = v; //set u to v
            v = t; //set v to t (previously u)
        }
        u = u % v;
    }
    return v;
}

int main(int argc, const char * argv[]) {
    
    int x, y;
    while (std::cin >> x && std::cin >> y)
        if (x>0 && y>0) std::cout << x << ' ' << y << ' '
            << gcd(x,y) << '\n';
    
    
    //return 0;
}
