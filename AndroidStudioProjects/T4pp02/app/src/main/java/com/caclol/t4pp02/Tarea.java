package com.caclol.t4pp02;

public class Tarea {

    private String nombre;
    private String hora;

    public Tarea(String nombre, String hora){
        this.nombre = nombre;
        this.hora = hora;
    }

    public void setNombre(String nombre){
        this.nombre = nombre;
    }

    public void setHora(String hora){
        this.hora = hora;
    }

    public String getNombre(){
        return nombre;
    }

    public String getHora(){
        return hora;
    }

}
