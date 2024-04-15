#include <iostream>
using namespace std;
class B;
class A{
private:
    int numA;
public:
    A(int num):numA(num){}
    friend int sum(A a, B b);
};
class B{
private:
    int numB;
public:
    B(int num):numB(num){}
    friend int sum(A a, B b);
};
int sum(A a, B b){
    return a.numA+b.numB;
}
int main(){
    A objectA(10);
    B objectB(20);
    int total=sum(objectA, objectB);
    cout<<"Sum of private data: "<<total<<endl;
	return 0;
}
