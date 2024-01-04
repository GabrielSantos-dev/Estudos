fun Main() {
    val usuario1 = Usuario("Gabriel1")
    val usuario2 = Usuario("Gabriel2")
    val usuario3 = Usuario("Gabriel3")

    val conteudo1 = ConteudoEducacional("Introdução a Programação", 120)
    val conteudo2 = ConteudoEducacional("Fundamentos da matemática para computação", 120)
    val conteudo3 = ConteudoEducacional("Algoritmos e Estrutura de Dados", 60)

    val formacao1 = Formacao("Sistemas de Informação", listOf(conteudo1, conteudo2, conteudo3))
    val formacao2 = Formacao("Ciências da Computação", listOf(conteudo3, conteudo1))
    val formacao3 = Formacao("Inteligência Artificial", listOf(conteudo2, conteudo3))

    formacao1.matricular(usuario1)
    formacao2.matricular(usuario2)
    formacao3.matricular(usuario3)

    println("${usuario1.nome}, Matriculado em: ${usuario1.formacao?.nome}")
    println("${usuario2.nome}, Matriculado em: ${usuario2.formacao?.nome}")
    println("${usuario3.nome}, Matriculado em: ${usuario3.formacao?.nome}")
}