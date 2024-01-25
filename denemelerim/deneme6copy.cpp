
#include <iostream>
//I indicated diamond problem in there.
//The solution is prevent to duplicate a class inheritance. b & c class are inheratance created from "a" class and first point is this.
//d class wants to repeat inherit to "a". And this this wrong status. For prevent we can make some classes inheritance "virtual".
class a {
    public:
    int x;
        a(int x = 0): x(x){ std::cout << "a sınıfı" << std::endl;}
};
class b : virtual public a{
    public:
        b(){ std::cout << "b sınıfı" << std::endl;}
};
class c : virtual public a{
    public:
        c(){ std::cout << "c sınıfı" << std::endl;}
};
class d: public b, public c {
    public:
        d(){ std::cout << "d sınıfı" << std::endl;}
};

int main()
{
    a a;
    std::cout << std::endl;
    b b;
    std::cout << std::endl;
    c c;
    std::cout << std::endl;
    d d;
    std::cout << std::endl;
    std::cout << d.x;
    std::cout << std::endl;
    d.x = 25;
    std::cout << d.x << std::endl;



    std::cin.get();
    return(0);
}
