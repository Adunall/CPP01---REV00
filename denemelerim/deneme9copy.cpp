#include <iostream>
//shallow copy;
class demo{
    int data1, data2;
    public:
        void display();
        void getvalues(int a, int b){
            data1 = a;
            data2 = b;
        }
        void showdata(){
            std::cout << "data1=   " << data1 << " " <<  "data2 =   " << data2 << std::endl;
        }

};

int main()
{
    demo ob1;
    ob1.getvalues(10,20);
    ob1.showdata();
    demo ob2;
    //we created an ob2 as well as ob1 are copied in ob2. 
    ob2 = ob1;
    ob2.showdata();
    //assingment operator is doing the copy
    demo obj3 = ob1;
    obj3.showdata();
    //in the up statement, copy constructor copying data.

    // so we can use any of these methods.

    return(0);
}
