public class CaixerBanc {
    
    private String nomBanc;
    private CompteBancari compteBancari;

    public CaixerBanc (String nomBanc, CompteBancari compteBancari) {

        this.nomBanc = nomBanc;
        this.compteBancari = compteBancari;

    }

    public void ingressar(float diners) {

        this.compteBancari.ingressar(diners);

    }

    public void treure(float diners) {

        this.compteBancari.treure(diners);

    }

    public float mostrarSaldo() {

        return this.compteBancari.getSaldo();

    }

}
