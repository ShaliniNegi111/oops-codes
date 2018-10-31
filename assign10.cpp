#include<bits/stdc++.h>
using namespace std ;

int  main()
{
     ofstream out ;
     out.open("allthebest.txt" );
     string name , post  ;
     float salary ;
     cout <<" ENTER THE NAME OF THE EMPLOY " << endl ;
     cin >> name ;
     cout <<"ENTER THE POST OF EMPLOY " << endl ;
     cin >> post ;
     cout <<"ENTER THE SALARY OF ENPLOY "<< endl ;
     cin >> salary ;
     out << name << "  " << post <<" " << salary << endl ;
     out.close() ;

     ifstream in ;
     in.open("allthebest.txt"  ) ;
     in >> name ;
     cout << " NAME OF EMPLOY IS    " << name << endl ;
     in >> post ;
     cout <<"POST OF EMPLOY IS      " << post << endl ;
     in >> salary ;
     cout <<"SALARY OF ENPLOY       "<< salary ;
     in.close() ;
     return 0 ;
}
