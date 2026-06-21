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

int main(){

    cout << count(10) <<endl;

    return 0;
}