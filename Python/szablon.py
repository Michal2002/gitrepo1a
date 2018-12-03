  #!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    n = int(input("podaj ilość działań"))
    for i in range (n):
        a = int(input("podaj bok a:"))
        b = int(input("podaj bok b:"))
        f = int(input("podaj bok b:"))
        if ( a < b + f ) and ( b < a + f ) and ( f < a + b ):
            print ("da się zbudować trójkąt")
            p1 = a + b + f
            ( "obwód =",p1)
            p = ( p1 / 2 )
            P = sqrt(p*(p-a)*(p-b)*(p-f))
        else:
            print ("nie da się zbudować trójkąta")


