package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;

public class TransferActivity extends AppCompatActivity implements RadioGroup.OnCheckedChangeListener, View.OnClickListener {
    static String valorSpinnerCuentas, valorSpinnerCuentas2, valorSpinnerDivisas;
    private Spinner cmbCuentas;
    private Spinner cmbCuentas2;
    private Spinner cmbDivisas;
    private RadioGroup rgTransferencia;
    private RadioButton rbAjenaTransferencia;
    private RadioButton rbPropiaTransferencia;
    private TextView tvCantidadTransferencia;
    private EditText etCantidadTransferencia;
    private EditText etCuentaAjena;
    private Button buEnviarTransferencia;
    private Button buCancelarTransferencia;
    private CheckBox cbJustificante;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_transfer);

        tvCantidadTransferencia = (TextView) findViewById(R.id.tvCantidadTransferencia);
        etCantidadTransferencia = (EditText) findViewById(R.id.etCantidadTransferencia);
        rgTransferencia = (RadioGroup) findViewById(R.id.rgTransferencia);
        rbAjenaTransferencia = (RadioButton) findViewById(R.id.rbAjenaTransferencia);
        rbPropiaTransferencia = (RadioButton) findViewById(R.id.rbPropiaTransferencia);
        etCuentaAjena = (EditText) findViewById(R.id.etCuentaAjena);
        buEnviarTransferencia = (Button) findViewById(R.id.buEnviarTransferencia);
        buCancelarTransferencia = (Button) findViewById(R.id.buCancelarTransferencia);
        cbJustificante = (CheckBox) findViewById(R.id.cbJustificante);

        final String[] cuentas = new String[]{"ES60-2450-5476-28-1254678", "FG45-2646-8654-76-8625478", "DG43-5389-2437-46-7646332", "JU65-7432-9353-76-2464676"};
        final String[] divisas = new String[]{"€", "$", "Kr", "Fr"};
        ArrayAdapter<String> adaptador = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_item, cuentas);
        ArrayAdapter<String> adaptadorDivisas = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_item, divisas);

        cmbCuentas = (Spinner)findViewById(R.id.cmbCuentas);
        adaptador.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        cmbCuentas.setAdapter(adaptador);

        cmbCuentas2 = (Spinner)findViewById(R.id.cmbCuentas2);
        adaptador.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        cmbCuentas2.setAdapter(adaptador);

        cmbDivisas = (Spinner)findViewById(R.id.cmbDivisas);
        adaptadorDivisas.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        cmbDivisas.setAdapter(adaptadorDivisas);

        rgTransferencia.setOnCheckedChangeListener(this::onCheckedChanged);
        buEnviarTransferencia.setOnClickListener(this::onClick);
        buCancelarTransferencia.setOnClickListener(this::onClick);

        cmbCuentas.setOnItemSelectedListener(
                new AdapterView.OnItemSelectedListener() {
                    public void onItemSelected(AdapterView<?> parent, android.view.View v, int position, long id) {
                        valorSpinnerCuentas = String.valueOf(parent.getItemAtPosition(position));
                    }
                    public void onNothingSelected(AdapterView<?> parent) {
                        //lblMensaje.setText("");
                    }
                });

        cmbCuentas2.setOnItemSelectedListener(
                new AdapterView.OnItemSelectedListener() {
                    public void onItemSelected(AdapterView<?> parent, android.view.View v, int position, long id) {
                        valorSpinnerCuentas2 = String.valueOf(parent.getItemAtPosition(position));
                    }
                    public void onNothingSelected(AdapterView<?> parent) {

                    }
                });

        cmbDivisas.setOnItemSelectedListener(
                new AdapterView.OnItemSelectedListener() {
                    public void onItemSelected(AdapterView<?> parent, android.view.View v, int position, long id) {
                        valorSpinnerDivisas = String.valueOf(parent.getItemAtPosition(position));
                    }
                    public void onNothingSelected(AdapterView<?> parent) {
                        //lblMensaje.setText("");
                    }
                });
    }

    @Override
    public void onCheckedChanged(RadioGroup radioGroup, int i) {

        System.out.println("hola");

        switch (i) {

            case R.id.rbAjenaTransferencia:
                cmbCuentas2.setVisibility(View.INVISIBLE);
                etCuentaAjena.setVisibility(View.VISIBLE);

                break;

            case R.id.rbPropiaTransferencia:
                cmbCuentas2.setVisibility(View.VISIBLE);
                etCuentaAjena.setVisibility(View.INVISIBLE);
                break;

        }

    }

    @Override
    public void onClick(View view) {

        String cantidad, justificante, tipocuenta , texto;
        Toast toast;

        switch (view.getId()) {

            case R.id.buEnviarTransferencia:

                tipocuenta = "";
                cantidad = String.valueOf(etCantidadTransferencia.getText());

                if (cbJustificante.isChecked()) {
                    justificante = "Enviar justificante";
                }

                else {
                    justificante = "No enviar justificante";
                }

                if (rbAjenaTransferencia.isChecked())
                    tipocuenta = "A cuenta ajena";

                if (rbPropiaTransferencia.isChecked())
                    tipocuenta = "A cuenta propia";

                texto = "Cuenta origen: \n" + valorSpinnerCuentas + "\n" + tipocuenta + "\n" + valorSpinnerCuentas2 + "\n" + "Importe: " + cantidad + valorSpinnerDivisas + "\n" + justificante;
                toast = Toast.makeText(getApplicationContext(), texto, Toast.LENGTH_SHORT);
                toast.show();

                break;

            case R.id.buCancelarTransferencia:

                cbJustificante.setChecked(false);
                rbAjenaTransferencia.setChecked(false);
                rbPropiaTransferencia.setChecked(false);
                etCantidadTransferencia.setText("");
                etCuentaAjena.setText("Escribe el número de cuenta ajena");

                break;

        }

    }
}