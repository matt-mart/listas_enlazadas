
NODE* Delete_Nodes (
  NODE* _node
){

  if ( _node == nullptr ){
    delete _node;
    return nullptr;
  }

  Delete_Nodes( _node->next );

}

void Delete_Queue (
  QUEUE* _queue
){

  _queue->head = Delete_Nodes( _queue->head );

}
