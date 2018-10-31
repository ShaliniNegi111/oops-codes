#include<bits/stdc++.h>
using namespace std ;
class personal_rec
{
    string name ;
    int age ;
    float weight , height ;
public :

    personal_rec(){}
    personal_rec(string a, int b , float c , float d )
    {
        name = a ;
        age = b ;
        weight = c ;
        height = d ;
    }

    virtual void output()
    {
        cout <<" NAME OF EMPLOY               "  << name << endl ;

        cout <<" AGE OF EMPLOY                " << age << endl ;

        cout <<" WIEGHT AND HEIGHT OF EMPLOY  " <<  weight << " " << height << endl ;
    }
};

class profesonal_rec
{
    float salary ;
    string desig ;
public :

    profesonal_rec(){}
    profesonal_rec(float e , string f )
    {
        salary = e ;
        desig = f ;
    }
    virtual void output()
    {
        cout <<" EMPLOY  SALARY               "  << salary << endl ;

        cout <<" AGE OF EMPLOY                " << desig << endl ;

    }

};

class acd_rec
{
    float per ;
    float marks ;
public :

    acd_rec(){}
    acd_rec( float g, float h )
    {
        per = g ;
        marks = h ;
    }

    virtual void output()
    {
        cout <<" EMPLOY  PERCENTAGE               "  << per << endl ;

        cout <<" EMPLOY   MARKS                   " << marks << endl ;

    }
};

class   employ : public personal_rec ,public  profesonal_rec , public acd_rec
{

public :
    emlpoy() ;
    employ (string a, int b , float c , float d ,float e , string f ,  float g, float h )
    : personal_rec(a , b , c , d ) , profesonal_rec (e , f ) , acd_rec (g , h )
        {

        }
    void output()
    {
        personal_rec :: output() ;
        profesonal_rec :: output() ;
        acd_rec :: output() ;
    }
};
int main()
{

        string a , f ;
        int b ;
        float c , d , e , g , h ;
        employ *em ;
        cout <<"ENTER THE NAME OF EMPLOY \n " ;
        cin >> a ;
        cout <<"ENTER AGE OF EMPLOY \n " ;
        cin >> b ;
        cout <<" ENTER THE WIEGHT AND HEIGHT OF EMPLOY \n " ;
        cin >> c >> d ;
        cout <<"ENTER THE  EMPLOY  SALARY \n " ;
        cin >> e ;
        cout <<"ENTER  EMPLOY DESIGNATION \n " ;
        cin >> f ;
        cout <<"ENTER THE  EMPLOY  PERCENTAGE  \n " ;
        cin >> g ;
        cout <<"ENTER  EMPLOY MARKS  \n " ;
        cin >> h  ;
        em = new employ (a , b , c , d , e, f , g , h ) ;
        em ->output() ;
}
