#include <iostream>

class sekil{
    protected:
        double alan,cevre;
    public:
        virtual void senNesin() = 0;
        virtual void alanhesapla() = 0;
        virtual void cevrehesapla() = 0; //pure method
        double getAlan() const { return alan;}
        double getCevre() const { return cevre;
        }

};

class dikdortgen : public sekil{
    double yukseklik, genislik;
    public:
        dikdortgen(double yukseklik, double genislik): yukseklik(yukseklik), genislik(genislik){ }
        void senNesin(){
            std::cout << "ben dikdötgenim" << std::endl;
        }
        void alanhesapla(){
            alan = yukseklik * genislik;
        }
        void cevrehesapla(){
            cevre = 2 * (yukseklik + genislik);
        }
};

class daire : public sekil{
    double r;
    public:
        daire(double r): r(r){

        }
       void senNesin(){
            std::cout << "ben daireyim" << std::endl;
        }
        void alanhesapla(){
            alan = r * r *3.141592;
        }
        void cevrehesapla(){
            cevre = 2 * 3.1415 * r;
            }
       
};
class kare:public dikdortgen{
    public:
        kare(double x) : dikdortgen(x,x){

        }
        /*void senNesin(){
            std::cout << "ben kareyim" << std::endl;
        }*/
};

//abstract classes
//türemiş sınıfta metodu aşırı yüklemediğimiz zaman taban sınıfı baz alıyordu fakat soyut sınıfta baz alamıyor.
//u cant produce any objects by abstract class.
// no need anymore to define sennesin() method in "kare" class. cause we didnt take inherit from abstract classes.
//this example provides to understand unimplemented and implemented class seeing.

int main()
{
    sekil* dizi[3];

     dizi[0] = new dikdortgen(4,5);
     dizi[1] = new daire(20);
     dizi[2] = new kare(5);

    for(int i = 0;i<3;i++)
    {
        dizi[i]->alanhesapla();
        dizi[i]->cevrehesapla();
        std::cout << dizi[i]->getAlan()<< " " << dizi[i]->getCevre() << std::endl;
        //dizi[i]->senNesin();
        
    }
    return(0);

}