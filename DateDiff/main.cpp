/* 
 * File:   main.cpp
 * Author: alex
 *
 * Created on 15 Март 2014 г., 20:32
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "date.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int day;

    CDateDiff date1;
    day = date1.getD();
    cout << day << endl;
    return 0;
    
}

