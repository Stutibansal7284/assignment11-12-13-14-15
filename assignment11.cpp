#include <iostream>
using namespace std;
class matrix {
private:
    int num[3][3];
public:
    matrix(int a=0, int b=0, int c=0, int d=0, int e=0, int f=0, int g=0, int h=0, int i=0){
        num[0][0]=a;
		num[0][1]=b;
		num[0][2]=c;
        num[1][0]=d;
		num[1][1]=e;
		num[1][2]=f;
        num[2][0]=g;
		num[2][1]=h;
		num[2][2]=i;
    }
    matrix operator+(matrix m){
        matrix add;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                add.num[i][j]=num[i][j]+m.num[i][j];
            }
        }
        return add;
    }
    void print(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<num[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};
int main(){
    matrix obj1(1, 2, 3, 4, 5, 6, 7, 8, 9);
    matrix obj2(9, 8, 7, 6, 5, 4, 3, 2, 1);
    matrix obj3=obj1+obj2;
    cout<<"obj1:"<<endl;
    obj1.print();
    cout<<"obj2:"<<endl;
    obj2.print();
    cout<<"obj3(sum):"<<endl;
    obj3.print();
    return 0;
}
