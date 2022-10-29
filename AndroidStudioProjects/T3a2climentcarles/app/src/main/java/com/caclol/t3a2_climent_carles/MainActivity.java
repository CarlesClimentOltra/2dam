package com.caclol.t3a2_climent_carles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener{

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ImageButton botonInformacion = (ImageButton)findViewById(R.id.botonInformacion);
        ImageButton botonMas = (ImageButton)findViewById(R.id.botonMas);
        ImageButton botonPapelera = (ImageButton)findViewById(R.id.botonPapelera);
        ImageButton botonCamara = (ImageButton)findViewById(R.id.botonCamara);
        ImageButton botonHerramienta = (ImageButton)findViewById(R.id.botonHerramienta);
        ImageButton botonApagado = (ImageButton)findViewById(R.id.botonApagado);

        botonInformacion.setOnClickListener(this);
        botonMas.setOnClickListener(this);
        botonPapelera.setOnClickListener(this);
        botonCamara.setOnClickListener(this);
        botonHerramienta.setOnClickListener(this);
        botonApagado.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {


        TextView tv2 = (TextView)findViewById(R.id.tv2);
        Intent i = new Intent(MainActivity.this, BlankActivity.class);

        switch (view.getId()) {

            case R.id.botonInformacion:

                i.putExtra("texto", "Informacion");
                startActivity(i);

                break;

            case R.id.botonMas:

                i.putExtra("texto", "Mas");
                startActivity(i);

                break;

            case R.id.botonPapelera:

                i.putExtra("texto", "Papelera");
                startActivity(i);

                break;

            case R.id.botonCamara:

                i.putExtra("texto", "Cámara");
                startActivity(i);

                break;

            case R.id.botonHerramienta:

                i.putExtra("texto", "Herramientas");
                startActivity(i);

                break;

            case R.id.botonApagado:

                i.putExtra("texto", "Apagar");
                startActivity(i);

                break;

        }

    }
}