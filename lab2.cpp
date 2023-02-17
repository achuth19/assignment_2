#include<iostream>
using namespace std;
#include<time.h>
#include<chrono>
int fibbonaci(int n){
    
    if(n==1||n==2){
        return 1;
    }
    else{
        return fibbonaci(n-1)+fibbonaci(n-2);
    }
    
}
int main(){
    auto start = chrono::steady_clock::now();
    int n;
    cin>>n;
    int x=fibbonaci(n);
    cout<<x<<endl;
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << std::chrono::duration_cast<std::chrono::milliseconds>(diff).count() << "ms" << std::endl;

}
