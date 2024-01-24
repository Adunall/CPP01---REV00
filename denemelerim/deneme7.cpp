#include <iostream>

class sekil{
    public:
        virtual void senNesin(){
            std::cout << "ben şekilim" << std::endl;
        }

};

class dikdortgen : public sekil{
    public:
        void senNesin(){
            std::cout << "ben dikdötgenim" << std::endl;
        }
};

class daire : public sekil{
    public:
       /*void senNesin()*/{
            std::cout << "ben daireyim" << std::endl;
        }
       
};


int main()
{
    sekil* dizi[3];

    dizi[0] = new sekil();
     dizi[1] = new dikdortgen();
     dizi[2] = new daire();
    for(int i = 0;i<3;i++)
    {
        dizi[i]->senNesin();
    }
    return(0);

}