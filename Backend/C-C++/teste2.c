mutex mbuf;     // controla o acesso ao buffer
condition item; // condição: existe item no buffer
condition vaga; // condição: existe vaga no buffer

task produtor()

{
    while (1)
    {
        ...                    // produz um item
            lock(mbuf);        // obtem o mutex do buffer
        while (num_itens == N) // enquanto o buffer estiver cheio
            wait(vaga, mbuf);  // espera uma vaga, liberando o buffer
        ...                    // deposita o item no buffer
            signal(item);      // sinaliza um novo item
        unlock(mbuf);          // libera o buffer
    }
}

task consumidor()
{
    while (1)
    {
        lock(mbuf);            // obtem o mutex do buffer
        while (num_items == 0) // enquanto o buffer estiver vazio
            wait(item, mbuf);  // espera um item, liberando o buffer
        ...                    // retira o item no buffer
            signal(vaga);      // sinaliza uma vaga livre
        unlock(mbuf);          // libera o buffer
        ...                    // consome o item retirado do buffer
    }
}