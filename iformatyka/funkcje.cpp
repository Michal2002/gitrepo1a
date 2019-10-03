/*
 * funkcje.cpp
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
void iloraz(int a, int b)
{
    if(b!=0)
        cout <<"iloraz: "<< a / b<<endl;
    else
        cout<<"niedziel przez zero";
}
int pomnoz(int a, int b)
{
        return a*b;
} 
void sumuj(int a, int b)
{
    cout <<"suma: "<< a+b << endl;
}
int odejmij(int a, int b)
{
    return a-b;
}
int main(int argc, char **argv)
{
    int a, b;
    cout<<"podaj liczby:"<< endl;
    cin>> a >> b;
	sumuj(a, b);
    sumuj(b, a);
    iloraz(a, b);
    int wynik2;
    wynik2 = odejmij(a, b)
    
    cout<< "rurznica: "<< odejmij(a, b) <<endl;
    int wynik;
    wynik = pomnoz(a, b);
    cout<< "iloczyn: "<< wynik;
    
	return 0;
}

