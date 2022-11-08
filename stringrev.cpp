#include <iostream> 
using namespace std;
 
int main() {
   string str = "namrA read enod si ksat siht epoh I";
 
   char ch;
   for (int text = 0, lengt = str.length(); text < lengt/2; text++) {
      ch = str[text];
      str[text] = str[lengt-1-text];
      str[lengt-1-text] = ch;
   }
 
   cout << str << endl;
}
