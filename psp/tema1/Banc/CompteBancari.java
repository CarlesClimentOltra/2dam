import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

public class CompteBancari {
    
    private float saldo;
    private String compteBancari;

    public CompteBancari(String compteBancari) {
        this.compteBancari = compteBancari;
    }

    public void ingressar(float diners) {

        this.saldo += diners;

    }

    public void treure(float diners) {

        this.saldo -= diners;

    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public String getCompteBancari() {
        return compteBancari;
    }

    public void setCompteBancari(String compteBancari) {
        this.compteBancari = compteBancari;
    }

    @Override
    public String toString() {
        return "CompteBancari [saldo=" + saldo + ", compteBancari=" + compteBancari + "]";
    }

    

}
