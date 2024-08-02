#include<bits/stdc++.h>
using namespace std;

class Box{
    int l, b, h;
    public:
    Box(){
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }
    Box(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    friend int volume(Box b);
};

int volume(Box B){
    int res = B.l*B.b*B.h;
    return res;
}

int main()
{
    Box b1(2, 2, 2);
    int v = volume(b1);
    cout<<v;
    
    return 0;
}