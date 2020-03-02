#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sortowanie.py
#  
#  Copyright 2019  <>
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

def wypelnij(lista, n):
    for i in range(n):
        lista.apend(randit())
def sort_buuble(tab):
    n = len(tab)
    for i in range(n-1, 0, -1):
        for j in range(0, i):
            if tab[j]>tab[j+1]:
                zamien(tab[j], tab[j+1])


def zamien(&a, &b):
    tmp=tab[j]
    tab[j] = tab[j+1]
    tab[j+1] = tmp

def selection_sort(tab):
    n=len(tab)
    i=0
    for i in range(i, n):
        k=i
        for i in range(i+1, n):
            
            
def main(args):
    n=int(input("podaj element"))
    lista()
    wypelnij
    sort_buuble(lista)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
