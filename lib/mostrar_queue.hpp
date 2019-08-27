
void Mostrar_Queue (
  QUEUE _queue
){

  for (
    NODE* node  = _queue.head;
          node != nullptr;
          node  = node->next
  )
    std::cout
      << node->value
      << std::endl;


}

