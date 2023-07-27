/*continue statement 
C++ continue C++ continue statement is a loop control statement that forces the program control to execute the next iteration of the loop. As a result,
 the code inside the loop following the continue statement will be skipped and the next iteration of the loop will begin.*/
#include<iostream>
using namespace std;
int main () {
   // Local variable declaration:
   int a = 10;

   // do loop execution
   do {
      if( a == 15) {
         // skip the iteration.
         a = a + 1;
         continue;
      }
      cout << "value of a: " << a << endl;
      a = a + 1;
   } 
   while( a < 20 );
 
   return 0;
}