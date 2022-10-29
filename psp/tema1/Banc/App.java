import java.io.IOException;

public class App {
    
    public static void main(String[] args) throws IOException {
        
        CompteBancari cb= new CompteBancari("compteSuissa");

        CaixerBanc c1 = new CaixerBanc("Bankia", cb);

        CaixerBanc c2 = new CaixerBanc("BBVA", cb);

        CaixerBanc c3 = new CaixerBanc("INGDIRECT", cb);

        System.out.println("Estat inicial del compte: "+c1.mostrarSaldo());

        c1.ingressar(200);
        c1.treure(100);

        System.out.println("Estat final del compte: "+c1.mostrarSaldo());

    }

}
