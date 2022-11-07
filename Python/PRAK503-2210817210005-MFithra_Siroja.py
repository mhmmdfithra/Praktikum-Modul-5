def maksimal(a,b):
    a=int(a) ;b=int(b)
    if (a>b):
        return a
    else:
        return b
def minimal (a,b):
    a=int(a);b=int(b)
    if (a<b):
        return a
    else:
        return b
maks= int(-100000)
minim=int (100000)
bilangan=int(input())
batas=0
while batas<bilangan:
    angka =map(int,input().split())
    for nilai in angka:
        maks = maksimal(maks,nilai)
        minim = minimal(minim,nilai)
        batas +=1
print(maks,minim)
