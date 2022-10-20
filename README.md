# Grafos: Lista de Adjacência

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">
Ao se pensar em definir uma estrutura para a representação de grafos é preciso inicialmente considerar sua <b>densidade</b>, ou seja, sua relação entre vértices (V) e arestas (E). 
</p>

>
> Se um grafo apresenta muitas conexões ou arestas dentre os múltiplos vértices existentes esse é classificado como grafo **denso**. Segundo *Cormen et. al.* [1], um grafo é dito **denso**, se somente se, o número de arestas $|E|$ é próximo de $|V|^2$.
>

>
> Um grafo considerado não **denso** é nomeado como grafo **esparso**. Nesse contexto, o conjunto $|E|$ de arestas se apresenta como sendo muito menor que $|V|^2$.
> 

<p align="justify">
Considerando as terminologias acima citadas, é possível, pela identificação da <i>densidade</i> do grafo, definir a forma mais adequada de representação da estrutura. Objetiva-se com isso maximizar o desempenho de algoritmos aplicáveis,bem como, reduzir o tempo de execução. 
</p>

<p align="justify">
Em literatura, os três modelos clássicos para representação são: matriz de (i) incidência e (ii) adjacência e (iii) lista de adjacência. 
</p>



# Compilação e Execução

A estrutura de grafo disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

# Referências

<p align="justify">
[1] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein. Algoritmos:  Teoria e Prática. 3a edição. Elsevier, 2012. ISBN 9788535236996
</p>

# Contatos

<div style="display: inline-block;">
<a href="https://t.me/michelpires369">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 
</a>

<a href="https://www.linkedin.com/in/michelpiressilva/">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>

</div>

<p> </p>


<a style="color:black" href="mailto:michel@cefetmg.br?subject=[GitHub]%20Source%20Dynamic%20Lists">
✉️ <i>michel@cefetmg.br</i>
</a>

