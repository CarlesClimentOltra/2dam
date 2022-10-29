package com.caclol.t4a1_climent_carles;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class DatosAdapter extends RecyclerView.Adapter<DatosAdapter.ViewHolderDatos> implements View.OnClickListener {

    ArrayList<Comida> listaComidas;
    private View.OnClickListener listener;

    public DatosAdapter(ArrayList<Comida> listaComidas) {

        this.listaComidas = listaComidas;

    }

    @NonNull
    @Override
    public ViewHolderDatos onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {

        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.listitem_comida, null, false);

        view.setOnClickListener(this);

        return new ViewHolderDatos(view);

    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolderDatos holder, int position) {

        holder.asignarDatos(listaComidas.get(position));

    }

    @Override
    public int getItemCount() {
        return listaComidas.size();
    }

    public void setOnClickListener(View.OnClickListener listener){
        this.listener = listener;
    }

    @Override
    public void onClick(View view) {

        if(listener!=null){
            listener.onClick(view);
        }

    }

    public class ViewHolderDatos extends RecyclerView.ViewHolder {

        TextView titulo, subtitulo;
        ImageView imagen;

        public ViewHolderDatos(@NonNull View itemView) {

            super(itemView);

            titulo = itemView.findViewById(R.id.lblTitulo);
            subtitulo = itemView.findViewById(R.id.lblSubtitulo);
            imagen = itemView.findViewById(R.id.ivComida);

        }

        public void asignarDatos(Comida comida) {

            int i;

            titulo.setText(comida.getNombre());
            subtitulo.setText(comida.getOrigen());
            imagen.setImageResource(comida.getFoto());

        }
    }

}
