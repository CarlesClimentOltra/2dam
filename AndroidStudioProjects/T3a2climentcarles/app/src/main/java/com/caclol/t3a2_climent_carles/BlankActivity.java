package com.caclol.t3a2_climent_carles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.TextView;
import android.widget.Toast;

public class BlankActivity extends AppCompatActivity implements View.OnClickListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_blank);

        TextView tv2 = (TextView)findViewById(R.id.tv2);

        String texto = getIntent().getStringExtra("texto");
        tv2.setText(texto);
        Toast.makeText(getApplicationContext(), texto, Toast.LENGTH_LONG).show();

        ImageButton botonVolver = (ImageButton)findViewById(R.id.botonVolver);

        botonVolver.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {

        Intent i = new Intent(BlankActivity.this, MainActivity.class);
        startActivity(i);

    }
}