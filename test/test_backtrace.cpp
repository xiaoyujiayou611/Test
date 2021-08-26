#include<execinfo.h>

#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>
#include<iostream>

void myfunc3()

{

   int j, nptrs;

   #define SIZE 100

   void *buffer[1000];

   char **strings;
 
   nptrs = backtrace(buffer, 1000);
   strings = backtrace_symbols(buffer, nptrs);

   if (strings == NULL) {

       perror("backtrace_symbols");

       exit(EXIT_FAILURE);

   }

   for (j = 0; j < nptrs; j++) {

       printf("%s\n", strings[j]);
   }

   free(strings);
   
   int c = 30;
   int b = 40;
   int d = c*c + b*b;
   std::cout << "d:" << d << std::endl;
   std::cout << "func3" << std::endl;

}


void myfunc2(void)

{
   std::cout << "my func2" << std::endl;
   myfunc3();

}

 

int main(int argc,char *argv[])

{
    myfunc2();

}
