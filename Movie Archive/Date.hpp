using namespace std;
#include <string>


class Date{
public:
    Date();
    Date(string a);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay();
    int getMonth();
    int getYear();
    
    private :
    int day,month,year;
};

