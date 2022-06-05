#include <iostream> 
#include <thread> 
#include <mutex>

using namespace std; 

mutex g_lock;

void func() { 
    g_lock.lock();

    cout << "entered thread " << this_thread::get_id() << endl; 
    this_thread::sleep_for(5s); 
    cout << "leaving thread " << this_thread::get_id() << endl;
    g_lock.unlock(); 
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