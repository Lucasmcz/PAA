#include <stdio.h>
#include <time.h>
void bubble(int arr[],int i,int n)//Ordernar o Array
{
  for(int i = 0;i < n;i++)
  {
    for(int j = 0;j < n-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        int aux = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = aux;
      }
    }
  }
}

int ulam(int a)//Fazer os calculos de quanto vai ser a sequencia
{
  int count = 0;
  while(a != 4*1)
  {
    if(a % 2 == 0)
    {
      //printf("%d ",a);
      a = a/2;
      count = count +1;
    }
    else
    {
      //printf("%d ",a);
      a = (a*3) + 1;
      count = count +1;
    }
  }
  //printf("4 2 1\n");
  //printf("Lenght da Sequencia: %d",count+3);
  return(count+3);
}


int main(void)//Main que tem como medir o tempo de execução
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    ///////////////////////////
    int arr[65535];//de 1 até 65535
    arr[0] = 0;
    int media_sequencia = 0;//Variavel que utilizo para ficar iterando até soma tudo e depois dividir para ter a media
    int auxiliar[65535];//Auxiliar que utilizamos para mostrar qual vai ser o numero que tem a maior sequencia
    for(int i = 1;i < 65535;i++)//Percorrendo o array
    {
      arr[i] = ulam(i);//Fazendo o calculo
      auxiliar[i] = ulam(i);//Fazendo o calculo
      media_sequencia = media_sequencia + arr[i];//Somando para mostrar a media
    }

    printf("Media da Sequencia %d\n",media_sequencia/65535);//Mostrando a media
    bubble(arr,0,65535);//Ordernando por BubbleSort
    for(int i = 0;i < 65535;i++)//Comparando para achar o numero de maior sequencia
    {
      if(auxiliar[i] == arr[65534])
      {
        printf("O numero da maior Sequencia :%d\n",i);
        break;
      }
    }
    ///////////////////////////////////////////////
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);//Tempo gasto em Milisegundos
    getchar();
    return 0;
}
