#include<bits/stdc++.h>
using namespace std ;
class base1
{
     string name,bg,dob;
public :
    base1 ()
    {

    }
    virtual void input ()
    {
        cout <<"ENTER THE NAME OF STUDENT \n " ;
        cin >> name ;
        cout <<"ENTER THE BLOOD GROUP \n " ;
        cin >> bg ;
        cout <<"ENTER THE DATE OF BIRTH \n " ;
        cin >> dob ;
    }
    virtual void display ()
    {
          cout<<"\nName                 : "<<name;
          cout<<"\nBlood Gr.            : "<<bg;
          cout<<"\nDOB                  : "<<dob;
    }

};
class base2
{
    float hgt,wgt;
public :


    virtual void input ()
    {
        cout <<"ENTER THE WIEHTH OF STUDENT \n " ;
        cin >> hgt ;
        cout <<"ENTER THE HEIGHT  \n " ;
        cin >> wgt ;

    }
    virtual void display()
  {
    cout<<"\nHeight               : "<<hgt;
    cout<<"\nWeight               : "<<wgt;
  }


};

class base3
{
    string pno,address;

  public :

  virtual void input()
  {
    cout<<"\nEnter the Insurance Policy No. : ";
    cin>>pno;
    cout<<"\nEnter the Address : ";
    cin>>address;
  }

  virtual void display()
  {
    cout<<"\nInsurance Policy No. : "<<pno;
    cout<<"\nAddress              : "<<address;
  }

};

class derived : public base1 , public base2 , public base3
{
        int drno;
        string teleno;
public :
     void input()
  {
    base1::input();
    base2::input();
    base3::input();
    cout<<"\nEnter the Driving Lic. No. : ";
    cin>>drno;
    cout<<"\nEnter the Telephone No. : ";
    cin>>teleno;
  }

  void display()
  {
    base1::display();
    base2::display();
    base3::display();
    cout<<"\nDriving Lic. No.     : "<<drno;
    cout<<"\nTelephone No.        : "<<teleno;
    cout<<endl<<endl;
  }

  int sdrno()
  {
      return drno ;
  }



};

derived ** create_database ( int * n )
{

    derived ** d = new derived *[ 50 ] ;
    int i = 0 , ch  ;
    do
    {
        d [ i ] = new derived ;
        d [ i ] -> input () ;
        cout <<"PRESS 1 TO CONTINUE \n " ;
        cin >> ch ;
        i ++ ;
    }while ( ch == 1 ) ;
    *n = i ;
    return d  ;

}


void display_all ( derived ** d , int n )
{
    for ( int i = 0 ; i < n ; i ++ )
        d [ i ] -> display () ;
}

void display_s ( derived ** d ,int  n )
{
    int x , flag = 0 ;
    cout <<"ENTER THE DRIEVING LICENCE NO \n " ;
    cin >> x ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( d [ i ] -> sdrno() == x )
        {
            d [ i ] -> display () ;
            flag = 1;
            break ;
        }
    }
    if ( flag == 0 )
        cout <<"RECORD NOT FOUND \n " ;

}


derived ** rinsert ( derived ** d , int n )
{
    d [ n ] = new derived ;
    d [ n ] -> input () ;
    return d ;
}



derived ** rdelete( derived ** d , int n)
{
    derived ** b = new derived * [ 50 ] ;
    int x , flag = 0 , k = 0 ;
    cout <<"ENTER THE DRIEVING LICENCE NO \n " ;
    cin >> x ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( d [ i ] -> sdrno() == x )
          flag = 1;
        else
        {
            b [ k ] = new derived ;
            b [ k  ] = d [ i ] ;
            k ++ ;
        }
    }
    if ( flag == 0 )
        cout <<"RECORD NOT FOUND \n " ;
    return b ;
}



void edit ( derived ** d , int n )
{

    int x , flag = 0 ;
    cout <<"ENTER THE DRIEVING LICENCE NO \n " ;
    cin >> x ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( d [ i ] -> sdrno() == x )
          {
              d [ i ] ->input() ;
              flag = 1 ;
              break ;
          }
    }
    if ( flag == 0 )
        cout <<"RECORD NOT FOUND \n " ;

}
int main()
{
    derived ** d ;
    int ch , n , c  ;
    do
    {
        cout << "1.CREATE DATABASE \n 2.DISPLAY \n 3.DISPLAY SINGLE \n 4.INSERT \n 5.DELTELE \n 6.EDIT  " ;
        cin >> c ;
        switch ( c )
        {
             case 1:  d = create_database ( &n ) ;
                      break ;

             case 2: display_all ( d , n ) ;
                      break ;

            case  3: display_s ( d , n ) ;
                     break ;

            case 4 :
                     d =rinsert(d ,n );
                     n ++ ;
                     break;

            case 5 :

                    d = rdelete( d , n ) ;
                    n -- ;
                    break ;

            case 6 : edit ( d , n ) ;
                     break ;
        }

        cout << " PRESS  1 TO CONTINUE \n " ;
        cin >> ch ;
    }while ( ch == 1 ) ;
}
