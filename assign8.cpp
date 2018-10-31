#include<bits/stdc++.h>
using namespace std ;
class shape
{
protected :
    double side1 ;
    double side2 ;
public :
    void input ()
    {
        cout << "enter the first side " << endl ;
        cin >> side1 ;
        cout << "enter the second side " << endl ;
        cin >> side2 ;
    }
    virtual cal_area()
    {

    }
};

class rectangle : public shape
{
public :
    cal_area ()
    {

        float area = side1 * side2 ;
        cout << area ;
    }

};
class triagle :public shape
{
public :
     cal_area ()
    {

        float area = side1 * side2 * 0.5 ;
        cout << area ;
    }

};
int main ()
{
    shape * s ;
    int n ;
    cout << " enter the shape number " << endl ;
    cout << " 1 . rectangle " << endl ;
    cout << " 2 . triangle " << endl ;
    cin >> n ;
    if ( n == 1 )
    {
        rectangle r ;
        r.input () ;
        s = & r ;
        s -> cal_area() ;
    }
    else
    {
        triagle t ;
        t.input () ;
        s = &t ;
        s -> cal_area() ;
    }
}
