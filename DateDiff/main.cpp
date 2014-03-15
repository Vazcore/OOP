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
int main() {    
    CDateDiff date1;
    CDateDiff date2;
    
    date1.setDate("12/9/2012");
    date2.setDate(12,10,2012);
    
    cout << "Между датами прошло " << date1.totalDays() << date2.totalDays() << " дней" << endl;
    return 0;
    
}

////