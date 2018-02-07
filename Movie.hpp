#include<iostream>
#include "Date.hpp"


using namespace std;
class Movie{
public:
  
    bool operator>=(Movie);
    bool operator==(Movie);
    void printMovie();
    
    
    
    Movie();
    Movie(string,string,string,string,string,string,string);

    
    void setdvd_title(string);
    void setstatus(string);
    void setprice(double);
    void setyear(string);
    void setgenre(string);
    void setdvd_releasedate(Date);
    void setID(string);
    
    
    
    string getdvd_title();
    string getstatus();
    double getprice();
    string getyear();
    string getgenre();
    Date getdvd_releasedate();
    string getID();
    
private:
    string dvd_title;
    string status;
    double price;
    string year;
    string genre;
    Date dvd_releasedate;
    string ID;
    
    
    
    
    
};


