package com.caclol.t4a1_climent_carles;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private RecyclerView mRecyclerView;
    private DatosAdapter mAdapter;
    private ArrayList<Comida> datos = ComidaDatos.COMIDAS;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mRecyclerView = findViewById(R.id.recyclerId);

        mRecyclerView.setHasFixedSize(true);

        LinearLayoutManager layoutManager = new LinearLayoutManager(this);

        mRecyclerView.setLayoutManager(layoutManager);

        mAdapter = new DatosAdapter(datos);

        mAdapter.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                //Toast.makeText(getApplicationContext(), "Selección: " + datos.get(mRecyclerView.getChildAdapterPosition(view)).getNombre(), Toast.LENGTH_LONG).show();

                String url = datos.get(mRecyclerView.getChildAdapterPosition(view)).getUrl();
                Intent intent = new Intent(MainActivity.this, WebActivity.class);
                intent.putExtra("url", url);
                startActivity(intent);

            }
        });

        mRecyclerView.setAdapter(mAdapter);



    }
}