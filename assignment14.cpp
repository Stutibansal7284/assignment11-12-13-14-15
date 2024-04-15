#include <iostream>
#include <string>
using namespace std;
class stringcount{
private:
    string str;
public:
    stringcount(string s){
        str=s;
    }
    int countwords(){
        int count=0;
        bool word=false;
        for (int i=0;i<str.length();i++){
            if (str[i]==' '){
                word=false;
            } else{
                if(!word){
                    count++;
                    word=true;
                }
            }
        }
        return count;
    }
};
int main(){
    string input="My college is chitkara";
    stringcount obj(input);
    int wordcount=obj.countwords();
    cout<<"Number of words in the string: "<<wordcount<<endl;
    return 0;
}
