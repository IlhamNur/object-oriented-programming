#include <iostream>
using namespace std;

template <class FUNC> 
void show(FUNC par){
cout << "isi parameter : "<< par <<endl;
} 

int main(){
int x = 234; 
float y = 34.56f; 
double d = 3.444456; 
char ch = 'P';
string s = "Template"; 
show(x); 
show(y); 
show(d); 
show(ch); 
show(s); 
return 0;
}

