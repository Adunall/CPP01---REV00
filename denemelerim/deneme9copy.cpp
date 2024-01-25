#include <iostream>
//shallow copy;
class demo{
    int data1, data2;
    public:
        void display();
        void setvalues(int i):
        int getvalues(){
            return(this->data1);
        }

};

int main()
{
    demo ob1;
    ob1.getvalues(10,20)
    demo ob2;
    //we created an ob2 as well as ob1 are copied in ob2. 
    ob2 = ob1;
    //assingment operator is doing the copy
    demo obj3 = ob1;
    //in the up statement, copy constructor copying data.

    // so we can use any of these methods.

    return(0);
}
