//23070123007 Aditya Basak
//Aim: To implement the constructor overloading in the program.
#include <iostream>
using namespace std;
class Cal{
    public:
    int mul(int a,int b)
    {
        return a*b;
    }
    double mul(int a,double b,double c)
    {
        return a*b*c;
    }
    double sum(double d , double f ){
        return d+f;
       
    }
   
};
int main(){
    Cal c;
    cout<<c.mul(10,20)<<endl;
    cout<<c.mul(10,34.5f,23.6f)<<endl;
    cout<<c.sum(10.8,20.34)<<endl;
    return 0;
}
//Output
/*200
8142
31.14*/