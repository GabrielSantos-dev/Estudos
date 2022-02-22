# Introdução a Linguagem Java

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

