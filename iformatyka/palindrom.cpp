/*
 * palindrom.cpp
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
#include <cstring>
using namespace std;

bool czypalindrom(char tab[])
{
    int rozmiar = strlen(tab);
    for(int i=0 ;i < rozmiar / 2 ;i++)
    {
        if (tab[i]==tab[rozmiar - i - 1])
            continue;
        else
            return false;
        
         
    }
    return true;
} 
void removespace(char tab1[])
{
    int rozmiar = strlen(tab);
    for(int i=0 ;i < rozmiar / 2 ;i++)
    if(tab1[i] != ' ')
    
    
} 
int main(int argc, char **argv)
{
    int r =20;
    char napis1[r];
    char napis2[r];
    cin.getline(napis, 20);
    removespace(napis1, napis2);
    if(czypalindrom(napis))
    {
        cout<<"========================================================"
        cout<<"to palindrom!"<<endl;
    }
    else
        cout<<"========================================================"
        cout<<"to nie palindrom"<<endl;
    cout<<napis;
	
	return 0;
}

