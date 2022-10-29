package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.caclol.t2a4climentcarles.pojo.Cliente;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    private TextView tvBienvenida;
    private Cliente clienteVerificado;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tvBienvenida = (TextView)findViewById(R.id.tvBienvenida);
        clienteVerificado = (Cliente) this.getIntent().getSerializableExtra("Cliente");
        tvBienvenida.setText("Bienvenido/a " + clienteVerificado.getNombre());

        Button buPosicionGlobal = (Button)findViewById(R.id.buPosicionGlobal);
        Button buMovimientos = (Button)findViewById(R.id.buMovimientos);
        Button buTransferencias = (Button)findViewById(R.id.buTransferencias);
        Button buCambiarContrasena = (Button)findViewById(R.id.buCambiarContrasena);
        Button buPromociones = (Button)findViewById(R.id.buPromociones);
        Button buCajeros = (Button)findViewById(R.id.buCajeros);
        Button buSalirMain = (Button)findViewById(R.id.buSalirMain);

        buPosicionGlobal.setOnClickListener(this);
        buMovimientos.setOnClickListener(this);
        buTransferencias.setOnClickListener(this);
        buCambiarContrasena.setOnClickListener(this);
        buPromociones.setOnClickListener(this);
        buCajeros.setOnClickListener(this);
        buSalirMain.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {

        switch (view.getId()) {

            case R.id.buPosicionGlobal:

                Intent i4 = new Intent(MainActivity.this, GlobalPositionActivity.class);
                i4.putExtra("Cliente", clienteVerificado);
                startActivity(i4);

                break;

            case R.id.buMovimientos:

                Intent i5 = new Intent(MainActivity.this, MovementsActivity.class);
                i5.putExtra("Cliente", clienteVerificado);
                startActivity(i5);

                break;

            case R.id.buTransferencias:

                Intent i6 = new Intent(MainActivity.this, TransferActivity.class);
                startActivity(i6);

                break;

            case R.id.buCambiarContrasena:

                Intent i7 = new Intent(MainActivity.this, ChangePassActivity.class);
                i7.putExtra("Cliente", clienteVerificado);
                startActivity(i7);

                break;

            case R.id.buPromociones:

                break;

            case R.id.buCajeros:

                break;

            case R.id.buSalirMain:

                Intent i10 = new Intent(MainActivity.this, LoginActivity.class);
                startActivity(i10);
                break;


        }

    }
}