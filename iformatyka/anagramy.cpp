/*
 * anagramy.cpp
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
    int r=4;
    char napis[]="grab";
    //==================================================================
    r=4;
    //==================================================================
    for(int a=0 ; a <r ;a++)
    {
        for(int b=0; b<r; b++)
        {
            if(b == a)continue;
            for(int c=0; c<r;c++)
            {
                if(c == b || c == a)continue;
                for(int d=0; d<r;d++)
                {
                    if(d == a || d == b || d == c )
                    cout << napis[a] << napis[b] << napis[c] << napis[d] << endl;
                }
            }
        }
    }
    //==================================================================
	
    return 0;
}

