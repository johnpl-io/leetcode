#include <string>
#include <stack>
#include <iostream>
using namespace std;

    bool isValid(string s) {
        stack<char> stack;

        for(const auto &ch : s) {
            if(ch == '(' || ch == '{' || ch == '['  )
                stack.push(ch);
            else if(ch == ')' || ch == '}' || ch == ']'  )
            if(!stack.empty()) {
            if(abs(ch - stack.top()) <= 2) {
           stack.pop();   } 
             else  {
                return false;
             }
            }
            
       
    }
      return stack.empty();
    }

int main() {
    string s = "(])";
  std::cout  << isValid(s);
}
