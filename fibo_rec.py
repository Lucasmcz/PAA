import time
import timeit
import matplotlib.pyplot as plt
import numpy as np

#Algoritmo Fibonnaci Recursivo
def fibonnaci(n):                            
    if n<=1:                                 
        return n                             
    else:                                    
        return (fibonnaci(n-1)+fibonnaci(n-2))



inicio = timeit.default_timer()
fibonnaci(1)
fim = timeit.default_timer()
valor = (fim - inicio)


inicio1 = timeit.default_timer()
fibonnaci(10)
fim1 = timeit.default_timer()
valor1 = (fim1 - inicio1)

inicio2 = timeit.default_timer()
fibonnaci(20)
fim2 = timeit.default_timer()
valor2 = (fim2 - inicio2)

inicio3 = timeit.default_timer()
fibonnaci(30)
fim3 = timeit.default_timer()
valor3 = (fim3 - inicio3)

arr_n = [valor,valor1,valor2,valor3]

print(arr_n)
plt.plot(arr_n,[1,10,20,30])
plt.title("Grafico do Algoritmo Recursivo")
plt.show()


