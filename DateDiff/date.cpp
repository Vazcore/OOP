#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "date.hpp"

using namespace std;

const int dayRange[] =  {1, 31};
const int monthRange[] =  {1, 12};
const int yearRange[] =  {1900, 2014};

// Construct

CDateDiff::CDateDiff() {
    m_day = 0;
    m_month = 0;
    m_year = 0;
}

CDateDiff::~CDateDiff() {
    //
    m_day = 0;
    m_month = 0;
    m_year = 0;
}

int CDateDiff::setD(int day){
    if(day >= dayRange[0] && day <= dayRange[1]){
        m_day = day;
        return 1;
    }else{
        return 0;
    }    
}

int CDateDiff::setM(int month){
    if(month >= monthRange[0] && month <= monthRange[1]){
        m_month = month;
        return 1;
    }else{
        return 0;
    }   
}

int CDateDiff::setY(int year){
    if(year >= yearRange[0] && year <= yearRange[1]){
        m_year = year;
        return 1;
    }else{
        return 0;    
    }
}

// Set full date
int CDateDiff::setDate(int d, int m, int y){
    if((CDateDiff::setD(d) && CDateDiff::setM(m)) && CDateDiff::setY(y)){
        // Show full date
        cout << "Установлена дата - " << CDateDiff::showFullDate() << endl;        
    }else{
        cout << "Date is incorrect!" << endl;
    }
}

char* CDateDiff::showFullDate(){
    char *strDate;    
    sprintf(strDate, "%02d/%02d/%02d", m_day,m_month,m_year);
    return strDate;
}

int CDateDiff::setDate(char* pch){
    int d,m,y;
    sscanf(pch, "%d/%d/%d", &d,&m,&y);
    return CDateDiff::setDate(d,m,y);
}

int CDateDiff::diff(CDateDiff date){
    int diff = 0;
    diff = (CDateDiff::totalDays() - date.totalDays());
    return diff;
}

int CDateDiff::totalDays(){
    int days = 0;
    days = m_year*365 + m_month*30 + m_day;
    return days;
}
