
Debut
a=23
b=3
label calcul
si b == 0
   affiche("le pgcd est")
   affiche(a)
   Fin
sinon
   r = a % b
   a = b
   b = r
   retour à "calcul"g
