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

import java.util.ArrayList;

public class AccountsAdapter extends RecyclerView.Adapter<AccountsAdapter.ViewHolderDatos> implements View.OnClickListener{

    private ArrayList<Cuenta> listaCuentas;
    private View.OnClickListener listener;

    public AccountsAdapter(ArrayList<Cuenta> listaCuentas) {

        this.listaCuentas = listaCuentas;

    }

    @NonNull
    @Override
    public ViewHolderDatos onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {

        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.item_list_cuentas, null, false);

        view.setOnClickListener(this);

        return new ViewHolderDatos(view);

    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolderDatos holder, int position) {

        holder.asignarDatos(listaCuentas.get(position));

    }

    @Override
    public int getItemCount() {
        return listaCuentas.size();
    }

    @Override
    public void onClick(View view) {

        if(listener!=null){
            listener.onClick(view);
        }

    }

    public class ViewHolderDatos extends RecyclerView.ViewHolder {

        TextView tvNumCuenta, tvSaldo;
        ImageView imgBanco;

        public ViewHolderDatos(@NonNull View itemView) {

            super(itemView);

            tvNumCuenta = itemView.findViewById(R.id.tvNumCuenta);
            tvSaldo = itemView.findViewById(R.id.tvSaldo);
            imgBanco = itemView.findViewById(R.id.imgBanco);

        }

        public void asignarDatos(Cuenta cuenta) {

            tvNumCuenta.setText(cuenta.getNumeroCuenta());
            tvSaldo.setText(String.valueOf(cuenta.getSaldoActual()));

            if (cuenta.getSaldoActual()>0)
                tvSaldo.setTextColor(Color.rgb(100, 255, 100));
            else
                tvSaldo.setTextColor(Color.rgb(255, 0, 0));

            imgBanco.setImageResource(R.drawable.banco);

        }
    }

}
