#include <iostream>
using namespace std;

void f(){
    cout << "hi" <<endl;
    f();
}

int count (int x){
    if(x ==0){
        return 0;
    }
         
        return 1 + count(x - 1);
    }

    int factorial(int x){
        if(x == 1){
            return 1;
        }

        return x * factorial(x - 1);
    }

int main(){

    cout << factorial(5) <<endl;

    return 0;
}