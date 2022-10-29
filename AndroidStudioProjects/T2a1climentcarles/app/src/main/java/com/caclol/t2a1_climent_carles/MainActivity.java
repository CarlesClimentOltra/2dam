package com.caclol.t2a1_climent_carles;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private EditText et1, et2;
    private Button bt1;
    private TextView tv3;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = (EditText) findViewById(R.id.et1);
        et2 = (EditText) findViewById(R.id.et2);
        bt1 = (Button) findViewById(R.id.bt1);
        tv3 = (TextView) findViewById(R.id.tv3);

    }

    public void sumar(View view) {

        String valor1 = et1.getText().toString();
        String valor2 = et2.getText().toString();
        int num1 = Integer.parseInt(valor1);
        int num2 = Integer.parseInt(valor2);
        int suma = num1+num2;
        String resultado = String.valueOf(suma);
        tv3.setText(resultado);

    }





}