#include <iostream> 
#include <thread>

using namespace std;

void func() { 
    cout << "entered thread " << this_thread::get_id() << endl; 
    this_thread::sleep_for(5s); 
    cout << "leaving thread " << this_thread::get_id() << endl;
}

int main() { 
    thread t1(func); 
    thread t2(func); 
    thread t3(func);
    
    t1.join(); 
    t2.join(); 
    t3.join();

    return 0; 
}