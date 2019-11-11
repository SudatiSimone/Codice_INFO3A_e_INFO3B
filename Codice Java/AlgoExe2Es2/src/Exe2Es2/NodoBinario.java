package Exe2Es2;

//Nodo di un albero binario
class NodoBinario{
  public Object elem;
  public NodoBinario padre; //puntatore al padre
  public NodoBinario sinistro; //puntatore al figlio sinistro
  public NodoBinario destro; //puntatore al figlio destro
   

  public NodoBinario(Object el){
      elem = el;
      padre = sinistro= destro = null;    
  }
}