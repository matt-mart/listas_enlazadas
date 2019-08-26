
NODO* Crear_Nodos(int cantidad){

  if ( cantidad == 0 )
    return nullptr;

  NODO* nodo = new NODO;

  nodo->proximo = Crear_Nodos (cantidad-1);

  return nodo;
}

void Create_Queue_Recursive(
  QUEUE* queue,
  int largo
){

  Delete_Queue( queue );
  queue->raiz = Crear_Nodos( largo );



}
