package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Spinner;

import com.caclol.t2a4climentcarles.bd.MiBancoOperacional;
import com.caclol.t2a4climentcarles.pojo.Cliente;
import com.caclol.t2a4climentcarles.pojo.Cuenta;

import java.time.temporal.ChronoUnit;
import java.util.ArrayList;

public class MovementsActivity extends AppCompatActivity implements AdapterView.OnItemSelectedListener {

    static String valorSpnCuentas;
    private Spinner spnCuentas;
    private Cliente clienteVerificado;
    private MiBancoOperacional api;
    private ArrayList<String> listaCuentas;
    private ArrayAdapter<String> spnCuentasAdaptador;
    private RecyclerView mRecyclerView;
    private MovementsAdapter mAdapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_movements);

        api = MiBancoOperacional.getInstance(this);
        clienteVerificado = (Cliente) this.getIntent().getSerializableExtra("Cliente");
        spnCuentas = (Spinner) findViewById(R.id.spnCuentas);
        listaCuentas = new ArrayList<>();

        for (Cuenta cuenta: api.getCuentas(clienteVerificado)) {
            listaCuentas.add(cuenta.getNumeroCuenta());
        }

        spnCuentasAdaptador = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_item, listaCuentas);

        spnCuentasAdaptador.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spnCuentas.setAdapter(spnCuentasAdaptador);

        spnCuentas.setOnItemSelectedListener(this);

    }

    @Override
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long l) {

        String spnSelect = (String) adapterView.getItemAtPosition(i);

        mRecyclerView = findViewById(R.id.movementsRecyclerView);

        mRecyclerView.setHasFixedSize(true);

        LinearLayoutManager layoutManager = new LinearLayoutManager(this);

        mRecyclerView.setLayoutManager(layoutManager);

        for (Cuenta cuenta: api.getCuentas(clienteVerificado)) {

            if (spnSelect.equals(cuenta.getNumeroCuenta()))
                mAdapter = new MovementsAdapter(api.getMovimientos(cuenta));

        }

        //mAdapter = new AccountsAdapter(clienteVerificado);

        mRecyclerView.setAdapter(mAdapter);

    }

    @Override
    public void onNothingSelected(AdapterView<?> adapterView) {

    }
}