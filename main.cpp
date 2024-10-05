// COMSC-210 | Lab 16 | Shayan Khan

#include <iostream>

using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    
    Color() : red(0), green(0), blue(0){}

    Color(int r, int g, int b) : red(r), green(g), blue(b){}

    Color(int r) : red(r), green(0), blue(0){}

    void setRed(int r){
        red = r;
    }

    void setGreen(int g){
        green = g;
    }

    void setBlue(int b){
        blue = b;
    }

    int getRed() const{
        return red;
    }

    int getGreen() const{
        return green;
    }

    int getBlue() const{
        return blue;
    }

    void print() const{
        cout << "Color (R = " << red << ", G = " << green << ", B = " << blue << ")" << endl;
    }
};

int main(){

    Color color1;
    Color color2(255,0,0);
    Color color3(128);
    Color color4(0, 255, 255);

    cout << "Color Values: " << endl;
    color1.print();
    color2.print();
    color3.print();
    color4.print();

    return 0;
}