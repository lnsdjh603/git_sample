#include <iostream>


using namespace std;

class CSample{
    public:
    float tasu();
    float hiku();
    float kakeru();
    float waru();
    void get(float x, float y);
    private:
    float a;
    float b;
};

void CSample::get(float x,float y){
    a = x;
    b = y;
}
float CSample::tasu(){
    return (a+b);
}

float CSample::hiku(){
    return (a-b);
}

float CSample::kakeru(){
    return (a*b);
}

float CSample::waru(){
    return (a/b);
}

int main(){
    CSample obj;
    int x;
    int y;

    cout << "数を入力してくださいa：" << endl;
    cin >> x;
     cout << "数を入力してくださいb：" << endl;
    cin >> y;   
    obj.get(x,y);
    cout << obj.tasu() << endl;
    cout << obj.hiku() << endl;
    cout << obj.kakeru() << endl;
    cout << obj.waru() <<endl;

    return 0;
}