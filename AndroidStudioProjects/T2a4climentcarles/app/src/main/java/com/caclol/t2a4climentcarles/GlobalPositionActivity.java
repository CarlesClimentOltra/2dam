package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

import com.caclol.t2a4climentcarles.bd.MiBancoOperacional;
import com.caclol.t2a4climentcarles.pojo.Cliente;
import com.caclol.t2a4climentcarles.pojo.Cuenta;

import java.util.ArrayList;

public class GlobalPositionActivity extends AppCompatActivity {

    private RecyclerView mRecyclerView;
    private AccountsAdapter mAdapter;
    private ArrayList<Cuenta> cuentas;
    private Cliente clienteVerificado;
    private MiBancoOperacional api;

    //private RecyclerView mRecyclerView;
    //private DatosAdapter mAdapter;
    //private ArrayList<Comida> datos = ComidaDatos.COMIDAS;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_global_position);

        clienteVerificado = (Cliente) this.getIntent().getSerializableExtra("Cliente");

        api = MiBancoOperacional.getInstance(this);
        cuentas = api.getCuentas(clienteVerificado);

        mRecyclerView = findViewById(R.id.posicionRecyclerView);

        mRecyclerView.setHasFixedSize(true);

        LinearLayoutManager layoutManager = new LinearLayoutManager(this);

        mRecyclerView.setLayoutManager(layoutManager);

        mAdapter = new AccountsAdapter(cuentas);

        mRecyclerView.setAdapter(mAdapter);

    }
}