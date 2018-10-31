#include<bits/stdc++.h>
using namespace std ;
class  weather
{
    float low_temp , high_temp, rain_fall, snow_fall ;
public :
    static float avg_htemp ;
    static float avg_ltemp ;
    static float  avg_rainf ;
    static float  avg_snowf ;
   weather ()
   {
       low_temp = high_temp = rain_fall = snow_fall = 0 ;
   }

   void input() ;
   void output();
};
void weather::input()
{
    cout << " ENTER THE LOW TEMPERATURE \n " ;
    cin  >> low_temp ;
    cout << " ENTER THE HIGH TEMPERATURE \n " ;
    cin  >> high_temp ;
    cout << " ENTER THE RAIN FALL  \n " ;
    cin  >> rain_fall ;
    cout << " ENTER THE SNOW  FALL \n  ";
    cin  >> snow_fall ;
    avg_htemp +=  high_temp;
    avg_ltemp +=  low_temp;
    avg_rainf +=  rain_fall;
    avg_snowf +=   snow_fall;
}



void weather::output()
{
    cout << "  LOW TEMPERATURE            " << low_temp << endl ;

    cout << " ENTER THE HIGH TEMPERATURE  " << high_temp << endl ;

    cout << " ENTER THE RAIN FALL        " << rain_fall << endl ;

    cout << " ENTER THE SNOW  FALL       " <<   snow_fall << endl ;

    cout <<"n--------------------------------------------------------------------\n ";

}
    float weather::avg_htemp ;
    float weather::avg_ltemp ;
    float weather::avg_rainf ;
    float weather ::avg_snowf ;
int main()
{
    int i , ch , c2 , c;
    weather * w ;
    w = ( weather *)malloc( 31 * sizeof ( weather ) ) ;
    do
    {
        cout <<"1.ADD ENTRY \n 2.DISPLAY \n 3.AVERAGE\n ";
        cin >> c ;
        switch( c )
        {
            case 1:
                 do
                {
                  cout <<"ENTER THE DATE \n " ;
                  cin >> i ;
                  ( w + i  - 1) -> input() ;
                  getchar() ;
                  cout <<"PREES 1 TO CINTINUE ADDING \n " ;
                  cin >> c2 ;
                } while ( c2 == 1 ) ;
                break ;

            case 2:
                  for ( int i = 0 ; i < 10 ; i ++ )
                    ( w + i ) -> output() ;
                  break ;

            case 3 :
                    cout <<"THE AVERAGE OF HIGH TEMOERATURE " << weather::avg_htemp / 31 << endl ;
                    cout <<"THE AVERAGE OF LOW TEMOERATURE " << weather::avg_ltemp / 31 << endl ;
                    cout <<"THE AVERAGE OF RAIN FALL       " << weather::avg_rainf / 31<< endl ;
                    cout <<"THE AVERAGE OF SNOW FALL       " << weather ::avg_snowf / 31<< endl ;
                    break ;
        }
        getchar() ;
       cout <<"PREES 1 TO CINTINUE \n " ;
       cin >> ch ;


    }while ( ch == 1 ) ;
}
