# TypeScript

## O que é TypeScript ?

O TypeScript é um superset da linguagem JavaScript criado pela Microsoft para permitir a escrita de scripts com a utilização de tipagem estática, orientação a objetos, e facilitando a escrita de código com uma sintaxe de fácil compreensão.
 
## ECMAScript 

ECMAScript é uma especificação de linguagens de script com marca registrada padronizada pela Ecma International nos padrões ECMA-262 e ISO/IEC 16262. Algumas das implementações que conhecemos desta padronização estão no JavaScript, JScript e também no ActionScript, os quais são bastante utilizados em aplicações web no client-side.

## Programação Orientada a Objetos em TypeScript

O TypeScript possibilita a inclusão do paradigma Programação Orientada a Objetos no JavaScript, sendo assim vamos aos exemplos de POO aplicados no TypeScript.

### Encapsulamento

O conceito de encapsulamento define uma forma de estruturar o código para que um determinado bloco tenha pontos de acesso específicos para o ambiente externo, o que garante a visibilidade e acessibilidade controladas dos elementos internos da classe.

```
private _saldo: number;
get Saldo(): number { return this._saldo; }

```
### Herança

Segundo o princípio da herança, uma classe (filha) pode herdar de outra (pai) características e comportamentos já definidas nessa segunda, sem necessidade de redefinição. A sintaxe em TypeScript para implementar esse conceito é semelhante à da linguagem Java, onde se usa a palavra reservada extends após o nome da classe filha, seguida do nome da classe pai.

```
module Banco {
  class Conta { ...código aqui.. }
  class ContaCorrente extends Conta { ...código aqui.. }
  class Poupanca extends Conta { ...código aqui.. }
}
```

### Abstração

Abstração é a capacidade de destacar as características dos elementos do mundo real que serão úteis para o sistema. Essas características são reunidas na forma de classes, que representam as “coisas” reais a serem utilizadas no domínio do problema.

Classe abstrata:

```
export module BancoDevmedia
{
   export interface Taxa { MudarTaxa(valor: number); }
   export class ContaCorrente implements Taxa {
       MudarTaxa(valor: number) { }
   }
}
```

### Polimorfismo

Polimorfismo é um conceito a partir do qual objetos podem assumir formas diferentes em determinadas situações, mas mantendo uma relação com sua definição inicial de nível mais alto. Aliado ao conceito de herança, o polimorfismo indica que um objeto do tipo de uma classe pai pode assumir a forma de qualquer uma de suas classes filhas, mas não o inverso.
 
Exemplo:

```
class ContaCorrente extends Conta
{
   TrocaTaxa(valor: number)
   {
       if (this.Saldo > 50000) { valor = 0; }
       else { valor += 10.00; }
       this.Saldo =+ valor;
   }
}
```
O método TrocarTaxa foi originalmente definido na classe Conta, no entanto, foi sobrescrito na classe filha ContaCorrente para apresentar um comportamento específico quando acionado.

### 



# Fontes Usadas Para Estudo do TypeScript:

   * [DevMedia](https://www.devmedia.com.br/introducao-ao-typescript/36729#TypeScript)
   * [DigitalInnovationOne](https://web.digitalinnovation.one/course/introducao-ao-typescript-explorando-classes-tipos-e-interfaces/learning/3fef7cb5-3637-4a05-8af3-e6e327971980?back=/track/capgemini-fullstack-java-and-angular)
