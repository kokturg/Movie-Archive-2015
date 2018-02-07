
#include "Movie.hpp"


void Movie:: setdvd_title(string d){ dvd_title= d;}
void Movie:: setgenre(string g){ genre=g;}
void Movie::setprice(double p){price=p;}
void Movie::setstatus(string s){status=s;}
void Movie::setdvd_releasedate(Date d){ dvd_releasedate=d;}
void Movie::setyear(string y){ year=y;};
void Movie::setID(string id){ID=id;}

string Movie:: getdvd_title(){ return dvd_title;}
string Movie:: getgenre(){ return genre;}
double Movie::getprice(){return price;}
string Movie::getstatus(){return status;}
Date Movie::getdvd_releasedate(){return dvd_releasedate;}
string Movie::getyear(){return year;}
string Movie::getID(){return ID;}



bool Movie::operator>=(Movie m)
{

    if(price >= m.price){return true;}
    return false;

}




bool Movie::operator==(Movie m)
{
    
    if(price == m.price){return true;}
    return false;
}



void Movie::printMovie()
{


    
        cout << "Title" << "\t\t" << "Status " << "\t\t" << "Price"
        << "\t\t" << "Year" << "\t\t" << "Genre"   << "\t\t" << "Release Date"   << "\t\t" << "Id"<<endl;
        
            
    cout << dvd_title << "\t\t" << status << "\t\t" << price
   <<"\t\t" << year<< "\t\t" <<genre<< "\t\t" <<(getdvd_releasedate()).getMonth()<<"/"<<(getdvd_releasedate()).getDay()<<"/"<<(getdvd_releasedate()).getYear()<< "\t\t" <<ID<<endl;



}

Movie:: Movie(string ttle,string sts ,string prc,string yr,string gnr,string rls,string id){
 
    
    Date d(rls);
    dvd_releasedate=d;

    dvd_title=ttle;
    status= sts;
    year=year;
    genre=gnr;
    ID=id;


   // CONVERTING STRING TO DOUBLE
//
   string p = prc.substr(1,prc.length());  // $ ve string gelen price ı double a dönüştürüyor

   double temp = ::strtod(p.c_str(), 0);

   price = temp;
}

Movie:: Movie(){}


