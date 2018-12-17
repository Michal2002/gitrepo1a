#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
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
from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    
    __licznik = 0
    
    def __init__(self, imie, nazwisko, kategoria):
    
        super().__init__(imie, nazwisko)
    
        self.kategoria = kategoria
        
        Kierowca.licznik +=1
        
class Samochod:
    
    def __init__(self, marka, model, rocznik):
    
        self.marka=marka
    
        self.model=model
    
        self.rok=rocznik
    
        
    
    def wiek(self):
    
        return dzis.year - self.rok
    


def main(args):
    
    s1 = Samochod("porhe", "tiger", "1939")
    
    s2 = samochod("skoda", "skoda_t-25","1940" )
    
    
    print(s1.model, s1.wiek, s1.marka)
    
    k1 = kierowca("adam", "Słodowy", "b")
    
    k2 = kierowca("julianus", "gajkowus")
    print(k1. imie, nazwisko, kategoria)
    
    del(k1)
    del(k2)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
