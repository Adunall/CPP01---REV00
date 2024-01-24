#include <iostream>

class deneme
{   private:
        int *ptr;
    public:
        
        deneme(int i = 0){
            ptr = new int(i);
        }
        int getptr(){
            return *ptr;
        }
};

class cocuk: public deneme{
    public:
        int *ptr2;
        cocuk(int i = 0, int j = 0):deneme(i){
            ptr2 = new int(j);
        }
};

int main()
{
    deneme n(100);
    cocuk s(500, 200);
    std::cout << n.getptr() << std::endl;
    std::cout << sizeof(n) << std::endl;
    std::cout << s.getptr() << " " << *s.ptr2 << " " << std::endl;
}