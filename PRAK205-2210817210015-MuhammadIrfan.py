import math
print("INPUT")
A   = int(input("Sisi A      = "))
print, A
B   = int(input("Sisi B      = "))
print, B
C = math.sqrt((B**2)-(A**2))
keliling = A+B+C
luas = A*C/2
print("OUTPUT")
print("Alas        = {} cm" .format(round(C)))
print("Tinggi      = {} cm" .format(round(A)))
print("Keliling    = {} cm" .format(round(keliling)))
print("Luas        = {} cm^2" .format(round(luas)))