#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  lotek.py
#  
#  Copyright 2018  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  
import random

def main(args):
    n=int(input("ile liczb"))
    #for i in range(3):
    while n:
        liczby = random.randint(0.10)
        if not liczby.count(liczba):
            liczby.append(liczba)
            iliczb-= 1
    print(liczby)
    ileliczb = len(liczby)
    typy = set()
    while ilelizb:
        typ=input("podaj typy: ")
        if typy not in typy:
            typy.add(typ)
            ileliczb -= 1
    print(typy)
        
                
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
