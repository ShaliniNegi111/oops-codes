#include<bits/stdc++.h>
using namespace std ;
int c , c0 ,  ch , r1 , r2 , c1 , c2 , c3 ;
template  < class t >
void display ( t  ** m , int r , int c )
{
    for ( int i =0; i < r ; i ++ )
    {
        for ( int j = 0 ; j < c ; j ++ )
            cout << m[ i ] [ j ]  << " " ;
        cout << endl ;
    }
}
template  < class t >
t ** add( t **m1  , t **m2  , int r , int c )
{
    t ** m ;
    m = ( t ** ) malloc ( r * sizeof ( t * ) ) ;
    for ( int i = 0 ; i < r ; i ++ )
        m [ i ] =  ( t * ) malloc (c *sizeof( t )) ;
    for ( int i =0; i < r ; i ++ )
    {
        for ( int j = 0 ; j < c ; j ++ )
        m [ i ] [ j ] = m1 [ i ] [ j ] + m2 [ i ] [ j ] ;
    }
    return m ;
}



template  < class t >
t ** subtraction ( t **m1  , t **m2  , int r , int c )
{
    t ** m ;
    m = ( t ** ) malloc ( r * sizeof ( t * ) ) ;
    for ( int i = 0 ; i < r ; i ++ )
        m [ i ] =  ( t * ) malloc (c *sizeof( t )) ;
    for ( int i =0; i < r ; i ++ )
    {
        for ( int j = 0 ; j < c ; j ++ )
        m [ i ] [ j ] = m1 [ i ] [ j ] -  m2 [ i ] [ j ] ;
    }
    return m ;
}


template  < class t >
t ** multiply  ( t  **m1  , t **m2  , int r , int k , int c  )
{
    t ** m ;
    m = ( t ** ) malloc ( r * sizeof ( t * ) ) ;
    for ( int i = 0 ; i < r ; i ++ )
        m [ i ] =  ( t * ) malloc (c *sizeof( t )) ;
    for ( int i =0; i < r ; i ++ )
    {
        for ( int j = 0 ; j < c ; j ++ )
        {
             m [ i ] [ j ] = 0 ;
             for ( int p = 0 ; p < k ; p ++ )
                m [ i ] [ j ] += m1 [ i ] [ p ] * m2 [ p ] [ j ] ;
        }

    }
    return m ;
}


int main()
{
    do
    {
        cout <<"ENTER YOUR ADAT TYPE \n " ;
        cout <<"1.INT \n 2.FLOAT \n ";
        cin >> c0 ;
        if ( c0 == 1 )
        {
            int ** m1 , ** m2 , ** m3 ;
            cout <<" ENTER THE ROW AND COLUMN OF FIRST MATRIX \n " ;
            cin  >> r1 >> c1 ;
            m1 = ( int ** ) malloc ( r1 * sizeof ( int * ) ) ;
            for ( int i = 0 ; i < r1 ; i ++ )
                        m1 [ i ] =  ( int * ) malloc (c1 *sizeof( int )) ;
            cout <<"ENTER THE FIRST MATRIX \n ";
            for ( int i = 0 ; i < r1 ;i ++ )
            {

                for ( int j = 0 ; j < c1 ; j ++ )
                    cin >> m1 [ i ] [ j ] ;
            }

            cout <<" ENTER THE ROW AND COLUMN OF SECOND  MATRIX \n " ;
            cin  >> r2 >> c2 ;
            m2 = ( int ** ) malloc ( r2 * sizeof ( int * ) ) ;
            for ( int i = 0 ; i < r2 ; i ++ )
                        m2 [ i ] =  ( int * ) malloc (c2 *sizeof( int )) ;
            cout <<"ENTER THE second MATRIX \n ";
            for ( int i = 0 ; i < r2 ;i ++ )
            {

                for ( int j = 0 ; j < c2 ; j ++ )
                    cin >> m2 [ i ] [ j ] ;
            }

            do
            {
                cout <<"1.ADD\n 2.SUBTRACT \n 3.MULTIPLY\n ";
                cin >> ch ;

                switch( ch )
                {
                    case 1:
                           if ( r1 != r2 or  c1 != c2 )
                                cout <<"CANNOT PERFORM ADDITION \n " ;
                           else
                           {
                                    m3 = ( int ** ) malloc ( r1 * sizeof ( int * ) ) ;
                                    for ( int i = 0 ; i < r1 ; i ++ )
                                            m3[ i ] =  ( int * ) malloc (c1 *sizeof( int )) ;
                                    m3 = add ( m1 , m2 , r1 , c1 ) ;
                                    display ( m3 , r1 , c1 ) ;
                                    free ( m3) ;
                           }
                           break ;

                    case 2:
                           if ( r1 != r2 or c1 != c2 )
                                cout <<"CANNOT PERFORM SUBTRACTION \n " ;
                           else
                           {
                                    m3 = ( int ** ) malloc ( r1 * sizeof ( int * ) ) ;
                                    for ( int i = 0 ; i < r1 ; i ++ )
                                            m3 [ i ] =  ( int * ) malloc (c1 *sizeof( int )) ;
                                    m3 = subtraction ( m1 , m2 , r1 , c1 ) ;
                                    display ( m3 , r1 , c1 ) ;
                                    free ( m3 ) ;
                           }
                           break ;

                    case 3:

                             if ( c1 != r2 )
                                cout <<"CANNOT PERFORM MULTIPLICATION  \n " ;
                           else
                           {
                                    m3 = ( int ** ) malloc ( r1* sizeof ( int * ) ) ;
                                    for ( int i = 0 ; i < r1 ; i ++ )
                                            m3 [ i ] =  ( int * ) malloc (c2 *sizeof( int )) ;
                                    m3 = multiply ( m1 , m2 , r1 , c1 , c2 ) ;
                                    display ( m3 , r1 , c2 ) ;
                                    free ( m3 ) ;
                           }
                           break ;

                }

                cout <<"PRESS 1 TO PERFORM MORE OPERATIONS \n " ;
                cin >> c3 ;
            } while ( c3== 1 ) ;
        }
        else
        {
            float  ** m1 , ** m2 , ** m3 ;
            cout <<" ENTER THE ROW AND COLUMN OF FIRST MATRIX \n " ;
            cin  >> r1 >> c1 ;
            m1 = ( float ** ) malloc ( r1 * sizeof ( float * ) ) ;
            for ( int i = 0 ; i < r1 ; i ++ )
                        m1 [ i ] =  ( float * ) malloc (c1 *sizeof( float )) ;
            cout <<"ENTER THE FIRST MATRIX \n ";
            for ( int i = 0 ; i < r1 ;i ++ )
            {

                for ( int j = 0 ; j < c1 ; j ++ )
                    cin >> m1 [ i ] [ j ] ;
            }

            cout <<" ENTER THE ROW AND COLUMN OF SECOND  MATRIX \n " ;
            cin  >> r2 >> c2 ;
            m2 = ( float ** ) malloc ( r2 * sizeof ( float * ) ) ;
            for ( int i = 0 ; i < r2 ; i ++ )
                        m2 [ i ] =  ( float * ) malloc (c2 *sizeof( float )) ;
            cout <<"ENTER THE second MATRIX \n ";
            for ( int i = 0 ; i < r2 ;i ++ )
            {

                for ( int j = 0 ; j < c2 ; j ++ )
                    cin >> m2 [ i ] [ j ] ;
            }
             do
            {
                cout <<"1.ADD\n 2.SUBTRACT \n 3.MULTIPLY\n ";
                cin >> ch ;
                switch( ch )
                {
                    case 1:
                            if ( r1 != r2 or  c1 != c2 )
                                cout <<"CANNOT PERFORM ADDITION \n " ;
                           else
                           {
                                    m3 = ( float ** ) malloc ( r1 * sizeof ( float * ) ) ;
                                    for ( int i = 0 ; i < r1 ; i ++ )
                                            m3 [ i ] =  ( float * ) malloc (c1 *sizeof( float )) ;
                                    m3= add ( m1 , m2 , r1 , c1 ) ;
                                    display ( m3 , r1 , c1 ) ;
                                    free ( m3 ) ;
                           }
                           break ;

                    case 2:
                           if ( r1 != r2 or c1 != c2 )
                                cout <<"CANNOT PERFORM SUBTRACTION  \n " ;
                           else
                           {
                                    m3 = ( float ** ) malloc ( r1 * sizeof ( float * ) ) ;
                                    for ( int i = 0 ; i < r1 ; i ++ )
                                            m3 [ i ] =  ( float * ) malloc (c1 *sizeof( float )) ;
                                    m3 = subtraction  ( m1 , m2 , r1 , c1 ) ;
                                    display ( m3 , r1 , c1 ) ;
                                    free ( m3 ) ;
                           }

                            break ;

                    case 3:


                             if ( c1 != r2 )
                                cout <<"CANNOT PERFORM MULTIPLICATION  \n " ;
                           else
                           {
                                    m3 = ( float ** ) malloc ( r1* sizeof ( float * ) ) ;
                                    for ( int i = 0 ; i < r1 ; i ++ )
                                            m3 [ i ] =  ( float * ) malloc (c2 *sizeof( float )) ;
                                    m3 = multiply ( m1 , m2 , r1 , c1 , c2 ) ;
                                    display ( m3 , r1 , c2 ) ;
                                    free ( m3 ) ;
                           }
                           break ;
                }

                cout <<"PRESS 1TO PERFORM MORE OPERATIONS \n " ;
                cin >> c3 ;
            } while ( c3 == 1 ) ;
        }
        cout <<"PRESS 1TO DO OPERATION FOR OTHER DTATA TYPE\n " ;
        cin >> c ;
    }while ( c == 1 );

    return 0 ;
}
