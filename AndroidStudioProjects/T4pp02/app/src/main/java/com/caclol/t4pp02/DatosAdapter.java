package com.caclol.t4pp02;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;

public class DatosAdapter extends RecyclerView.Adapter<DatosAdapter.ViewHolderDatos> {

    ArrayList<Tarea> listaTareas;

    public DatosAdapter(ArrayList<Tarea> listaTareas) {
        this.listaTareas = listaTareas;
    }

    @NonNull
    @Override
    public ViewHolderDatos onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {

        // Creamos una nueva vista
        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.listitem_tarea, null, false);

        return new ViewHolderDatos(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolderDatos holder, int position) {

        holder.asignarDatos(listaTareas.get(position));

    }

    @Override
    public int getItemCount() {
        return listaTareas.size();
    }

    public class ViewHolderDatos extends RecyclerView.ViewHolder {

        TextView titulo, subtitulo;

        public ViewHolderDatos(@NonNull View itemView) {

            super(itemView);

            titulo = itemView.findViewById(R.id.lblTitulo);
            subtitulo = (TextView) itemView.findViewById(R.id.lblSubtitulo);

        }

        public void asignarDatos(Tarea tarea) {
            titulo.setText(tarea.getNombre());
            subtitulo.setText(tarea.getHora());
        }

    }

}
