#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int i){
    if(i == 0){
        return i;
    }else if(i == 1){
        return i;
    }else{
        return fibonacci(i-1)+fibonacci(i-2);
    }
}
