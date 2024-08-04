public class Iphone implements ReprodutorMusical, AparelhoTelefonico, NavegadorInternet {
    private int anoDeLancamento;
    private String quantidadeDeMemoria;

    public Iphone(int anoDeLancamento, String quantidadeDeMemoria) {
        this.anoDeLancamento = anoDeLancamento;
        this.quantidadeDeMemoria = quantidadeDeMemoria;
    }

    @Override
    public void tocar() {
        System.out.println("Tocando música...");
    }

    @Override
    public void pausar() {
        System.out.println("Música pausada.");
    }

    @Override
    public void selecionarMusica(String musica) {
        System.out.println("Selecionando música: " + musica);
    }

    @Override
    public void ligar(String numero) {
        System.out.println("Ligando para: " + numero);
    }

    @Override
    public void atender() {
        System.out.println("Atendendo chamada...");
    }

    @Override
    public void iniciarCorreioVoz() {
        System.out.println("Iniciando correio de voz...");
    }

    @Override
    public void exibirPagina(String url) {
        System.out.println("Exibindo página: " + url);
    }

    @Override
    public void adicionarNovaAba() {
        System.out.println("Nova aba adicionada.");
    }

    @Override
    public void atualizarPagina() {
        System.out.println("Página atualizada.");
    }

    public int getAnoDeLancamento() {
        return anoDeLancamento;
    }

    public void setAnoDeLancamento(int anoDeLancamento) {
        this.anoDeLancamento = anoDeLancamento;
    }

    public String getQuantidadeDeMemoria() {
        return quantidadeDeMemoria;
    }

    public void setQuantidadeDeMemoria(String quantidadeDeMemoria) {
        this.quantidadeDeMemoria = quantidadeDeMemoria;
    }
}