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
from osoba_obj import Osoba
from datetime import date
class Kierowca:
    def __init__(self, imie, nazwisko, kategoria):
        super(),__init__(imie nazwisko)
        self.kategoria = kategoria
        
class Samochod:
    
    def __init__(marka, model, rok_produkcji):
        self.marka=marka
        self.model=model
        self.rok_produkcji=rocznik
        self.kierowca = kierowca
    def wiek(self):
        return dzis.year - self.rok
    


def main(args):
    s1 = Samochod("fiat", "tipo", "2002")
    print(s1.model,s1.wiek())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
