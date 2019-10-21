/*
 * dekoder.cxx
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


void koduj(char tabzn[],int rozmiar)
{
    int i = 0;
    
    for(i = 0; i < rozmiar ; i++)
    {
        cout<<(int)tabzn[i]<<", ";
        
    }
}
void dekoduj(szyfr[], int rozmiar)
{
    
    int i = 0;
    for(i = 0; i < rozmiar ; i++)
    {
        szyfr[i]
    } 
}
int main(int argc, char **argv)
{
	int rozmiar = 15;
    
	char napis[rozmiar]= "zssr zsrr zsrr";
    
    koduj(napis, rozmiar);
    
    int szyfr[16]={122, 115, 115, 114, 32, 122, 115, 114, 114, 32, 122, 115, 114, 114, 0};
    dekoduj(szyfr, rozmiar);
	return 0;
}

