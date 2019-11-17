#include <iostream>
 
int main() {
 std::cout << "Hello World!\n";
 
 int x =50, y = 60, z =70;
 int *ptr = nullptr;
 
 std::cout << x << " " << y << " " << z << std::endl;
 
 ptr = &x;
 *ptr *= 10;
 ptr = &y;
 *ptr *= 5;
 ptr = &z;
 *ptr *=2;
std::cout << x << " " << y << " " << z << std::endl;
}


/* outputs
Hello World!
50 60 70
500 300 140
*/
