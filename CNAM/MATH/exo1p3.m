A =[3 1 2; -1 3 4; -2 -1 3]
L1=tril(A) 
#on garde la matrice inferieur a la moitier de la diagonal
#et la partie superieur et remplacé par zero
L2=tril(A,-1) 
#pareil sauf que le triangle est decaler vers le bas