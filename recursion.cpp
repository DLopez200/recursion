#include <iostream>
#include <vector>
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

    bool search_helper(const vector<int> v, int target, int index){
        cout<< "We are searching "<<endl;
        if(index == v.size()){
            return false;
        }
        else if(v[index] == target){
            return true;
        }
        else{
            return search_helper(v, target, index + 1);
        }

    }

    bool search(const vector<int>& v, int target){ //start from 0 search//
        return search_helper(v, target, 0);
    }

    /*bool search(const vector<int> v, int target, int index){// specific search variable is the index

    }*/


int main(){
    vector <int> v = {1,2,3,4,5,6,7,8,9,10};
    cout << search(v, 5) <<endl;


    cout << factorial(5) <<endl;

    return 0;
}