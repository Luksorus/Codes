#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string x;
    std::string y;
    cin >>x>>y;
    bool f = x.find(y) !=std::string::npos;
    
    if(f){
        std::cout <<"yes"<<std::endl;
    }
    else{std::cout <<"no"<<std::endl;}
    
}
