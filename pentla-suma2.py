#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pentla-suma2.py
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


def main(args):
    suma = 0
    a= int(input("podaj liczbę: "))
    while suma < 75:
        
        suma += a
        print(suma)
         a = int(input("podaj liczbę: "))
         
        print()
        print("suma liczb")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
