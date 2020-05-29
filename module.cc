#include <iostream>
#include <thread>

using namespace std;

void myMethod() {
    cout << "Hello World!" << endl;
}

int main() {
    thread* t1 = new thread(myMethod);
    t1++;
    return 0;
}