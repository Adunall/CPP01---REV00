#include <iostream>

class kedi{
    public:
       /* virtual */void sesver(){
            std::cout << "miyav" << std::endl;
        }
};

class aslan: public kedi{
    public:
        void sesver(){
            std::cout << "kükreme" << std::endl;
        }
};

int main()
{
    kedi k;
    aslan a;

    k.sesver();
    a.sesver();
    kedi* dizi[2];
    dizi[0] = &k;
    dizi[1] = &a;
    std::cout << std::endl;
    dizi[0]->sesver();
    dizi[1]->sesver();
    return(0);
}
//polymorpism
//one of in inherit class method overriding to main class method. the solution is polymorpism. we are not allowing overriding with virtualization. 
//compiler assigns one ptr with virtualization process. Thanks to this pointer compiler choose which method calls.