
#include <iostream>

class a {
    public:
        a(){ std::cout << "a sınıfı" << std::endl;}
};
class b : public a{
    public:
        b(){ std::cout << "b sınıfı" << std::endl;}
};
class c : public a{
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


    std::cin.get();
    return(0);
}