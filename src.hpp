
#include<algorithm>

void Init(int **&p,int n){//初始化，n为vector的个数,传入的p指向nullptr
    p = new int*[n];
    for(int i = 0; i < n; i++){
        p[i] = nullptr;
    }
}
void Add_element(int **&p,int x,int y){//在第x(1base)个vector后面添加一个元素y
    x--; // convert to 0-base
    if(p[x] == nullptr){
        p[x] = new int[10000];
        p[x][0] = 1;
        p[x][1] = y;
    } else {
        int size = p[x][0];
        if(size + 1 < 10000){
            p[x][size + 1] = y;
            p[x][0]++;
        }
    }
}
int Get_element(int **&p,int x,int k){//获取第x(1base)个vector中第k个(1-base)元素的值
    x--; // convert to 0-base
    return p[x][k];
}
void Clear(int **&p,int n){//回收空间
    for(int i = 0; i < n; i++){
        if(p[i] != nullptr){
            delete[] p[i];
        }
    }
    delete[] p;
    p = nullptr;
}
