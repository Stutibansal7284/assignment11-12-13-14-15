#include <iostream>
using namespace std;
class largerUnit{
private:
	int feet;
public:
	void showdata(){
		cout<<"Measurement in feet: "<<feet<<endl;
	}
	largerUnit(int f){
		feet=f;
	}
	int getfeet(){
		return feet;
	}
};
class smallUnit{
private:
	int inches;
public:
	smallUnit(){
		inches=0;
	}
	smallUnit(largerUnit smallUnit_OBJ){
		int feet; 
		feet=smallUnit_OBJ.getfeet();
		inches=feet/12;
	}
	void showdata(){
		cout<<"Measurement in inches: "<<inches<<endl;
	}
};
int main(){
	largerUnit largerUnit_OBJ(36);
	smallUnit smallUnit_OBJ;
	smallUnit_OBJ=largerUnit_OBJ;
	largerUnit_OBJ.showdata();
	smallUnit_OBJ.showdata();
	return 0;
}
