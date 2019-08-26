

void Create_Queue_iterative(
  QUEUE* queue,
  int largo
){

  Delete_Queue( queue );

  NODO** nodo = &(queue.raiz);

  for( int i = 0; i<largo; i+=1 ){

    (*nodo) = new NODO;           // new siempre da un puntero.
    nodo = &(nodo->proximo);


  }



}
