//aggregation -> one class defines another class as any entity reference

#include <iostream>  
using namespace std;  
class Country {  
    public:  
     string name;    
    Country(string name)    
    {    
        this->name = name;       
    }    
};  
class Flower    
    {    
        private:  
        Country* country;  //Employee HAS-A Address   
        public:      
        string name;    
        Flower(string name, Country* country)    
       {       
           this->name = name;    
           this->country = country;    
       }    
     void display()    
       {    
           cout<<name<< "\n"<<     
             country->name<< " "<<endl;    
       }    
   };   
int main(void) {  
    Country india = Country("India");    
    Flower lotus = Flower("Lotus",&india);    
            lotus.display();   
   return 0;  
}  
