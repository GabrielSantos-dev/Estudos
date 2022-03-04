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
  
</details>
<details>
  <summary>8 - </summary>
  
</details>
<details>
  <summary>9 - </summary>
  
</details>
<details>
  <summary>10 - </summary>
  
</details>
<details>
  <summary>11 - </summary>
  
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


