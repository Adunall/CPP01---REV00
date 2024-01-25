#include <iostream>
//deep copy

class demo{
    int data1, data2, *p;
    public:
        demo(){p = new int;}
        demo(demo &d){data1 = d.data1;
        data2 = d.data2;
        p = new int(*d.p);
        *p = 50;
        } //demo &d referring to existing object
        void display();
        void getvalues(int a, int b, int c){
           data1 = a;
        data2 = b;
        *p = c;
        }
        void showdata(){
            std::cout << " data 1 = " << data1 << " " << data2 << " " <<  *p << std::endl;
        }
         //WE ARE USİNG GETVALUES function to assing values to variable.

};

int main()
{ //
    demo ob1;
    ob1.getvalues(10,20,30);
    ob1.showdata();
    //assingment operator is doing the copy
    demo obj3 = ob1;
    obj3.showdata();

    //if we are created copy object, copy object ptr showns same address(first created object). Also we need to create copy construrctor manually
    //this is called deep copy.
    //in the up statement, copy constructor copying data.

    // so we can use any of these methods.

    return(0);
}
