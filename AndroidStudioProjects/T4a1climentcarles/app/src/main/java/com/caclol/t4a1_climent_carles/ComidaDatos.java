package com.caclol.t4a1_climent_carles;

import java.util.ArrayList;

public class ComidaDatos {

    static ArrayList<Comida> COMIDAS = new ArrayList<>();

    static {
        COMIDAS.add(new Comida("Pizza", "Italia", R.drawable.pizza, "https://es.wikipedia.org/wiki/Pizza"));
        COMIDAS.add(new Comida("Paella", "España", R.drawable.paella, "https://es.wikipedia.org/wiki/Paella"));
        COMIDAS.add(new Comida("Kebab", "Turquía", R.drawable.kebab, "https://es.wikipedia.org/wiki/Kebab"));
        COMIDAS.add(new Comida("Hamburguesa", "Estados Unidos", R.drawable.hamburguesa, "https://es.wikipedia.org/wiki/Hamburguesa"));
        COMIDAS.add(new Comida("Pasta", "Italia", R.drawable.pasta, "https://es.wikipedia.org/wiki/Pasta"));
    }

}
