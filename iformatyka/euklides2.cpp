/*
 * euklides2.cpp
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int a,b,i ;
    //=============================================
    cout<< "podaj a: " << endl;
    cin>>a;
    cout<< "podaj b: " << endl;
    cin>>b;
    //=============================================
	
    while(a>0)
    {
        a=a%b;
        b=b-a;
        i+=1
        }
    cout<<"NWD: "<<b<<endl;
    cout<<
	return 0;
}
