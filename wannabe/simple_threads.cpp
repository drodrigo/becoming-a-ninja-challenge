#include <iostream>
#include <thread>

using namespace std;

void print_number(int number){
    cout << number  << "\n";
}

int main(){
    thread t1(print_number, 42);
    thread t2(print_number, 9);
    thread t3(print_number, 40);

    t1.join();
    t3.join();
    t2.join();
}
