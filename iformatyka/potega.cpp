/*
 * silnia.cpp
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

long int potenga_it(int n, float x)
{
    
    float potenga =1 ;
    for(int i=0; i<n; i++)
    { 
        potenga=potenga * x;
    }
    return potenga;
}
long int potenga_re(int n, float x)

{

    if(n==0)

        return 1;

    else

        return potenga_re(x,n-1)*x;
        
    }

int main(int argc, char **argv)

{ 
    int n;
    float x;
    
    cout<<"podaj x pod: "<<endl;
    cin>>x;
    cout<<"podaj n : "<<endl;
    cin>>n;
    cout<<"potęga: "<<potenga_it(n,x)<<endl;
	cout<<"potęga: "<<potenga_re(n,x)<<endl;
	return 0;
}

