from matplotlib import pyplot as plt
n = int(input("Que n-enesimo termo deseja encontrar: "))
def fibonnaci(n):
    if(n == 1):
        return 1
    elif( n== 2):
        return 1
    
    else:
        return fibonnaci(n-1) + fibonnaci(n-2)
    
    
    
print(fibonnaci(n))
