//
//  main.cpp
//  EuclidsAlgo
//
//  Created by sierra on 06/02/2021.
//  Copyright © 2021 sierra. All rights reserved.
//

#include <iostream>

struct Fraction {
    
public:
    Fraction()
    {
        int x, y;
        while (std::cin >> x && std::cin >> y)
            if (x>0 && y>0)
            {
                calculateLowestTerms(x, y);
                
                std::cout << numerator << '/' << denominator << std::endl;
            }
    }
        
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
    
    void calculateLowestTerms(int u, int v) {
        numerator = u / gcd(u, v);
        denominator = v / gcd(u, v);
    }
    
    int getNumerator() { return numerator; }
    int getDenominator() { return denominator; }
    
private:
    
    int numerator;
    int denominator;
};

int main(int argc, const char * argv[]) {
    
    git Fraction myFrac;
    //return 0;
}
