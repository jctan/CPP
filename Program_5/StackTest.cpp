#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

bool asserts(bool test, string message){
        if (!test)
                cout<<"Test failed: "<<message;
        return test;
}

bool createEmptyStack() {
        Stack stack;
        return asserts(stack.isEmpty(), "A new stack should be empty");
}

bool notEmpty(){
        Stack stack;
        stack.push(10);
        return asserts(!stack.isEmpty(), "A stack with one element should not be empty");
}

bool pushPop() {
        Stack stack;
        stack.push(5);
        return asserts(5 == stack.pop(), "The value pushed should equal the pop value");
}

bool pushManyElements(){
        Stack stack;
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        stack.push(6);
        return asserts(6==stack.pop() && 5 == stack.pop() && 4 == stack.pop() && 3 == stack.pop() && 2 == stack.pop() && 1 == stack.pop() && stack.isEmpty(), "Poppig the stack should return the elements in reverse order");
}

int main() {
        bool ok = createEmptyStack();
        ok = ok && pushPop();
        ok = ok && pushManyElements();
        ok = ok && notEmpty();

        if (ok) cout<<"You are done! All tests passed!"<<endl;
        else cout<<"You have errors."<<endl;
        
        system("pause");
        return 0;
}
