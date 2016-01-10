import math
##quadratic equation

def qua(a,b,c):
    return  (-b+math.sqrt(b*b-4*a*c))/2*a,(-b-math.sqrt(b*b-4*a*c))/2*a

print qua(2,3,0)
print qua(1,-6,5)
