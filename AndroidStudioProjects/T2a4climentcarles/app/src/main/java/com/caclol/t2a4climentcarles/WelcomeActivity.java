package com.caclol.t2a4climentcarles;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class WelcomeActivity extends AppCompatActivity implements View.OnClickListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_welcome);

        Button bu1 = (Button)findViewById(R.id.bu1);
        bu1.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {

        Intent i = new Intent(WelcomeActivity.this, LoginActivity.class);
        startActivity(i);

    }
}