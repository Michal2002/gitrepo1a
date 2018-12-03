#!/usr/bin/env python
# -*- coding: utf-8 -*-



    
def main(args):
    n = int(input("podaj ilość działań"))
    for i in range (n):    
        a = int(input("podaj bok a:")) 
        b = int(input("podaj bok b:"))
        e = int(input("podaj rodzaj zadania 1 liczenie obwodu / 2 liczenie pola"))
        if (e == 1):
            d = a * 2 + b * 2
            print ("obwod =",d)
        elif (e == 2):
            d = a*b
            print ("pole",d)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))



 
