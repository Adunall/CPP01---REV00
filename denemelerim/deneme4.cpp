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
    deneme& operator=(const deneme& b){
        std::cout << "base operator = " << std::endl ;
        delete ptr;
        ptr = new int(*b.ptr);
        return *this;
    }
   /*~deneme(){
        std::cout << "taban yıkıcı" << std::endl;
        delete ptr;
    }*/
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
    cocuk& operator=(const cocuk& c){
        deneme::operator=(c);
        std::cout << "türemiş operator= " << std::endl;
        delete ptr2;
        ptr2 = new int(*c.ptr2);
        return *this;
    }
   /* ~cocuk(){
        std::cout << "türetilmiş sınıf yıkıcı" << std::endl;
        delete ptr2;
    }*/
};

int main()
{
    cocuk d(100,200);
    std::cout << "Main 1: ptr " << d.ptr << " " << d.ptr2 << std::endl;
    cocuk xd(300,400);
    std::cout << "Main 2: ptr " << xd.ptr << " " << xd.ptr2 << std::endl;
    xd = d;
    std::cout << "Main 3: ptr " << xd.ptr << " " << xd.ptr2 << std::endl;
}