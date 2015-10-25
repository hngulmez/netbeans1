/* 
 * File:   main.cpp
 * Author: nuri
 *
 * Created on October 25, 2015, 2:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <memory>
using namespace std;

/*
 * 
 */


struct S {
    S (){cout << "ctor";}
    S (const S& rhs){cout << "copy ctor";}
    
    S& operator=(const S& rhs){return *this;}

private:
    void *ptr = nullptr;
    string str = "";
};


int main(int argc, char** argv) {

    cout << "new line" <<endl;
    S my;
    S my2(my);
    
    return 0;
}

