/* 
 * File:   date.hpp
 * Author: alex
 *
 * Created on 15 Март 2014 г., 20:35
 */

#ifndef DATE_HPP
#define	DATE_HPP

class CDateDiff{
private:
    int m_year, m_month, m_day;  
public:
    CDateDiff(); // Construct
    ~CDateDiff(); // Destruct
    
    int setD(int);
    int setM(int);
    int setY(int);
    int setDate(int, int, int);
    int setDate(char *pch);
    char* showFullDate();
    int diff(CDateDiff);
    int totalDays();
    
    
};

#endif	/* DATE_HPP */

