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

    return 0;
}