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
};

int main()
{
    deneme b(100);
    std::cout << b.ptr << "\t" << *b.ptr << std::endl;
    deneme xb = b;
    std::cout << xb.ptr << "\t" << *xb.ptr << std::endl;

    cocuk c(200, 500);
    std::cout << c.ptr << " " << *c.ptr << std::endl;
    std::cout << c.ptr2 << " " << *c.ptr2 << std::endl;

    cocuk xc;
    xc = c;
    std::cout << xc.ptr2 << " " << *xc.ptr2 << std::endl;
}
