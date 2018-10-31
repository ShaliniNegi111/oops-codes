#include<bits/stdc++.h>
using namespace std  ;


class Complex
{
    float   real , img ;
public :
     Complex ()
     {
         real = 0;
         img = 0 ;
     }

     Complex (float a , float b )  // parameterised constructor
     {

         real = a ;
         img = b ;
     }

     friend Complex operator + ( Complex c1 , Complex c2 ) ;
     friend Complex operator - ( Complex c1 , Complex c2 ) ;
     friend ostream& operator << ( ostream &out ,Complex &c1 ) ;
     friend istream& operator >> ( istream &in  , Complex &c1 ) ;
     Complex operator * ( Complex c ) ;
     Complex operator / ( Complex c ) ;

};


Complex operator + ( Complex c1 , Complex c2 )
{
    Complex c ;
    c.real = c1.real + c2.real ;
    c.img  = c1.img + c2.img ;
    return c ;

}

Complex  operator - ( Complex c1 , Complex c2 )
{
    Complex c ;
    c.real = c1.real - c2.real ;
    c.img  = c1.img - c2.img ;
    return c ;

}
ostream& operator << ( ostream &out ,Complex &c1 )
{
    out << c1.real ;
    cout  << " " << " +  i "  ;
    out  << c1.img  ;
    cout << endl ;
    return out ;
}


 istream& operator >> ( istream &in  , Complex &c1 )
 {

     cout << "enter the real part \n " ;
     in >> c1.real ;
     cout <<"ENTER THE IMAG PART \n " ;
     in >> c1.img ;
     return in ;

 }


   Complex Complex :: operator * ( Complex c1 )
   {
       Complex c;
       c.real = ( real * c1.real - img * c1.img );

       c.img =  ( real * c1.img + img *  c1.real ) ;

       return c1 ;
   }



    Complex Complex :: operator / ( Complex c1 )
   {
       Complex c;
       c.real = (( real * c1.real ) + ( img * c1.img )) / ( c1.real * c1.real + c1.img * c1.img )  ;
       c.img = (( img * c1.real - real * c1.img ))/ ( c1.real * c1.real + c1.img * c1.img );
       return c1 ;
   }




int main()
{
    int ch , ch2 , c ;
    Complex  c1 , c2 , c3 ;
    cout <<"ENTER THE FIRST COMPLEX NUMBER\n " ;
    cin >> c1 ;
    cout <<"THE COMPLEX NUMBER ENTRERD \n ";
    cout << c1  << endl ;
    cout <<"ENTER THE SECOND COMPLEX NUMBER\n " ;
    cin >> c2 ;
    cout <<"THE COMPLEX NUMBER ENTRERD \n ";
    cout << c2  << endl ;
    do
    {

        cout <<" 1.ADD \n 2.SUBTRACT \n .MULTIPLY \n 4.divide \n ";
        cin >> c ;
        switch ( c )
        {
             case 1 :
                    c3 =  c1 + c2 ;
                     cout << c3 << endl ;
                     break ;
            case 2 :
                     cout <<"1.C1 - C2 \n C2- C1 \n ";
                     cin >> ch2 ;
                     if ( ch2 == 1 )
                            c3 = c1 - c2 ;
                     else
                           c3 = c2 - c1 ;
                     cout << c3 << endl ;
                     break ;
           case 3 :
                    c3 = c1 * c2 ;
                    cout  << c3 << endl ;
                    break ;

           case 4 :
                     cout <<"1.C1 / C2 \n C2 / C1 \n ";
                     cin >> ch2 ;
                     if ( ch2 == 1 )
                            c3 = c1 / c2 ;
                     else
                           c3 = c2 /  c1 ;
                     cout << c3 << endl ;
                     break ;

        }
        cout <<"PRESS 1 TO PERFORM MORE OPERATIONS \n " ;
        cin >> ch ;
    }while ( ch == 1 ) ;



}
