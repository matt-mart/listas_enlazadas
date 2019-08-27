
NODE* Create_Nodes (
  int _n
){

  if ( _n == 0 )
    return nullptr;

  NODE* node = new NODE;

  node->next = Create_Nodes( _n - 1 );

  return node;

}

void Create_Queue_Recursive (
  QUEUE* _queue,
  int    _size
){

  Delete_Queue( _queue );
  _queue->head = Create_Nodes( _size );



}
