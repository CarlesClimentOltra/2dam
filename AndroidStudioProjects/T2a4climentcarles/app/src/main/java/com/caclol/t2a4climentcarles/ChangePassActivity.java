package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EdgeEffect;
import android.widget.EditText;

import com.caclol.t2a4climentcarles.bd.MiBancoOperacional;
import com.caclol.t2a4climentcarles.pojo.Cliente;

public class ChangePassActivity extends AppCompatActivity implements View.OnClickListener {

    private MiBancoOperacional api;
    private Cliente clienteVerificado;
    private EditText etContrasenaActual;
    private EditText etNuevaContrasena;
    private EditText etRepiteContrasena;
    private Button buGuardar;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_change_pass);

        api = MiBancoOperacional.getInstance(this);
        clienteVerificado = (Cliente) this.getIntent().getSerializableExtra("Cliente");
        etContrasenaActual = (EditText) findViewById(R.id.etContrasenaActual);
        etNuevaContrasena = (EditText) findViewById(R.id.etNuevaContrasena);
        etRepiteContrasena = (EditText) findViewById(R.id.etRepiteContrasena);
        buGuardar = (Button) findViewById(R.id.buGuardar);



        buGuardar.setOnClickListener(this::onClick);


    }

    @Override
    public void onClick(View view) {

        switch (view.getId()) {

            case R.id.buGuardar:

                clienteVerificado.setClaveSeguridad(etNuevaContrasena.getText().toString());

                if(api.changePassword(clienteVerificado)==1) {
                    Intent i = new Intent(ChangePassActivity.this, MainActivity.class);
                    i.putExtra("Cliente", clienteVerificado);
                    startActivity(i);
                }
                break;

        }

    }
}