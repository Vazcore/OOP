#include <stdio.h>
#include <iostream>
#include "date.hpp"

// Construct

CDateDiff::CDateDiff() {
    m_day = 0;
    m_month = 0;
    m_year = 0;
}

CDateDiff::~CDateDiff() {
    //
}

int CDateDiff::getD(){
    return m_day;
}


