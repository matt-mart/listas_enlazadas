NODO* Delete_Nodos(
  NODO* _nodo
){

  if ( _nodo == nullptr){
    delete _nodo;
    return nullptr;
  }

  Delete_Nodos( _nodo->proximo );

}

void Delete_Queue(
  QUEUE* queue
){

  queue->raiz = Delete_Nodos( queue->raiz );

}
