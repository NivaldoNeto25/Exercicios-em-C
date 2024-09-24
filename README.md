# Exercicios-em-C

Esse repositório é focado em exercícios em C que eu realizo para treinar para a cadeira de programação 1.

# PARTE 1:

  # 1- Área do círculo:
  
    - Esta função calcula a área de um círculo utilizando a fórmula matemática que relaciona a área com o raio. A área de um círculo é dada pela expressão 𝜋 × raio² , onde 𝜋 é uma constante aproximadamente igual a 3,14159.

    - Parâmetros:
        raio: Um número positivo que representa o raio do círculo.
    - Retorno:
        Retorna a área do círculo como um número do tipo float.
  
  # 2- Cadastro:
  
    - Este programa implementa um sistema de cadastro simples para armazenar o nome e RG de até 10 pessoas. O usuário pode:
      
      - Cadastrar uma nova pessoa (nome e RG).
      - Pesquisar o nome de uma pessoa cadastrada através de seu RG.
      - O sistema impede que mais de 10 pessoas sejam cadastradas, emitindo uma mensagem de erro caso esse limite seja atingido. Na busca, se o RG não for encontrado, o programa retornará "Não encontrado".
  
    - Funcionalidades:
      
      - Cadastrar Pessoa: Permite ao usuário inserir o nome e o RG de uma pessoa.
      -Pesquisar por RG: Busca uma pessoa pelo RG informado e retorna o nome correspondente ou uma mensagem de "Não encontrado".
  
    - Limite:
      
      - O sistema só permite o cadastro de até 10 pessoas.
  
  # 3- Celsius para Fahrenheit:

    - Esta função converte uma temperatura dada em graus Celsius para a escala Fahrenheit. A fórmula para a conversão é Fahrenheit = ( Celsius × 1,8 ) + 32
    - Parâmetros:
        celsius: A temperatura em graus Celsius que será convertida.
    - Retorno:
        Retorna a temperatura convertida em graus Fahrenheit.
  
  # 4- Contar caracteres:

    - Esse código conta o número de caracteres em uma string, excluindo o caractere nulo de terminação.
  
  # 5- Conversão:

    - Esse código converte uma quantidade total de segundos em horas, minutos e segundos.
  
  # 6- Fatorial:

    - Esse código calcula o fatorial de um número inteiro positivo. O fatorial de um número 𝑛 é o produto de todos os números inteiros positivos até 𝑛.
  
  # 7- Jogo:
  
    - Esse programa simula o caminhamento de um personagem em um mapa de 6x6 casas. O personagem sempre iniciará na casa 3,3. O programa iniciará desenhando o mapa na tela, onde o personagem será representado por um #. Após mostrar o mapa, o programa aguardará uma entrada do usuário. As entradas possível são:
  
      - O: movimenta o personagem 1 casa a Oeste.
      - L: movimenta o personagem 1 casa a Leste.
      - N: movimenta o personagem 1 casa ao Norte.
      - S: movimenta o personagem 1 casa ao Sul.
  
    - A cada movimentação, o programa deve imprimir novamente o mapa atualizado na tela. O programa encerra quando for digitado X.
  
  # 8- Lucro:
  
    - Esse código recebe um array de preços de ações (onde cada elemento representa o preço da ação em um determinado dia) e retorna o lucro máximo que pode ser obtido ao comprar em um dia e vender em outro dia posterior.
  
  # 9- Matriz Transposta:
  
    - Este procedimento substitui todas as ocorrências de um valor X em uma matriz por um valor Y, ambos fornecidos como parâmetros. O objetivo é percorrer a matriz e realizar as substituições automaticamente.
  
  # 10- Média / Menor / Maior:
  
    - Este conjunto de funções trabalha com um vetor de 10 posições e permite calcular:
  
      - Média dos elementos: Calcula e retorna a média dos valores no vetor.
      - Menor elemento: Retorna o menor valor encontrado no vetor.
      - Maior elemento: Retorna o maior valor encontrado no vetor.
  
  # 11- Média de notas:

    - Esse código calcula a média aritmética de três notas.
  
  # 12- Maior número:

    - Esse código encontra o maior número entre dois números inteiros.
  
  # 13- Menor valor de um array:

    - Esse código encontra o menor valor em um vetor (lista) de números inteiros.
  
  # 14- Numero alvo:
  
    - Esta função recebe um vetor de números inteiros e um número alvo, e retorna os índices dos dois números que somados resultam no valor alvo.
  
  # 15- Número primo:

    - Esse código verifica se um número inteiro positivo é primo. Um número é considerado primo se for maior que 1 e não for divisível por nenhum número além de 1 e ele mesmo.
  
  # 16- Palíndromo:

    - Esse código verifica se uma string é um palíndromo, ou seja, se a string lida da mesma forma de trás para frente.
  
  # 17- Número par e ímpar:

    - Esta função determina se um número inteiro é par ou ímpar. Um número é considerado par se for divisível por 2 e ímpar caso contrário.

    - Parâmetros:
        numero: Um número inteiro a ser verificado.
    - Retorno:
        Retorna uma string, que será "par" se o número for par e "ímpar" se o número for ímpar.
  
  # 18- Preencher vetor:
  
    - Este procedimento preenche um segundo vetor com os números únicos do primeiro vetor (de 15 posições). Se houver números repetidos, apenas a primeira ocorrência é mantida no novo vetor, e as posições restantes são preenchidas com zeros.
  
    - Exemplo:
  
      - Vetor 1 (Entrada): {1,1,2,3,4,5,4,8,9,4,3,7,1,10,5}
      - Vetor 2 (Resultado): {1,2,3,4,5,8,9,7,10,0,0,0,0,0,0}
  
  
  # 19- Somar elementos de um vetor:

      - Esse código calcula a soma dos elementos de um vetor (lista) de inteiros.
  
  # 20- Variancia:
  
    - Esta função calcula a variância de um vetor de 15 posições. A variância é uma medida estatística que reflete a dispersão dos valores em relação à média. O cálculo é feito com base na fórmula da variância, que considera o quadrado das diferenças entre os valores do vetor e a média aritmética.
  
  # 21- Venda de produtos:
  
    - Este programa gerencia a venda de produtos em uma loja. O usuário deve inserir pares de valores: o código do produto e a quantidade vendida. As vendas são processadas até que o usuário insira 0 0, momento em que o total vendido será exibido e o programa será encerrado.
  
    - Entradas:
  
      -Código do produto (inteiro) e quantidade vendida (inteiro).
  
    - Saída:
  
      -O programa exibe o total das vendas e finaliza ao inserir 0 0.


