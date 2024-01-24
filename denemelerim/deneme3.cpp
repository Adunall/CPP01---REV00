#include <iostream>

class deneme
{   
public:
    int* ptr;
    deneme(int i = 0) {
        std::cout << "base kurucu" << std::endl;
        ptr = new int(i);
    }

    deneme(const deneme& b) {
        std::cout << "kopyalama kurucusu" << std::endl;
        ptr = new int(*b.ptr);
    }
    ~deneme(){
        std::cout << "taban yıkıcı" << std::endl;
        delete ptr;
    }
};

class cocuk : public deneme
{
public:
    int* ptr2;
    cocuk(int i = 0, int j = 0) {
        std::cout << "türetilmiş kurucu" << std::endl;
        ptr = new int(i);
        ptr2 = new int(j);
    }

    cocuk(const cocuk& b) {
        std::cout << "cocuk kopyalama başladı" << std::endl;
        ptr2 = new int(*b.ptr2);
    }
    ~cocuk(){
        std::cout << "türetilmiş sınıf yıkıcı" << std::endl;
        delete ptr2;
    }
};

int main()
{
    //cocuk d;
    //return(0);

    int *p1, *p2;
    {
        cocuk c(100,200);
        p1 = c.ptr;
        p2 = c.ptr2;
        std::cout << c.ptr << " " << c.ptr2 << std::endl;
        std::cout << p1 << " " << p2 << std::endl;
        std::cout << *c.ptr << " " << *c.ptr2 << std::endl;
    }
    std::cout << p1 << " " << p2 << std::endl;
    std::cout << *p1 << " " << *p2 << std::endl;
    return(0);
}