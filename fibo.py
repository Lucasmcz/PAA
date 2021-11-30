import time
import timeit
import matplotlib.pyplot as plt
import numpy as np

#Algoritmo Fibonnaci Iterativo
def alguma_funcao(n):
    ultimo=1
    penultimo=1

    if (n==1) or (n==2):
        return 
    else:
       for count in range(2,n):
            termo = ultimo + penultimo
            penultimo = ultimo
            ultimo = termo
            count += 1



inicio = timeit.default_timer()
alguma_funcao(1)
fim = timeit.default_timer()
valor = (fim - inicio)

inicio1 = timeit.default_timer()
alguma_funcao(1000)
fim1 = timeit.default_timer()
valor1 = (fim1 - inicio1)



inicio2 = timeit.default_timer()
alguma_funcao(10000)
fim2 = timeit.default_timer()
valor2 = (fim2 - inicio2)



inicio3 = timeit.default_timer()
alguma_funcao(200000)
fim3 = timeit.default_timer()
valor3 = (fim3 - inicio3)

arr_n = [valor,valor1,valor2,valor3]

print(arr_n)
plt.plot(arr_n,[1,1000,10000,20000])
plt.title("Grafico do Algoritmo Iterativo")
plt.show()
#print('duracao do iterativo: %f' % (fim - inicio))


