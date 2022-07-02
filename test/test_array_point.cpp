#include <iostream>
#include <typeinfo>

class A
{
   public:
A(){
   std::cout << "construc" << std::endl;
}
~A(){
   std::cout << "deconnstruct" << std::endl;
}
};

int main()
{
   float *input_test1 = new float[3];
   float *intput_test2 = new float[3]();
   A *a_test1 = new A[3];
   A *a_test2 = new A[3]();
   A *a_test3[3];
   *intput_test2 = 10.0;
   *(intput_test2+1) = 20,0;
   * (intput_test2 + 2) = 30.0;
   float a = 10.0;
   float *p=&a;
   printf("sizeof(double):%lu sizeof(float):%lu\n",sizeof(double), sizeof(float));
   printf("sizeof(input_test1):%lu sizeof(input_test2[0]):%lu\n", 
        sizeof(input_test1[0]), sizeof(intput_test2[0]));
   printf("sizeof(p):%lu\n", sizeof(p));
   printf("intput_test2[0]:%f  intput_test2[1]:%f intput_test2[2]:%f\n", intput_test2[0], intput_test2[1], intput_test2[2]);
   std::cout << "typeid(a):" << typeid(a).name() << " typeid(p)" << typeid(p).name() << " typeid(input_test1)" 
      << typeid(input_test1).name() << " typeid(input_test1[0])" << typeid(input_test1[0]).name() << 
      " typeid(intput_test2[0])" << typeid(intput_test2[0]).name() << std::endl;

   std::cout << "typeid(A):" << typeid(A).name() << " typeid(a_test1):" 
      << typeid(a_test1).name() << " typeid(a_test2):" << typeid(a_test2).name() << 
      " typeid(a_test1[0]): " << typeid(a_test1[0]).name() 
      << " typeid(a_test2[0]): " << typeid(a_test2[0]).name() << std::endl;
   std::cout << " typeid(a_test3):" << typeid(a_test3).name() << " typeid(a_test3[0]):" << 
      typeid(a_test3[0]).name() << std::endl;
   return 0;
}