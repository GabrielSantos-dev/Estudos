# Estrutura Sequencial

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
