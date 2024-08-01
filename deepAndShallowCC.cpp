#include<iostream>
#include<cstring>
using namespace std;

class ShallowCopy{
    public:
    int *data;

    ShallowCopy(int value){
        data = new int(value);
    }

    ShallowCopy(const ShallowCopy &obj){
        data = obj.data;
    }

};

class DeepCopy{
    public:
    int *data;

    DeepCopy(int value){
        data = new int(value);
    }

    DeepCopy(const DeepCopy &obj){
        data = new int(*obj.data);
    }

};

int main(){
    ShallowCopy s1(10);
    ShallowCopy s2 = s1;

    cout<<"Value before modification: s1 = "<<*s1.data<<" s2 = "<<*s2.data<<endl;
    *s1.data = 20;
    cout<<"Value after modification: s1 = "<<*s1.data<<" s2 = "<<*s2.data<<endl;

    DeepCopy d1(10);
    DeepCopy d2 = d1;

    cout<<"Value before modification: d1 = "<<*d1.data<<" d2 = "<<*d2.data<<endl;
    *d1.data = 20;
    cout<<"Value after modification: d1 = "<<*d1.data<<" d2 = "<<*d2.data<<endl;

    return 0;
}