//Tratamento da Tag Input
const input = document.getElementById('input') as HTMLInputElement;

input.addEventListener('input', (event) => {
    cont i = event.currentTarget as HTMLInputElement;
    console.log(i.value);
    
});

//Generic Types

function adicionaApendiceALista<T>(array: T[], valor: T){
    return array.map(()) => valor);
}

adicionaApendiceALista([1, 2 , 3], 'D');

//Condicionais a partir de parâmetros

interface IUsuario {
    id: string;
    email: string;
}

interface IAdmin {
    cargo: 'gerente' | 'coordenador' | 'supervisor';
}

function redirecione(usuario: IUsuario | IAdmin){
    if ('cargo' in usuario){
        //redirecionar para a área de administração
    } else {
        //redirecionar para a área do usuário
    }
}