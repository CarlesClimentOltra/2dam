package com.caclol.t2a4climentcarles;

import android.graphics.Color;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.caclol.t2a4climentcarles.pojo.Cuenta;
import com.caclol.t2a4climentcarles.pojo.Movimiento;

import java.util.ArrayList;

public class MovementsAdapter extends RecyclerView.Adapter<MovementsAdapter.ViewHolderDatos> implements View.OnClickListener {

    private ArrayList<Movimiento> listaMovimientos;
    private View.OnClickListener listener;

    public MovementsAdapter(ArrayList<Movimiento> listaMovimientos) {

        this.listaMovimientos = listaMovimientos;

    }

    @NonNull
    @Override
    public MovementsAdapter.ViewHolderDatos onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {

        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.item_list_ingresos, null, false);

        view.setOnClickListener(this);

        return new MovementsAdapter.ViewHolderDatos(view);

    }

    @Override
    public void onBindViewHolder(@NonNull MovementsAdapter.ViewHolderDatos holder, int position) {

        holder.asignarDatos(listaMovimientos.get(position));

    }

    @Override
    public int getItemCount() {
        return listaMovimientos.size();
    }

    @Override
    public void onClick(View view) {

    }

    public class ViewHolderDatos extends RecyclerView.ViewHolder {

        TextView tvRecibo, tvImporte;
        ImageView imgCerdo;

        public ViewHolderDatos(@NonNull View itemView) {

            super(itemView);

            tvRecibo = itemView.findViewById(R.id.tvRecibo);
            tvImporte = itemView.findViewById(R.id.tvImporte);
            imgCerdo = itemView.findViewById(R.id.imgCerdo);

        }

        public void asignarDatos(Movimiento movimiento) {

            tvRecibo.setText(movimiento.getDescripcion());
            tvImporte.setText(movimiento.getFechaOperacion() + " Importe:" + movimiento.getImporte());
            imgCerdo.setImageResource(R.drawable.cerdo);

        }
    }

}
