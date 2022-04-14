#include <unistd.h>

void    ft_putchar(char abc);

void    rush(int colunaRecebida, int linhaRecebida)
{
    int coluna;
    int linha;
  
    coluna = 1;
    linha = 1;
    while (linha <= linhaRecebida) 
  {
    while (coluna <= colunaRecebida) 
    {
      if ((linha == 1 && coluna == 1) || (coluna == 1 && linha == linhaRecebida))
          ft_putchar('A');  
      else if ((linha == 1 && coluna == colunaRecebida) || (coluna == colunaRecebida && linha == linhaRecebida))
          ft_putchar('C');
      else if ((linha == 1 || linha == linhaRecebida) || (coluna == 1 || coluna == colunaRecebida))
          ft_putchar('B');
      else
          ft_putchar(' ');
        
      coluna++;
    }
    ft_putchar('\n');
    coluna = 1;
    linha++;
  }
}

void    ft_putchar(char abc)
{
    write(1, &abc, 1);
}

void  rush(int colunaRecebida, int linhaRecebida);

int   main(void)
{
  rush(1,5);
  return (0);
}
