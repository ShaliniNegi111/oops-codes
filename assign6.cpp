#include<bits/stdc++.h>
using namespace std ;
template < class t >
class division
{
    t x , y ;
public :
    dividion ()
    {
        x = y = 0 ;
    }
    void input ()
    {
        cout <<"ENTER THE FIRST NO \n " ;
        cin >> x ;
        cout <<"ENTER THE SECOND NO \n " ;
        cin >> y ;
    }
    void divide ( ) ;

};
template < class v >
void division  < v > :: divide ( )
{
    try
    {
        if ( y != 0)
        {
            cout << x / y ;
        }
        else
            throw 0 ;
    }
    catch( int )
    {
        cout <<"ERROR \n " ;
    }
}


int main()
{
    int c , ch ;
    do
    {
      cout <<"1.INTERGER \n 2.FLOAT \n " ;
      cin >> c ;
      try
      {
          if ( c == 1 )
          {
                division < int > d ;
                d.input() ;
                d.divide() ;
          }
          else if ( c == 2 )
          {
                division < float  > d ;
                d.input() ;
                d.divide() ;
          }
          else throw 0 ;
      }
      catch ( int )
      {
          cout <<"INAVLID CHOICE \n " ;
      }

      getchar() ;
      cout <<"PRESS 1 TO CONTINUE WITH OTHER DATA TYPE \n " ;
      cin >> ch ;

    }while ( ch == 1 ) ;
}
