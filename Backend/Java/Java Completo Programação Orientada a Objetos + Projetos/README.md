# Curso Java Completo Programação Orientada a Objetos + Projetos

### Curso ministrado pelo professor Nelio Alves na Udemy.


#### Objetivos de aprendizado:


:heavy_check_mark: Dominar Programação Orientada a Objetos e linguagem Java

:heavy_check_mark: Criar soluções flexíveis, extensíveis e testáveis

:heavy_check_mark: Adquirir a base sólida teórica e prática para ser um desenvolvedor Java de sucesso

:heavy_check_mark: Aplicar o conhecimento de orientação a objetos na construção de soluções para problemas reais

:heavy_check_mark: Compreender diagramas de classe UML, tanto de entidades quanto de serviços

:heavy_check_mark:Desenvolver aplicações para desktop com interface gráfica

:heavy_check_mark: Construir web services usando Spring Boot e boas práticas

:heavy_check_mark:Acessar banco de dados relacionais com comandos SQL (JDBC) e também com ORM (JPA/Hibernate)

:heavy_check_mark:Acessar banco de dados NoSQL

# Resumo das Sessões:

<details>
  <summary>1- Introdução </summary>
    Neste módulo só teve uma simples apresentação do curso
</details>
<details>
  <summary>2- Conceitos de Programação</summary>
  Neste módulo veremos os conceitos mais básicos de programação.

### O que é um algoritmo ?

Algoritmo é uma sequência finita de instruções dadas ao computador para se resolver um problema. É aplicado em diversas áreas do conhecimento.  

Exemplo de uma resolução de um problema do dia a dia, usando algoritmo:

1 - Colocar a roupa em um recipiente

2 - Colocar um pouco de sabão e amaciante

3 - Encher d e água 

4 - Mexer tudo até dissolver todo o sabão

5 - Deixar de molho por vinte minutos 

6 - Esfregar a roupa 

7 - Enxaguar a roupa 

8 - Torcer

### O que é uma Automação ?

Consiste em utilizar máquina(s) para executar o procedimento desejado de forma automática ou semiautomática.

### O que é uma Linguagem de Programação ?

É um conjunto de regras **léxicas** (ortografia) e **sintáticas** (gramática) para se escrever programas.

------

**Léxica:** Diz respeito à correção das palavras "isoladas" (ortografia)

**Exemplo (Português) :**

Cachorro :heavy_check_mark:

Caxorro  :x:

**Exemplo (Programação) :**

main :heavy_check_mark:

maim :x:

------

**Sintática:** Diz respeito à correção das sentenças (gramática).

**Exemplo (Português) :**

O cachorro está com fome :heavy_check_mark:

A cachorro está com fome  :x:

**Exemplo (Programação) :**

x = 2 + y; :heavy_check_mark:

x = + 2 y; :x:

------
</details>
<details>
  <summary>3- Introdução a Linguagem Java</summary>

### O que é Java?
- Linguagem de programação (regras sintáticas) • Plataforma de desenvolvimento e execução
- Bibliotecas (API) • Ambientes de execução.

### Histórico 

- Problemas resolvidos e motivo de seu sucesso: 
- Ponteiros / gerenciamento de memória 
- Portabilidade falha: reescrever parte do código ao mudar de SO 
- Utilização em dispositivos diversos 
- Custo 
- Criada pela Sun Microsystems no meio da década de 1990
-  Adquirida pela Oracle Corporation em 2010

### Aspectos notáveis

- Código compilado para bytecode e executado em máquina virtual (JVM) 
- Portável, segura, robusta 
- Roda em vários tipos de dispositivos 
- Domina o mercado corporativo desde o fim do século 20
- Padrão Android por muitos anos

### **Edições**

- Java ME - Java Micro Edition - dispositivos embarcados e móveis - IoT
  - http://www.oracle.com/technetwork/java/javame
- Java SE - Java Standard Edition - core - desktop e servidores
  - http://www.oracle.com/technetwork/java/javase
  - https://en.wikipedia.org/wiki/Java_version_history
- JavaFX - desktop e RIA
- Java EE - Java Enterprise Edition - aplicações corporativas
  - http://www.oracle.com/technetwork/java/javaee
  - https://en.wikipedia.org/wiki/Java_EE_version_history


#### Contextualização Parte 2 JRE, JDK, bytecodes e máquina virtual

##### 	Bibliotecas - API specification

- ##### https://docs.oracle.com/javase/8/docs/api/
- https://docs.oracle.com/javase/10/docs/api/

- JVM - Java Virtual Machine
  - Máquina virtual do Java - necessário para executar sistemas Java
- http://www.oracle.com/technetwork/java/javase/downloads
  - JRE - Java Runtime Environment
  - Necessário para usuários finais executarem aplicações Java no computador
- Server JRE
  - Necessário para executar sistemas Java em servidores
- JDK - Java Development Kit
  - Necessário para desenvolvedores Java. Contém o JRE, mais ferramentas para desenvolvimento, depuração e monitoramento de projetos Java.

#### **Compilação e interpretação**

- Linguagens compiladas: C, C++
- Linguagens interpretadas: PHP, JavaScript
- Linguagens pré-compiladas + máquina virtual: Java, C#

**Modelo de execução**

![](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programação%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/modelo_de_execucao_java.png)

##### Estrutura de uma aplicação Java

- Uma aplicação é composta por classes
- package = agrupamento LÓGICO de classes relacionadas
- Módulo (Java 9+) = Agrupamento lógico de pacotes relacionados
  - Runtime = Agrupamento físico
- Aplicação = Agrupamento de módulo relacionados

#### Intalação do JDK e Eclipse no Windows

##### **Checklist**

- Certifique-se de que seu Windows esteja devidamente licenciado e atualizado
  - Windows update

- Baixar e instalar o Java JDK
  - http://www.oracle.com/technetwork/java/javase/downloads

- Configurar variáveis de ambiente do sistema
  - Painel de Controle -> Variáveis de Ambiente
  - Variável JAVA_HOME: C:\app.Program Files\Java\jdk-10.0.1
  - Variável Path: incluir C:\app.Program Files\Java\jdk-10.0.1\bin
  - Testar no terminal de comando: java --version

- Baixar e descompactar o Eclipse
  - https://www.eclipse.org/downloads/eclipse-packages/
  - Testar: rodar o Eclipse e escolher um "workspace" (pasta onde você vai salvar seus projetos)

#### Primeiro programa em Java no Eclipse

**Checklist**

- Window -> Perspective -> Open Perspective -> Java
- File -> New -> Java Project
- Package Explorer
  - JRE System Library
  - Pasta "src"
- Criar classe
  - Botão direito no projeto -> New -> Class
  - Escolher um nome para a classe (iniciar com letra Maiúscula)
  - Escolher um nome para o pacote (iniciar com letra Minúscula)
  - Selecionar public static void main
- Classe
  - Package
  - Cláusula import: referências a outros pacotes
  - Classe
  - Método
  - public static void main(String[] args)
- Executar o programa: Botão direito no arquivo -> Run As -> Java Application
- Como fechar e reabrir o projeto? E o workspace?
- Dica: indentação automática: CTRL + SHIFT -> F
</details>
<details>
  <summary>4- Estrutura Sequencial</summary>

**Tipos primitivos em Java (tipo valor)**

![](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programação%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/tipos_primitivos.png)

**String e Object**

![](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programação%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/tipos_primitivos_2.png)


**Valores padrão**

Quando criamos um array ou um objeto com atributos desses tipos, esses são os valores atribuídos inicialmente aos dados.

![](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programação%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/tipos_primitivos_3.png)

**Tipo valor vs. tipo referência**

![](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programação%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/tipos_primitivos_4.png)

#### Restrições e convenções para nomes
- Não pode começar com dígito: use uma letra ou _
- Não usar acentos ou til
- Não pode ter espaço em branco
- Sugestão: use nomes que tenham um significado
#### Convenções

- Camel Case: lastName
  - pacotes
  - atributos
  - métodos
  - variáveis e parâmetros
- Pascal Case: ProductService
  - classes

#### Conversão implícita e casting 

- Conversão implícita entre tipos
- Casting: conversão explícita entre tipos COMPATÍVEIS

#### Os tipos aplicados em Java:
```
public class Tipos {

	public static void main(String[] args) {

		boolean completed = false;
		char gender = 'F';
		char letter = '\u0041';
		byte n1 = 126;
		int n2 = 1000;
		int n3 = 2147483647;
		long n4 = 2147483648L;
		float n5 = 4.5f;
		double n6 = 4.5;
		
		String name = "Maria Green";
		Object obj1 = "Alex Brown";
		Object obj2 = 4.5f;
		
		System.out.println(completed);
		System.out.println(gender);
		System.out.println(letter);
		System.out.println(n1);
		System.out.println(n2);
		System.out.println(n3);
		System.out.println(n4);
		System.out.println(n5);
		System.out.println(n6);
		System.out.println(name);
		System.out.println(obj1);
		System.out.println(obj2);

	}

}
```
</details>
<details>
  <summary>5- Estrutura Condicional</summary>

  #### Expressões comparativas:

São expressões que comparam uma coisa com outra e o resultado sempre é um valor verdade (Verdadeiro ou Falso ).

![operadores_comparativos.png](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programa%C3%A7%C3%A3o%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/operadores_comparativos.png)

#### Expressões Lógicas:

Assim como as expressões comparativas o resultado das expressões lógicas são um valor verdade (Verdadeiro ou Falso )

![operadores_lógicos.jpg](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programa%C3%A7%C3%A3o%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/operadores_l%C3%B3gicos.jpg)

#### Estrutura condicional:

É uma estrutura de controle que permite definir que um certo bloco de comandos somente será executado dependendo de uma condição.

![if_else.png](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programa%C3%A7%C3%A3o%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/if_else.png)
</details>
<details>
  <summary>6 - Estrutura Repetitivas</summary>

#### Estrutura Repetitiva:

O que é estrutura de repetição? Dentro da lógica de programação é uma estrutura que permite executar mais de uma vez o mesmo comando ou conjunto de comandos, de acordo com uma condição ou com um contador.

#### Expressão While:

É uma estrutura de controle que repete um bloco de comandos enquanto uma condição for verdadeira. Quando usar ? : quando não se sabe previamente a quantidade de repetições que será realizada. 

Exemplo:

```java
While (condição){
	instrução 1
	instrução 2
	instrução 3	
}
```

#### Problema exemplo:

Digitar um número e mostrar sua raiz quadrada com três casas decimais, depois repetir o procedimento. Quando o usuário digitar um número negativo (podendo inclusive ser na primeira vez), mostrar uma mensagem "Negative number" e terminar o programa.

```
Enter a number: 25
5.000
Enter another number: 10
3.162
Enter another number: 9
3.000
Enter another number: -4
Negative number

```

Solução :

```java
package app;

import java.util.Locale;
import java.util.Scanner;

public class app.Program {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("ENter a number: ");
		double n = sc.nextDouble();
		
		while(n > 0.0) {
			double sr = Math.sqrt(n);
			//.3f formata a saída com a casa decimal de 3 dígitos
			System.out.printf("%.3f%n", sr);
			System.out.println("Enter another number");
			n = sc.nextDouble();
		}
		
		System.out.println("NEgative number... end!");
		sc.close();
	}
}
```

#### Expressão For (Para)

![Untitled](https://github.com/gabrielcristhie/Estudos/blob/main/Backend/Java/Java%20Completo%20Programa%C3%A7%C3%A3o%20Orientada%20a%20Objetos%20%2B%20Projetos/Imagens/for.png)

**Problema exemplo**

Digitar um número N e depois N valores inteiros. Mostrar a soma dos N valores digitados.

```
How many integer numbers are you going to enter? 3
Value #1: 10
Value #2: 7
Value #3: 8
Sum = 25
```

Solução :

```java
import java.util.Scanner;

public class app.Program {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("How many integer number are you going to enter: ");
		int n = sc.nextInt();
		
		int sum = 0;
		
		for(int i = 1; i<= n ; i++) {
			System.out.print("Value #" + i + ": ");
			int x = sc.nextInt();
			sum += x;
		}
		System.out.println("Sum = "+ sum);
		
		sc.close();
	}
}
```

#### Exercício de fixação - estruturas repetitivas while e for:

Fazer um programa para ler um número N (se for digitado um valor não positivo, mostrar uma mensagem e ler novamente). Em seguida, N valores inteiros. Mostrar o maior dentre os N números digitados. Veja exemplo:

#### Exemplo:

```
Enter N: 0
N must be positive! Try again: -2
N must be positive! Try again: 4
Value #1: 5
Value #2: 4
Value #3: 10
Value #4: 2
Higher = 10
```

Solução :

```java
import java.util.Scanner;

public class app.Program {

	public static void main(String[] args) {
		
		Scanner sc  = new Scanner(System.in);
		
		System.out.print("Enter N: ");
		int n = sc.nextInt();
		while(n <= 0) {
			System.out.println("N nust be positive! try again!: ");
			n = sc.nextInt();
		}
		
		int higher = Integer.MIN_VALUE;
		for(int i = 1 ; i <= n ; i++) {
			System.out.println("Value #"+ i + ": ");
			int x = sc.nextInt();
			if(x > higher) {
				higher = x;
			}
		}

		System.out.println("Higher = "+ higher);
		
		sc.close();

	}

}
```

#### Estrutura repetitiva do-while:

**Problema exemplo**

Digitar um número e mostrar sua raiz quadrada, depois perguntar ao usuário se ele deseja repetir o procedimento (y/n). Caso ele responda 'y', repetir o procedimento.

```
Enter a number: 9
Square root = 3.000
Repeat (y/n)? y
Enter a number: 10
Square root = 3.162
Repeat (y/n)? n
```

Solução :

```java
import java.util.Locale;
import java.util.Scanner;

public class app.Program {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		char resp;
		
		do {
			System.out.print("Enter a number");
			double n = sc.nextDouble();
			double sq = Math.sqrt(n);
			System.out.printf("Square root = %.3f%n", sq);
			
			System.out.print("Repeat? 'y' or 'n'");
			resp = sc.next().charAt(0);
			
		}while(resp != 'n');
		sc.close();
	}

}
```

</details>
<details>
  <summary>7 - Outros tópicos básicos sobre Java</summary>
### Restrições para nomes de variáveis:

- Não pode começar com dígito: use uma letra ou _
- Não pode usar acentos ou til
- Não pode ter espaço em branco
- Sugestão: use nomes que tenham significado

### Exemplo de variáveis escritas de forma errada:

int 5minutes:

int salário;

int salario do funcionário;

### Exemplo de variáveis escritas de forma certa:

int _5minutes;

int salario;

int salarioDoFuncionario;

### Convenções:

- **Camel Case: lastName**
  - pacotes
  - atributos
  - métodos
  - variáveis e parâmetros
- **Pascal Case: ProductService**
  - Classes

### Operadores Bitwise

É possível realizar operações lógicas entre números inteiros em Java. Mas como assim? Operações lógicas não são somente entre valores lógicos (booleanos)?

Sim e Não...

Sim, operações lógicas (E, Ou, Não, Não-E, Não-Ou, Ou-Exclusivo, etc.) são realizadas apenas entre valores lógicos.

Entretanto em Java é possível realizar algumas operações lógicas entre valores numéricos inteiros. Neste caso, as operações lógicas ocorrem no nível de *bits* dos números, ou seja, as operações lógicas ocorrem com as representações binárias dos números.

Para realizar uma operação lógica com números inteiros (a nível de bits) com Java, basta utilizarmos os operadores **&**, **|** e **^**.

### Exemplo:

```java
public class OperacoesBitwise {

    public static void main(String[] args) {

        int a = 10;
        int b = 12;

        System.out.println(a + " | " + b + " = " + (a | b));
        System.out.println(a + " & " + b + " = " + (a & b));
        System.out.println(a + " ^ " + b + " = " + (a ^ b));

        a = 9;
        b = 7;

        System.out.println(a + " | " + b + " = " + (a | b));
        System.out.println(a + " & " + b + " = " + (a & b));
        System.out.println(a + " ^ " + b + " = " + (a ^  b));

    }

}
```

Saída:

```java
10 | 12 = 14
10 & 12 = 8
10 ^ 12 = 6
9 | 7 = 15
9 & 7 = 1
9 ^ 7 = 14
```

### Funções para formatar Strings:

- Formatar: toLowerCase(),toUpperCase(),trim()
- Recortar: substring(inicio),substring (incio,fim)
- Substituir: Replace(char,char),Replace(string,string)
- Buscar: IndexOf,LastIndexOf
- str.Split("")

### Comentários em Java:

Comentário de linha:

É expressado com duas barras, exemplo:

```java
//comentário de linha em Java
```

Comentário de bloco:

É expressado pelo conjunto de de uma barra e um asterisco, exemplo:

```java
/* 
este é o comentário de bloco
*/
```

</details>

<details>
  <summary>8 - Introdução a Programção Orientada a Objetos</summary>

### Classe:

- É um tipo estruturado que pode conter (membros):
  - Atributos (dados / campos)
  - Métodos (funções / operações)
- A classe também pode prover muitos outros recursos, tais como:
  - Construtores
  - Sobrecarga
  - Encapsulamento
  - Herança
  - Polimorfismo
- Exemplos:
  - Entidades: Produto, Cliente, Triangulo
  - Serviços: ProdutoService, ClienteService, EmailService, StorageService
  - Controladores: ProdutoController, ClienteController
  - Utilitários: Calculadora, Compactador
  - Outros (views, repositórios, gerenciadores, etc.)

### Problema exemplo:

Fazer um programa para ler as medidas dos lados de dois triângulos X e Y (suponha medidas
válidas). Em seguida, mostrar o valor das áreas dos dois triângulos e dizer qual dos dois triângulos
possui a maior área.
A fórmula para calcular a área de um triângulo a partir das medidas de seus lados a, b e c é a
seguinte (fórmula de Heron):
"imagem do calculo"
"imagem do exemplo"

#### Solução:

```java
import java.util.Locale;
import java.util.Scanner;
  public class Program {
    public static void main(String[] args) {
    Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        double xA, xB, xC, yA, yB, yC;
          System.out.println("Enter the measures of triangle X: ");
          xA = sc.nextDouble();
          xB = sc.nextDouble();
          xC = sc.nextDouble();
          System.out.println("Enter the measures of triangle Y: ");
          yA = sc.nextDouble();
          yB = sc.nextDouble();
          yC = sc.nextDouble();
double p = (xA + xB + xC) / 2.0;
double areaX = Math.sqrt(p * (p - xA) * (p - xB) * (p - xC));
p = (yA + yB + yC) / 2.0;
double areaY = Math.sqrt(p * (p - yA) * (p - yB) * (p - yC));
System.out.printf("Triangle X area: %.4f%n", areaX);
System.out.printf("Triangle Y area: %.4f%n", areaY);
if (areaX > areaY) {
System.out.println("Larger area: X");}
else {
System.out.println("Larger area: Y");}
sc.close();
}}
```

</details>

<details>
  <summary> 9 - Construtores, palavra this, sobrecarga, encapsulamento </summary>

### Construtores:

  • É uma operação especial da classe, que executa no momento da
instanciação do objeto

  • Usos comuns:
    • Iniciar valores dos atributos
    • Permitir ou obrigar que o objeto receba dados / dependências no momento de sua
      instanciação (injeção de dependência)
  • Se um construtor customizado não for especificado, a classe disponibiliza o
    construtor padrão:
        Product p = new Product();
  • É possível especificar mais de um construtor na mesma classe (sobrecarga)

### Palavra THIS:

• É uma referência para o próprio objeto
• Usos comuns:
    • Diferenciar atributos de variáveis locais
    • Passar o próprio objeto como argumento na chamada de um método ou
      construtor

### Sobrecarga

  • É um recurso que uma classe possui de oferecer mais de uma
operação com o mesmo nome, porém com diferentes listas de
parâmetros.

### Encapsulamento
  • É um princípio que consiste em
esconder detalhes de implementação
de uma classe, expondo apenas
operações seguras e que mantenham
os objetos em um estado consistente.
  • Regra de ouro: o objeto deve sempre
estar em um estado consistente, e a
própria classe deve garantir isso.

### Modificadores de Acesso

  • private: o membro só pode ser acessado na própria classe
  • (nada): o membro só pode ser acessado nas classes do mesmo pacote
  • protected: o membro só pode ser acessado no mesmo pacote, bem como em
subclasses de pacotes diferentes
  • public: o membro é acessado por todas classes (ao menos que ele resida em
um módulo diferente que não exporte o pacote onde ele está)

</details>
<details>
  <summary>10 - Comportamento de memória, arrays, listas</summary>

### Referência vs. tipos valor 

Variáveis cujo tipo são classes não devem ser entendidas como caixas, mas sim
“tentáculos” (ponteiros) para caixas
Product p1, p2;
p1 = new Product("TV", 900.00, 0);
p2 = p1;

### Valor "null"

Tipos referência aceitam o valor "null", que indica que a variável aponta pra ninguém.
  Product p1, p2;
  p1 = new Product("TV", 900.00, 0);
  p2 = null;

### Tipos primitivos são tipos valor
  Em Java, tipos primitivos são tipos valor. Tipos valor são CAIXAS e não ponteiros. 
  double x, y;
  x = 10;
  y = x;

### Garbage Collector

• É um processo que automatiza o gerenciamento de memória de um
programa em execução
• O garbage collector monitora os objetos alocados dinamicamente
pelo programa (no heap), desalocando aqueles que não estão mais
sendo utilizados.

### Boxing, Unboxing e Wrapper
											
• Boxing é o processo de conversão de um objeto tipo valor para um objeto tipo referência compatível.

• Unboxing é o processo de conversão de um objeto tipo referênciap ara um objeto tipo valor compatível.

• Wrapper Classes são classes equivalentes aos tipos primitivos
	• Boxing e Unboxing é natural na linguagem
	• Uso comum: Campos de entidades em sistemas de informação(Importante!)
	  • Pois tipos de referência (classes) aceitam valor null e usufruem dos recursos OO

### Foreach

Sintaxe opcional e simplificada para percorrer coleções.
	
	Sintaxe:
	
```
	for(tipo apelido: coleção){
	<comandos>
	}
```	
### Listas

• Lista é uma estrutura de dados homogênea (Dados do mesmo tipo) Então dentro de uma lista você vai guardar apenas dados do mesmo tipo.
• Lista também é uma coleção ordenada. Isso significa que os elementos são acessados por meio de posições.		
• Lista inicial é vazia e os seus elementos são alocados sob demanda.
• No Java o tipo para a gente trabalhar com lista e o tipo List. Classes que implementam essas listas: ArrayList, LinkedList, etc.
• List é uma interface, por isso não é possível instacia-la.

```
Exercicio de Listas:		
Fazer um programa para ler um número inteiro N e depois os dados (id, nome e salario) de
N funcionários. Não deve haver repetição de id.
Em seguida, efetuar o aumento de X por cento no salário de um determinado funcionário.
Para isso, o programa deve ler um id e o valor X. Se o id informado não existir, mostrar uma
mensagem e abortar a operação. Ao final, mostrar a listagem atualizada dos funcionários,
conforme exemplos.
Lembre-se de aplicar a técnica de encapsulamento para não permitir que o salário possa
ser mudado livremente. Um salário só pode ser aumentado com base em uma operação de
aumento por porcentagem dada
```
Classe Main:
```
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Program {
	public static void main(String[] args) {
		List<String> list = new ArrayList<>();
		list.add("Maria");
		list.add("Alex");
		list.add("Bob");
		list.add("Anna");
		list.add(2, "Marco");
		System.out.println(list.size());
		for (String x : list) {
			System.out.println(x);
		}
		System.out.println("---------------------");
		list.removeIf(x -> x.charAt(0) == 'M');
		for (String x : list) {
			System.out.println(x);
		}
		System.out.println("---------------------");
		System.out.println("Index of Bob: " + list.indexOf("Bob"));
		System.out.println("Index of Marco: " + list.indexOf("Marco"));
		System.out.println("---------------------");
		List<String> result = list.stream().filter(x -> x.charAt(0) == 'A').collect(Collectors.toList());
		for (String x : result) {
			System.out.println(x);
		}
		System.out.println("---------------------");
		String name = list.stream().filter(x -> x.charAt(0) == 'J').findFirst().orElse(null);
		System.out.println(name);
	}
}
```
Classe Employee:
```
public class Employee {
	
	private Integer id;
	private String name;
	private Double salary;
	
	public Employee() {
		
	}
	
	public Employee(Integer id, String name, Double salary) {
		super();
		this.id = id;
		this.name = name;
		this.salary = salary;
	}
	
	public Integer getId() {
		return id;
	}
	public void setId(Integer id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Double getSalary() {
		return salary;
	}
	public void setSalary(Double salary) {
		this.salary = salary;
	}
	
```
### Matrizes 		

• Em programação, "matriz" é o nome dado a arranjos bidimensionais
	• Atenção: "vetor de vetores"
• Arranjo (array) é uma estrutura de dados: 
	• Homogênea (dados do mesmo tipo)
	• Ordenada (elementos acessados por meio de posições)
	• Alocada de uma vez só, em um bloco contíguo de memória
• Vantagens:
	• Acesso imediato aos elementos pela sua posição
• Desvantagens:
	• Tamanho fixo
	• Dificuldade para se realizar inserções e deleções
		
Exercicio de Matrizes:

```
Fazer um programa para ler um número inteiro N e uma matriz de
ordem N contendo números inteiros. Em seguida, mostrar a diagonal
principal e a quantidade de valores negativos da matriz.
```

```
import java.util.Scanner;

public class Program {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int [][] mat = new int [n][n];
		
		//acessando o numero de linhas e colunas 
		for (int i=0;i<mat.length;i++) {
			for (int j=0;j<mat[i].length;j++) {
				mat[i][j] = sc.nextInt();
			}
		}
		 System.out.println("Main diagonal");
		 for (int i=0; i<mat.length; i++) {
			 System.out.println(mat[i][i] + " ");
		 }
		 
		 int count = 0;
		 //acessando o numero de linhas e colunas 
		 for (int i=0;i<mat.length;i++) {
				for (int j=0;j<mat[i].length;j++) {
					if(mat[i][j] < 0) {
						count++;
					}}
			}
		 
		 System.out.println("Negative numbers: " + count);
		
		sc.close();
	}
}
```	
</details>
<details>
  <summary>11 - Tópicos especiais em Java</summary>

### Trabalhando com Datas - Date

Demonstração de impressão de datas	
```
SimpleDateFormat sdf1 = new SimpleDateFormat("dd/MM/yyyy");
SimpleDateFormat sdf2 = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
SimpleDateFormat sdf3 = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
sdf3.setTimeZone(TimeZone.getTimeZone("GMT"));
Date x1 = new Date();
Date x2 = new Date(System.currentTimeMillis());
Date x3 = new Date(0L);
Date x4 = new Date(1000L * 60L * 60L * 5L);
Date y1 = sdf1.parse("25/06/2018");
Date y2 = sdf2.parse("25/06/2018 15:42:07");
Date y3 = Date.from(Instant.parse("2018-06-25T15:42:07Z"));
System.out.println("x1: " + x1);
System.out.println("x2: " + x2);
System.out.println("x3: " + x3);
System.out.println("x4: " + x4);
System.out.println("y1: " + y1);
System.out.println("y2: " + y2);
System.out.println("y3: " + y3);
System.out.println("-------------");
System.out.println("x1: " + sdf2.format(x1));
System.out.println("x2: " + sdf2.format(x2));
System.out.println("x3: " + sdf2.format(x3));
System.out.println("x4: " + sdf2.format(x4));
System.out.println("y1: " + sdf2.format(y1));
System.out.println("y2: " + sdf2.format(y2));
System.out.println("y3: " + sdf2.format(y3));
System.out.println("-------------");
System.out.println("x1: " + sdf3.format(x1));
System.out.println("x2: " + sdf3.format(x2));
System.out.println("x3: " + sdf3.format(x3));
System.out.println("x4: " + sdf3.format(x4));
System.out.println("y1: " + sdf3.format(y1));
System.out.println("y2: " + sdf3.format(y2));
System.out.println("y3: " + sdf3.format(y3));
```

</details>
<details>
  <summary>12 - </summary>

</details>
<details>
  <summary>13 - </summary>

</details>
<details>
  <summary>14 - </summary>

</details>
<details>
  <summary>15 - </summary>

</details>
<details>
  <summary>16 - </summary>

</details>
<details>
  <summary>17 - </summary>

</details>
<details>
  <summary>18 - </summary>

</details>
<details>
  <summary>19 - </summary>

</details>
<details>
  <summary>20 - </summary>

</details>
<details>
  <summary>21 - </summary>

</details>
<details>
  <summary>22 - </summary>

</details>
<details>
  <summary>23 - </summary>

</details>
<details>
  <summary>24 - </summary>

</details>
<details>
  <summary>25 - </summary>

</details>
<details>
  <summary>26 - </summary>

</details>
<details>
  <summary>27 - </summary>

</details>

