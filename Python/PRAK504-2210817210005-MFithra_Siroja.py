def reverse(kebalikan):
    nilai=0
    while(kebalikan !=0):
        nilai=nilai*10
        nilai=nilai+kebalikan %10
        kebalikan //=10
    return nilai
A,B= input().split()
A=reverse(int(A))
B=reverse(int(B))
C=A+B
print(reverse(C))
    