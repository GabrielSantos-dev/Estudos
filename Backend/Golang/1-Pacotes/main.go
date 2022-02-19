package main

import (
	"fmt"
	"github.com/badoux/checkmail"
	"modulo/auxiliar"
)

func main() {

	fmt.Println("Escrevendo no arquivo Main")
	auxiliar.Escrever()

	erro := checkmail.ValidateFormat("profzehruelagmail.com")
	fmt.Println(erro)
}
