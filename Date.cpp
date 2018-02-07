#include "Date.hpp"
#include <iostream>
#include <regex>
#include <string>


void Date::setDay(int d){day = d;}

int Date:: getDay(){return day;}

void Date::setMonth(int m){ month = m;}

int Date::getMonth(){return month;}

void Date::setYear(int y){ year = y;}

int Date::getYear(){return year;}

Date::Date(){}

Date::Date(string a){
    
    regex dateRegex("(\\d\\d?)/(\\d\\d?)/(\\d{4})");
    smatch match;
    
    if (regex_match(a, match, dateRegex)) {
        month = stoi(match.str(1));
        day= stoi( match.str(2) );
        setYear(stoi(match.str(3))) ;
    }
    
    else {
        // error
    }
    
    
}

