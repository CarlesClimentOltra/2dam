package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import com.caclol.t2a4climentcarles.bd.MiBancoOperacional;
import com.caclol.t2a4climentcarles.pojo.Cliente;

public class LoginActivity extends AppCompatActivity implements View.OnClickListener {

    private EditText etUser;
    private EditText etPassword;
    private MiBancoOperacional api;
    private Cliente cliente;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        etUser = (EditText)findViewById(R.id.etUser);
        etPassword = (EditText) findViewById(R.id.etPassword);
        Button bu2 = (Button)findViewById(R.id.buEntrar);
        Button bu3 = (Button)findViewById(R.id.buSalir);

        bu2.setOnClickListener(this);
        bu3.setOnClickListener(this);

        api = MiBancoOperacional.getInstance(this);
        cliente = new Cliente();

    }

    @Override
    public void onClick(View view) {

        switch (view.getId()) {

            case R.id.buEntrar:

                cliente.setNif(etUser.getText().toString());
                cliente.setClaveSeguridad(etPassword.getText().toString());

                Cliente clienteVerificado = api.login(cliente);

                if (clienteVerificado!=null) {
                    Intent i2 = new Intent(LoginActivity.this, MainActivity.class);
                    i2.putExtra("Cliente", clienteVerificado);
                    startActivity(i2);
                }

                break;

            case R.id.buSalir:

                Intent i3 = new Intent(LoginActivity.this, WelcomeActivity.class);
                startActivity(i3);

                break;

        }

    }
}