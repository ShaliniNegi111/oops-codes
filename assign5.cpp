#include<bits/stdc++.h>
using namespace std ;


class shape
{
protected :
    float s1 , s2 ;
public :
    shape ()
    {
        s1 = s2 = 0 ;
    }
    void input ()
    {
        cout << "ENTER THE FIRST SIDE \n " ;
        cin >> s1 ;
        cout << "ENTER THE SECOND SIDE \n " ;
        cin >> s2 ;
    }
    virtual void compute_area() = 0 ;

};


class rectangle : public shape
{
public :
    void compute_area ()
    {
        cout << s1 * s2 << endl ;
    }
};

class triangle : public shape
{
public :
    void compute_area ()
    {
        cout << .5 * s1 * s2 << endl ;
    }

};
int main()
{
    int ch , c ;
    shape * p ;
    rectangle r ;
    triangle t ;
    cout <<"ENTER THE SIDE OF RECTANGLE \n " ;
    r .input() ;
    cout <<"ENTER THE SIDE OF TRIANGLE \n " ;
    t.input() ;
    do
    {

      cout <<"1.ARES OF RECTANGLE \n 2.AREA OF TRIANGLE \n ";
      cin >> c ;
      try
      {
          if ( c == 1 )
                p = &r ;
         else if ( c == 2 )
                p = &t ;
         else
              throw 0 ;
      }
      catch ( int )
      {
          cout <<"INVALID CHOICE \n " ;
      }

      p -> compute_area() ;
      getchar() ;
      cout <<"PRESS 1 TO CONTINUE \n ";
      cin >> ch ;
    }while ( ch == 1 ) ;
}
