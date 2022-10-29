package com.caclol.tema3app06;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    private Button boton2, boton3, boton4;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        boton2 = (Button)findViewById(R.id.btnAnonima);
        boton3 = (Button)findViewById(R.id.btnImplements);
        boton4 = (Button)findViewById(R.id.btnImplements2);

        boton2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Toast.makeText(getApplicationContext(), "Info de forma Anónima", Toast.LENGTH_LONG).show();
            }
        });
        boton3.setOnClickListener(this);
        boton4.setOnClickListener(this);

    }

    public void info (View view) {
        Toast.makeText(getApplicationContext(), "Info de XML", Toast.LENGTH_LONG).show();
    }

    @Override
    public void onClick(View view) {
//        Toast.makeText(getApplicationContext(), "Info de Implements", Toast.LENGTH_LONG).show();
        switch (view.getId()) {
            case R.id.btnImplements:
                Toast.makeText(getApplicationContext(), "Info de Implements", Toast.LENGTH_LONG).show();
                break;

            case R.id.btnImplements2:
                Toast.makeText(getApplicationContext(), "Info de Implements2", Toast.LENGTH_LONG).show();
                break;
        }
    }
}