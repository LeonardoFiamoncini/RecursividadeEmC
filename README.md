# RecursividadeEmC
Exercícios elaborados através da aplicação do conceito de Recursividade na Linguagem de Programação C.

Questão 01) Implementar uma função recursiva para calcular o produto de dois números inteiros arbitrários usando
apenas o operador de soma.

Questão 02) Implementar uma função recursiva para imprimir uma String de maneira invertida.

Questão 03) Implementar uma função para efetuar o cálculo de uma potência de modo recursivo (fornecer base e
expoente).

Questão 04) Implementar uma função recursiva para efetuar o cálculo do Máximo Divisor Comum (MDC) de 2
números, pelo método do algoritmo de Euclides. O algoritmo de Euclides computa do MDC a partir
de sucessivas divisões. Considere o cálculo do MDC para os números 48 e 30.

    1º) divide-se o número maior pelo número menor;
    48 / 30 = 1 (com resto 18)

    2º) divide-se o divisor 30, que é divisor da divisão anterior, por 18, que é o resto da divisão anterior, e
    assim sucessivamente;
    30 / 18 = 1 (com resto 12)
    18 / 12 = 1 (com resto 6)
    12 / 6 = 2 (com resto zero - divisão exata)
    
No caso, o divisor da divisão exata é 6, então MDC (48,30) = 6.
