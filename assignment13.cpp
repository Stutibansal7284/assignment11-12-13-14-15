#include <iostream>
using namespace std;
class sambhar_dosa{
private:	
	int dosa;
public:
	sambhar_dosa(){
		dosa=2;
	}
	int dosaquantity(){
		return dosa;
	}
};
class white_sauce_pasta:public sambhar_dosa{
private:
	int pasta;
public:
	white_sauce_pasta(){
		pasta=1;
	}
	int pastaquantity(){
		return pasta;
	}
};
class cold_drink:public white_sauce_pasta{
private:
	int drink;
public:
	cold_drink(){
		drink=2;
	}
	int drinkquantity(){
		return drink;
	}
};
class bill:public cold_drink{
private:
	int dosaprice, pastaprice, drinkprice;
public:
	bill(){
		dosaprice=150;
		pastaprice=90;
		drinkprice=60;
	}
	void print(){
		cout<<"Total bill: "<<dosaquantity()*dosaprice+pastaquantity()*pastaprice+drinkquantity()*drinkprice<<endl;
	}
};
int main() {
	bill obj;
	obj.print();
	return 0;
}
