
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<vector>
#include "Movie.hpp"
#include <string>
using namespace std;
#include <string>
#include <vector>
#include <functional>
#include <iostream>

using namespace std;

void split(const string& s, char c,vector<string>& v) {
    string::size_type i = 0;
    string::size_type j = s.find(c);
    
    while (j != string::npos) {
        v.push_back(s.substr(i, j-i));
        i = ++j;
        j = s.find(c, j);
        
        if (j == string::npos)
            v.push_back(s.substr(i, s.length()));
    }
}




int main() {
    

    
   
 Movie moviearray[5500];
    
    int a =0 ;
    
    
    ifstream filein("DVD_list.txt");
    
    
    for (string line; getline(filein, line); )
    {
        
        
        vector<string> v;
        
        
        split(line, '\t', v);
        
      //  for (int i = 0; i < v.size(); ++i) {
        //    cout << v[i] << '\n';}
        
        moviearray[a]= Movie(v[0], v[1],v[2],v[3],v[4],v[5],v[6]);
        a++;
    }
    
    
    
   
    
    
    
    string press;
    
    
   do
   {
    cout<< "\n(1) Search and display a movie by\n";
  
  //  cout<<"       (1) DVD_Title \n";
// cout<<"        (2) ID \n";
   cout<<"(2) Compare two movies based on their price information\n";
    cout<<"(3) List movies based on following genres \n";
  //  cout<<"        (1) Suspense\n";
  //  cout<<"        (2) Foreign\n";
  //  cout<<"        (3) Comedy\n";
  //  cout<<"        (4) Western\n";
   // cout<<"        (5) Music\n";
   // cout<<"        (6) Drama\n";
    
    cout<<"(4) Display Statistics\n";
    //cout<<"        (1) Display number of each genres\n";
    //cout<<"        (2) Display average price\n";
   // cout<<"        (3) Display the number of movies whose price is greater than an input\n";
   // cout<<"        (4) Display average price of 'Discontinued' movies\n";
    //cout<<"        (5) Display average price of 'Out' movies\n";
   // cout<<"        (6) Display average price of 'Cancelled' movies\n";
    cout<<"(5) Display movies after an input date\n";
    cout<<"(0) Exit\n";
    

    cin >> press;
    
    if (press == "1")
    
{
        cout<<"       (1) DVD_Title \n";
        cout<<"       (2) ID \n";
        
        string pressID;
        string pressTitle;
    
    
    
      int counter=0;
        cin>>press;
        
        
        
        
        
            if(press == "1")
            {
        
           
                
                
                cout<< "Enter DVD title  :  ";
                cin>>pressTitle;
                
            
          
                for (int i = 0; i <5194; i++)
                {
                string dvdtitle= moviearray[i].getdvd_title();
                size_t pos;
               
                    if((pos = dvdtitle.find(pressTitle)) != string::npos)
               
                    {
                        counter++;
                        
                        cout<<'\n'<< dvdtitle<< '\n' <<endl;   }
                   
                }
                
                if(counter == 0){cout<< '\n'<<"DVD IS NOT FOUND  \n"<<endl;}
                
                
            
                
            }
                
               
                
            else if (press == "2")
                {
                   
                    
                    cout<< "Enter DVD ID  :  ";
                    cin>>pressID;
                    
                    
             
                    for (int i = 0; i <5194; i++)
                 
                    {
                        string dvdID= moviearray[i].getID();
                        size_t pos;
                      
                        if((pos = dvdID.find(pressID)) != string::npos)
                        {
                            
                            counter++;
                            
                            cout<< '\n'<< dvdID << moviearray[i].getdvd_title()<<'\n'<<endl;   }
  
                    }
                   
                    
                    
                    
                    if(counter == 0){cout<< '\n'<<"DVD IS NOT FOUND  \n"<<endl;}

                }
         
            else { cout<< "INVALID PRESS, Start again....        \n"; }
        
        
        
}
        
    
       
    else if (press=="2")
{
        string id1;
        string id2;
    
    Movie m1;
    Movie m2;
    bool isFound2 = false;
       bool isFound = false;
        cout<<"Enter the ID of First movie. \n";
        cin>>id1;
        
    
    
    if(isFound==false)
    {
        for (int i = 0; i <5194; i++)
            
        {
            
            string dvdID= moviearray[i].getID();
            size_t pos;
            
            if((pos = dvdID.find(id1)) != string::npos)
            {  m1=moviearray[i];
           
                isFound=true;
            }

        }
        
    if(isFound== false)
          {cout<<"\nINVALID ID.Try again ...\n";
            }
    
        
        
        
        else{
        cout<<"Enter the ID of Second movie. \n";
        cin>>id2;
        
        if(isFound2==false)
        {
            for (int i = 0; i <5194; i++)
            
            {
                
                string dvdID= moviearray[i].getID();
                size_t pos;
                
                if((pos = dvdID.find(id2)) != string::npos)
                {  m2=moviearray[i];
                    
                    isFound2=true;
                }
            }
            
            if(isFound2== false)
            {cout<<"\nINVALID ID.Try again ...\n"<<endl;
                
            }
        }
        }
    }
    
    
    
    

    
   

    
    if (isFound==true && isFound2==true)
    
    
    {
  
    
    if((m1==m2)){ cout<< m1.getdvd_title()<< " has same price with "<<m2.getdvd_title()<<endl; }
    
   else if((m1>=m2)){ cout<< m1.getdvd_title()<< " is more expensive than "<<m2.getdvd_title()<<endl; }
    else{ cout<< m1.getdvd_title()<< " is more cheaper than "<<m2.getdvd_title()<<endl; }
}
       
}
       
else if (press=="3")
{
        cout<<"\n(1) Suspense (2) Foreign (3) Comedy (4) Western (5) Music (6) Drama\n";
    
        cout<<"Choose an Genre to display Movies\n "<< endl;
        
        cin>>press;
        
        
        
    
    if(press=="1")
        {
            
            for (int i = 0; i <5194; i++)
                
            {
                
                string dvdGENRE= moviearray[i].getgenre();
                size_t pos;
                
                if((pos = dvdGENRE.find("Suspense")) != string::npos)
                {  cout<< dvdGENRE<< "        "<<moviearray[i].getdvd_title()<<'\n';}
                
        
                else continue;
        
              }
        }
    
    
    
    else if(press=="2")
    {  for (int i = 0; i <5194; i++)
                
            {
                
                string dvdGENRE= moviearray[i].getgenre();
                size_t pos;
                
                if((pos = dvdGENRE.find("Foreign")) != string::npos)
                {  cout<< dvdGENRE<< "        "<<moviearray[i].getdvd_title()<<'\n';}
                
                
                else continue;
                
            }
    }
    
    
   else if(press=="3")
    {
        for (int i = 0; i <5194; i++)
                
        
    
        {    string dvdGENRE= moviearray[i].getgenre();
                size_t pos;
                
                if((pos = dvdGENRE.find("Comedy")) != string::npos)
                {  cout<< dvdGENRE<< "        "<<moviearray[i].getdvd_title()<<'\n';}
                
                
                else continue;
        }
  
    }
    
  else if(press=="4")
   {
       for (int i = 0; i <5194; i++)
                
            {
                
                string dvdGENRE= moviearray[i].getgenre();
                size_t pos;
                
                if((pos = dvdGENRE.find("Western")) != string::npos)
                {  cout<< dvdGENRE<< "        "<<moviearray[i].getdvd_title()<<'\n';}
                
                
                else continue;
                
            }
   }
    
   else if(press=="5")
    {
        for (int i = 0; i <5194; i++)
                
            {
                
                string dvdGENRE= moviearray[i].getgenre();
                size_t pos;
                
                if((pos = dvdGENRE.find("Music")) != string::npos)
                {  cout<< dvdGENRE<< "        "<<moviearray[i].getdvd_title()<<'\n';}
                
                
                else continue;
                
            
            }
        
    }
    
    else if(press=="6")
    {
        for (int i = 0; i <5194; i++)
                
            {
                
                string dvdGENRE= moviearray[i].getgenre();
                size_t pos;
                
                if((pos = dvdGENRE.find("Drama")) != string::npos)
                {  cout<< dvdGENRE<< "        "<<moviearray[i].getdvd_title()<<'\n';}
                
                
                else continue;
                
            }
        
    }
      
            
    
     else { cout<< "\n INVALID PRESS, Start again....        \n"; }
    
    


}
    
    
    
    
else if(press=="4")
{
    
    cout<<"(4) Display Statistics\n";
    cout<<"        (1) Display number of each genres\n";
    cout<<"        (2) Display average price\n";
    cout<<"        (3) Display the number of movies whose price is greater than an input\n";
    cout<<"        (4) Display average price of 'Discontinued' movies\n";
    cout<<"        (5) Display average price of 'Out' movies\n";
    cout<<"        (6) Display average price of 'Cancelled' movies\n";

    cin>>press;
    
    
    
    
   
    
    
    if (press=="1")
    {
        
        
    }
    else if(press=="2")
    {
        double price ;
        
        for (int i = 0; i <5194; i++)
            
        {
            price += moviearray[i].getprice();
            
            
        }
        
        cout<< '\n'<<"Average price  of All Movies: "<< price/5194<<endl;

    }
    else if(press=="3")
    {
        string id1;
        cout<<"Enter  the ID of movie  "<<endl;
        cin>>id1;
        Movie m1;
    
        bool isFound=false;
        
       
        for (int i = 0; i <5194; i++)
        
        {
            
            string dvdID= moviearray[i].getID();
            size_t pos;
            
            if((pos = dvdID.find(id1)) != string::npos)
            {
                m1=moviearray[i];
        
                isFound=true;
                
                for (int i = 0; i <5194; i++)
                
                {
                    if(moviearray[i].getprice() >= m1.getprice())
                    {   cout<<"\n $"<<moviearray[i].getprice()<<"   -  "<<moviearray[i].getdvd_title()<<'\n'<<endl;}
                    
                }
                
            }
            
            
        }

        if(isFound==false)
        {
            
       cout<< "INVALID ID, Try again....        \n"; }

        
        
        
    }
    else if(press=="4")
    {
        
        double price ;
        
        for (int i = 0; i <5194; i++)
            
        {
            if(moviearray[i].getstatus() == "Discontinued")
            {   price += moviearray[i].getprice();}
            
        }
        
        cout<< '\n'<<"Average price  of Discontinued: "<< price/a<<endl;

    }
    else if(press=="5")
    {
        double price ;
        
        for (int i = 0; i <5194; i++)
            
        {
            if(moviearray[i].getstatus() == "Out")
            {   price += moviearray[i].getprice();}
            
        }
        
        cout<< '\n'<<"Average price  of Out: "<< price/a<<endl;
    }
    else if(press=="6")
    {
        double price ;
        
        for (int i = 0; i <5194; i++)
            
        {
            if(moviearray[i].getstatus() == "Cancelled")
            {   price += moviearray[i].getprice();}
            
        }
        
        cout<< '\n'<<"Average price  of Cancelled: "<< price/a<<endl;
    }
    else { cout<< "INVALID PRESS, Try again....        \n"; }
    
    
    
}
    
    
  else if (press=="5")

{
    
        string date;
        cout<<"Enter a date with M/D/Y format to search DVD"<<endl;
        cin>>date;
    
        Date d(date);
    
    
        for (int i = 0; i <5194; i++)
    
        {
    
    
               if((moviearray[i].getdvd_releasedate()).getYear() >= d.getYear())
               {
                   if((moviearray[i].getdvd_releasedate()).getMonth() >= d.getMonth())
    
    
                   {    if((moviearray[i].getdvd_releasedate()).getDay() >= d.getDay())
    
    
    
    
    
                   {  cout<<(moviearray[i].getdvd_releasedate()).getMonth()<< "/"<<(moviearray[i].getdvd_releasedate()).getDay()<<" /";
                      cout<<(moviearray[i].getdvd_releasedate()).getYear()<<"            "<< moviearray[i].getdvd_title()<< endl;
                   }
               }
                     
        }
    
        
            
            
        }
    
    
    
}
       
       
       
  else { cout<< "INVALID PRESS, Try again....        \n";   continue; }
  
 
    
}
  while(press!="0");//
    


    system("pause");
    
  return 0;
   
    }

    

  
    

