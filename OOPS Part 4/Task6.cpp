#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    
    A(int a , int b){
        this->a=a;
        this->b=b;
    }
    void swap(A &ob){
        int temp=ob.a;
        ob.a=a;
        a=temp;
        temp=ob.b;
        ob.b=b;
        b=temp;
    }
    void print(){
        cout<<a<<b<<" ";
    }
};
int main(){
    A obj1(4,5), obj2(2,6);
    obj2.print();
    obj1.swap(obj2);
    obj2.print();
     // o/p is 26 45  due to pass by refrance
    return 0;
}
