package com.caclol.t2a3_climent_carles;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    TextView tv1;
    int numero1 = 0;
    int numero2 = 0;
    String operacion = "";


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tv1 = (TextView)findViewById(R.id.tv1);

    }

    public void boton0(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("0");
            else
                tv1.setText(tv1.getText() + "0");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("0");
            else
                tv1.setText(tv1.getText() + "0");
        }

    }

    public void boton1(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("1");
            else
                tv1.setText(tv1.getText() + "1");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("1");
            else
                tv1.setText(tv1.getText() + "1");
        }

    }

    public void boton2(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("2");
            else
                tv1.setText(tv1.getText() + "2");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("2");
            else
                tv1.setText(tv1.getText() + "2");
        }

    }

    public void boton3(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("3");
            else
                tv1.setText(tv1.getText() + "3");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("3");
            else
                tv1.setText(tv1.getText() + "3");
        }

    }

    public void boton4(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("4");
            else
                tv1.setText(tv1.getText() + "4");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("4");
            else
                tv1.setText(tv1.getText() + "4");
        }

    }

    public void boton5(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("5");
            else
                tv1.setText(tv1.getText() + "5");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("5");
            else
                tv1.setText(tv1.getText() + "5");
        }

    }

    public void boton6(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("6");
            else
                tv1.setText(tv1.getText() + "6");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("6");
            else
                tv1.setText(tv1.getText() + "6");
        }

    }

    public void boton7(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("7");
            else
                tv1.setText(tv1.getText() + "7");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("7");
            else
                tv1.setText(tv1.getText() + "7");
        }

    }

    public void boton8(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("8");
            else
                tv1.setText(tv1.getText() + "8");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("8");
            else
                tv1.setText(tv1.getText() + "8");
        }

    }

    public void boton9(View view) {

        if (operacion.equals("")) {

            numero1 = Integer.parseInt(tv1.getText().toString());

            if (numero1 == 0)
                tv1.setText("9");
            else
                tv1.setText(tv1.getText() + "9");
        }

        else {

            numero2 = Integer.parseInt(tv1.getText().toString());

            if (numero2 == 0)
                tv1.setText("9");
            else
                tv1.setText(tv1.getText() + "9");
        }

    }

    public void botonC (View view) {

        tv1.setText("0");
        numero1 = 0;
        numero2 = 0;
        operacion = "";

    }

    public void botonSumar(View view) {

        numero1 = Integer.parseInt(tv1.getText().toString());
        operacion = "+";
        tv1.setText("0");

    }public void botonRestar(View view) {

        numero1 = Integer.parseInt(tv1.getText().toString());
        operacion = "-";
        tv1.setText("0");

    }public void botonMultiplicar(View view) {

        numero1 = Integer.parseInt(tv1.getText().toString());
        operacion = "*";
        tv1.setText("0");

    }

    public void botonDividir(View view) {

        numero1 = Integer.parseInt(tv1.getText().toString());
        operacion = "/";
        tv1.setText("0");

    }

    public void botonIgual(View view) {

        int resultado = 0;

        numero2 = Integer.parseInt(tv1.getText().toString());

        if (operacion.equals("+")) {

            resultado = numero1+numero2;

        }

        if (operacion.equals("-")) {

            resultado = numero1-numero2;

        }

        if (operacion.equals("*")) {

            resultado = numero1*numero2;

        }

        if (operacion.equals("/")) {

            resultado = numero1/numero2;

        }

        tv1.setText(resultado + "");

    }

}