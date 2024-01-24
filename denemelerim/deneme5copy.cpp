#include <iostream>

class yazıcı
{   protected:
        std::string marka;
    public:
        
        yazıcı(std::string marka): marka(marka){
            std::cout << "yazıcı sınıfı" << std::endl;
        }
};

class tarayıcı{
    protected:
    std::string  marka;
    public:
        
        tarayıcı(std::string marka):marka(marka){
            std::cout << "tarayıcı  sınıfı" << std::endl;
        }
    }
};

class tarayıcılıyazıcı:public yazıcı, public tarayıcı{
        public:
            tarayıcılıyazıcı(std::string m1, std::string m2): yazıcı(m1), tarayıcı(m2){
                std::cout << "tarayıcılı yazıcı  sınıfı" << std::endl;
                std::cout << yazıcı::marka << std::endl;
                std::cout << tarayıcı::marka << std::endl;
            }

};

int main()
{
    /*yazıcı y;
    tarayıcı t;
    std::cout << std::endl;*/
    tarayıcılıyazıcı ty("hp", "asus");

    /*std::cout << ty.yazıcı::marka << std::endl;*/
}