#include <iostream>

class sekil{
    public:
        virtual void senNesin() = 0;

};

class dikdortgen : public sekil{
    public:
        void senNesin(){
            std::cout << "ben dikdötgenim" << std::endl;
        }
};

class daire : public sekil{
    public:
       void senNesin(){
            std::cout << "ben daireyim" << std::endl;
        }
       
};

//abstract classes
//türemiş sınıfta metodu aşırı yüklemediğimiz zaman taban sınıfı baz alıyordu fakat soyut sınıfta baz alamıyor.
//u cant produce any objects by abstract class.

int main()
{
    sekil* dizi[2];

     dizi[0] = new dikdortgen();
     dizi[1] = new daire();
    for(int i = 0;i<2;i++)
    {
        dizi[i]->senNesin();
    }
    return(0);

}