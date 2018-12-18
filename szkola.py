def zad1():
    suma=0
    while suma<75:
        a=int(input("podaj sumowaną liczbę"))
        suma+=a
    print(suma)


def zad2():
    n=int(input("podaj najmniejszą liczbę dodatnią z przedziału licb całkowitych"))
    if n>0:
        m=int(input("podaj największą liczbę całkowitą z przedziału"))
        if m>n:
            for i in range(n,m+1):
                print(" ,", i)
    else:
        print("ERROR")
def zad3():
    m=int(input("podaj największą liczbę całkowitą"))
    for i in range(0,m+1):
        print(i**2)
def zad4_concept1():
    for i in range(1,9):
        for j in range(0,9):
            if not j%2:
                if not j%3 and not i%3:
                    print(i,j)
def zad4():
    print("zad4")
    for i in range(10,99,2):
        if not i%3:
            print(i)
zad1()
zad2()
zad3()
zad4()
